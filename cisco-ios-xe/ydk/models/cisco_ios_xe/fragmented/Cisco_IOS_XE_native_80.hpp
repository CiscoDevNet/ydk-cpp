#ifndef _CISCO_IOS_XE_NATIVE_80_
#define _CISCO_IOS_XE_NATIVE_80_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_79.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_ : public ydk::Entity
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

        ydk::YLeaf profile; //type: empty
        class Match; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match
        class Replay; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay
        class Tag; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay> replay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag> tag; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address> address; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: one of uint16, string
        ydk::YLeaf ipv6; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay : public ydk::Entity
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

        class Counter; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter
        class Time; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time> time; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter : public ydk::Entity
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

        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window_size; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cts; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts> cts;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts


class Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying : public ydk::Entity
{
    public:
        PairWiseKeying();
        ~PairWiseKeying();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf safety_limit; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying


class Native::Crypto::Gdoi::Group::Server::Local::Default_ : public ydk::Entity
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

        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf gikev2; //type: empty
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Address
        class Authorization; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization
        class Group_; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_
        class Identifier; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier
        class Redundancy; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy
        class Registration; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey
        class Sa; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Address> address; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy> redundancy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa> sa;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Address : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identity; //type: empty
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_ : public ydk::Entity
{
    public:
        Group_();
        ~Group_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Size; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size> size; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size : public ydk::Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

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
        class Periodic; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crl; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl : public ydk::Entity
{
    public:
        Crl();
        ~Crl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trustpoint; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey : public ydk::Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acknowledgement; //type: empty
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address> address; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm> algorithm; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit> retransmit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash> sig_hash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport> transport;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm : public ydk::Entity
{
    public:
        Algorithm();
        ~Algorithm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime : public ydk::Entity
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
        ydk::YLeaf seconds; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash : public ydk::Entity
{
    public:
        SigHash();
        ~SigHash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf algorithm; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa : public ydk::Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive_only; //type: empty
        class D3P; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P
        class Ipsec; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P> d3p; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec> > ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying> pair_wise_keying; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P : public ydk::Entity
{
    public:
        D3P();
        ~D3P();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec : public ydk::Entity
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

        ydk::YLeaf sequence; //type: uint16

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying : public ydk::Entity
{
    public:
        PairWiseKeying();
        ~PairWiseKeying();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying


class Native::Crypto::Gdoi::Group::Default_ : public ydk::Entity
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

        ydk::YLeaf passive; //type: empty
        class Client; //type: Native::Crypto::Gdoi::Group::Default_::Client
        class Identity; //type: Native::Crypto::Gdoi::Group::Default_::Identity
        class Server; //type: Native::Crypto::Gdoi::Group::Default_::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Identity> identity; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Server> server;
        
}; // Native::Crypto::Gdoi::Group::Default_


class Native::Crypto::Gdoi::Group::Default_::Client : public ydk::Entity
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

        ydk::YLeaf bypass_policy; //type: empty
        ydk::YLeaf transform_sets; //type: empty
        ydk::YLeaf transport_encrypt_key; //type: TransportEncryptKey
        class Protocol; //type: Native::Crypto::Gdoi::Group::Default_::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gdoi::Group::Default_::Client::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Default_::Client::Rekey
        class Status; //type: Native::Crypto::Gdoi::Group::Default_::Client::Status

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Protocol> protocol; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck> recovery_check; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Status> status;
                class TransportEncryptKey;

}; // Native::Crypto::Gdoi::Group::Default_::Client


class Native::Crypto::Gdoi::Group::Default_::Client::Protocol : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default_::Client::Protocol


class Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck : public ydk::Entity
{
    public:
        RecoveryCheck();
        ~RecoveryCheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck


class Native::Crypto::Gdoi::Group::Default_::Client::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: empty

}; // Native::Crypto::Gdoi::Group::Default_::Client::Registration


class Native::Crypto::Gdoi::Group::Default_::Client::Rekey : public ydk::Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Encryption; //type: Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption> encryption; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash> hash; // presence node
        
}; // Native::Crypto::Gdoi::Group::Default_::Client::Rekey


class Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption


class Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash


class Native::Crypto::Gdoi::Group::Default_::Client::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActiveSa; //type: Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa> active_sa; // presence node
        
}; // Native::Crypto::Gdoi::Group::Default_::Client::Status


class Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa : public ydk::Entity
{
    public:
        ActiveSa();
        ~ActiveSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa


class Native::Crypto::Gdoi::Group::Default_::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gdoi::Group::Default_::Identity


class Native::Crypto::Gdoi::Group::Default_::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: empty
        class Address; //type: Native::Crypto::Gdoi::Group::Default_::Server::Address
        class Hostname; //type: Native::Crypto::Gdoi::Group::Default_::Server::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Server::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Server::Hostname> hostname;
        
}; // Native::Crypto::Gdoi::Group::Default_::Server


class Native::Crypto::Gdoi::Group::Default_::Server::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Default_::Server::Address


class Native::Crypto::Gdoi::Group::Default_::Server::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

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

}; // Native::Crypto::Gdoi::Group::Default_::Server::Hostname


class Native::Crypto::Ikev2 : public ydk::Entity
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

        ydk::YLeaf certificate_cache; //type: uint16
        ydk::YLeaf cluster; //type: empty
        ydk::YLeaf cookie_challenge; //type: uint16
        ydk::YLeaf disconnect_revoked_peers; //type: empty
        ydk::YLeaf name_mangler; //type: string
        ydk::YLeaf window; //type: uint8
        class Authorization; //type: Native::Crypto::Ikev2::Authorization
        class Client; //type: Native::Crypto::Ikev2::Client
        class Cts; //type: Native::Crypto::Ikev2::Cts
        class Diagnose; //type: Native::Crypto::Ikev2::Diagnose
        class DpdContainer; //type: Native::Crypto::Ikev2::DpdContainer
        class Fragmentation; //type: Native::Crypto::Ikev2::Fragmentation
        class HttpUrl; //type: Native::Crypto::Ikev2::HttpUrl
        class Keyring; //type: Native::Crypto::Ikev2::Keyring
        class Limit; //type: Native::Crypto::Ikev2::Limit
        class Nat; //type: Native::Crypto::Ikev2::Nat
        class Policy; //type: Native::Crypto::Ikev2::Policy
        class Profile; //type: Native::Crypto::Ikev2::Profile
        class Proposal; //type: Native::Crypto::Ikev2::Proposal
        class Reconnect; //type: Native::Crypto::Ikev2::Reconnect
        class Redirect; //type: Native::Crypto::Ikev2::Redirect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Diagnose> diagnose;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::DpdContainer> dpd_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Fragmentation> fragmentation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::HttpUrl> http_url;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring> > keyring;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Nat> nat;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy> > policy;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile> > profile;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal> > proposal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Reconnect> reconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Redirect> redirect;
        
}; // Native::Crypto::Ikev2


class Native::Crypto::Ikev2::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::Crypto::Ikev2::Authorization::Policy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy> > policy;
        
}; // Native::Crypto::Ikev2::Authorization


class Native::Crypto::Ikev2::Authorization::Policy : public ydk::Entity
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

        ydk::YLeaf policy_name; //type: string
        class Route; //type: Native::Crypto::Ikev2::Authorization::Policy::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route> route;
        
}; // Native::Crypto::Ikev2::Authorization::Policy


class Native::Crypto::Ikev2::Authorization::Policy::Route : public ydk::Entity
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

        class Set; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set> set;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set : public ydk::Entity
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

        class Interface; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface> interface;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface : public ydk::Entity
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

        ydk::YLeaf interface_default; //type: empty
        class InterfaceList; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList> > interface_list;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList


class Native::Crypto::Ikev2::Client : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Flexvpn; //type: Native::Crypto::Ikev2::Client::Flexvpn

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn> > flexvpn;
        
}; // Native::Crypto::Ikev2::Client


class Native::Crypto::Ikev2::Client::Flexvpn : public ydk::Entity
{
    public:
        Flexvpn();
        ~Flexvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flexvpn_name; //type: string
        class Peer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Peer
        class Connect; //type: Native::Crypto::Ikev2::Client::Flexvpn::Connect
        class Source; //type: Native::Crypto::Ikev2::Client::Flexvpn::Source
        class Client_; //type: Native::Crypto::Ikev2::Client::Flexvpn::Client_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Peer> > peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Connect> connect;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Source> > source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Client_> client;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn


class Native::Crypto::Ikev2::Client::Flexvpn::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_id; //type: uint8
        class PeerIdContainer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer> peer_id_container;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Peer


class Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer : public ydk::Entity
{
    public:
        PeerIdContainer();
        ~PeerIdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf track; //type: uint16
        ydk::YLeaf up_down; //type: UpDown
        class UpDown;

}; // Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer


class Native::Crypto::Ikev2::Client::Flexvpn::Connect : public ydk::Entity
{
    public:
        Connect();
        ~Connect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf track; //type: uint16
        ydk::YLeaf up_down; //type: UpDown
        class UpDown;

}; // Native::Crypto::Ikev2::Client::Flexvpn::Connect


class Native::Crypto::Ikev2::Client::Flexvpn::Source : public ydk::Entity
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

        ydk::YLeaf source_id; //type: uint8
        class SourceIdContainer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer> source_id_container;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Source


class Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer : public ydk::Entity
{
    public:
        SourceIdContainer();
        ~SourceIdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf track; //type: uint16

}; // Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer


class Native::Crypto::Ikev2::Client::Flexvpn::Client_ : public ydk::Entity
{
    public:
        Client_();
        ~Client_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Connect; //type: Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect> connect;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Client_


class Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect : public ydk::Entity
{
    public:
        Connect();
        ~Connect();

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

}; // Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect


class Native::Crypto::Ikev2::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sgt; //type: empty

}; // Native::Crypto::Ikev2::Cts


class Native::Crypto::Ikev2::Diagnose : public ydk::Entity
{
    public:
        Diagnose();
        ~Diagnose();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf error; //type: uint16

}; // Native::Crypto::Ikev2::Diagnose


class Native::Crypto::Ikev2::DpdContainer : public ydk::Entity
{
    public:
        DpdContainer();
        ~DpdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dpd; //type: uint16
        ydk::YLeaf retry_interval; //type: uint8
        ydk::YLeaf dpd_query; //type: DpdQuery
        class DpdQuery;

}; // Native::Crypto::Ikev2::DpdContainer


class Native::Crypto::Ikev2::Fragmentation : public ydk::Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mtu; //type: uint16

}; // Native::Crypto::Ikev2::Fragmentation


class Native::Crypto::Ikev2::HttpUrl : public ydk::Entity
{
    public:
        HttpUrl();
        ~HttpUrl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cert; //type: empty

}; // Native::Crypto::Ikev2::HttpUrl


class Native::Crypto::Ikev2::Keyring : public ydk::Entity
{
    public:
        Keyring();
        ~Keyring();

        bool has_data() const override;
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
        class Peer; //type: Native::Crypto::Ikev2::Keyring::Peer

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer> > peer;
        
}; // Native::Crypto::Ikev2::Keyring


class Native::Crypto::Ikev2::Keyring::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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
        ydk::YLeaf description; //type: string
        ydk::YLeaf hostname; //type: string
        class Address; //type: Native::Crypto::Ikev2::Keyring::Peer::Address
        class Identity; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity
        class PreSharedKey; //type: Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity> identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey> pre_shared_key;
        
}; // Native::Crypto::Ikev2::Keyring::Peer


class Native::Crypto::Ikev2::Keyring::Peer::Address : public ydk::Entity
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

        ydk::YLeaf ipv6_prefix; //type: string
        class Ipv4; //type: Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4> ipv4;
        
}; // Native::Crypto::Ikev2::Keyring::Peer::Address


class Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4


class Native::Crypto::Ikev2::Keyring::Peer::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

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
        ydk::YLeaf key_id; //type: string
        class Email; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity::Email
        class Fqdn; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity::Email> email;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn> fqdn;
        
}; // Native::Crypto::Ikev2::Keyring::Peer::Identity


class Native::Crypto::Ikev2::Keyring::Peer::Identity::Email : public ydk::Entity
{
    public:
        Email();
        ~Email();

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
        ydk::YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Identity::Email


class Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn : public ydk::Entity
{
    public:
        Fqdn();
        ~Fqdn();

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
        ydk::YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn


class Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey : public ydk::Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: empty
        ydk::YLeaf remote; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        ydk::YLeaf hex; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey


class Native::Crypto::Ikev2::Limit : public ydk::Entity
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

        ydk::YLeaf max_sa; //type: uint32
        class MaxNegSa; //type: Native::Crypto::Ikev2::Limit::MaxNegSa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Limit::MaxNegSa> max_neg_sa;
        
}; // Native::Crypto::Ikev2::Limit


class Native::Crypto::Ikev2::Limit::MaxNegSa : public ydk::Entity
{
    public:
        MaxNegSa();
        ~MaxNegSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf max_in_negotation_sa; //type: uint32
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Crypto::Ikev2::Limit::MaxNegSa


class Native::Crypto::Ikev2::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf keepalive; //type: uint16

}; // Native::Crypto::Ikev2::Nat


class Native::Crypto::Ikev2::Policy : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf proposal; //type: string
        class Match; //type: Native::Crypto::Ikev2::Policy::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match> match;
        
}; // Native::Crypto::Ikev2::Policy


class Native::Crypto::Ikev2::Policy::Match : public ydk::Entity
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

        class Address; //type: Native::Crypto::Ikev2::Policy::Match::Address
        class Fvrf; //type: Native::Crypto::Ikev2::Policy::Match::Fvrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match::Fvrf> fvrf;
        
}; // Native::Crypto::Ikev2::Policy::Match


class Native::Crypto::Ikev2::Policy::Match::Address : public ydk::Entity
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

        ydk::YLeaf local; //type: string

}; // Native::Crypto::Ikev2::Policy::Match::Address


class Native::Crypto::Ikev2::Policy::Match::Fvrf : public ydk::Entity
{
    public:
        Fvrf();
        ~Fvrf();

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
        ydk::YLeaf any; //type: empty

}; // Native::Crypto::Ikev2::Policy::Match::Fvrf


class Native::Crypto::Ikev2::Profile : public ydk::Entity
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf ivrf; //type: string
        ydk::YLeaf shutdown; //type: empty
        class Aaa; //type: Native::Crypto::Ikev2::Profile::Aaa
        class Authentication; //type: Native::Crypto::Ikev2::Profile::Authentication
        class ConfigExchange; //type: Native::Crypto::Ikev2::Profile::ConfigExchange
        class Dpd; //type: Native::Crypto::Ikev2::Profile::Dpd
        class Identity; //type: Native::Crypto::Ikev2::Profile::Identity
        class InitialContact; //type: Native::Crypto::Ikev2::Profile::InitialContact
        class Keyring; //type: Native::Crypto::Ikev2::Profile::Keyring
        class Lifetime; //type: Native::Crypto::Ikev2::Profile::Lifetime
        class Match; //type: Native::Crypto::Ikev2::Profile::Match
        class Nat; //type: Native::Crypto::Ikev2::Profile::Nat
        class Pki; //type: Native::Crypto::Ikev2::Profile::Pki
        class Reconnect; //type: Native::Crypto::Ikev2::Profile::Reconnect
        class Redirect; //type: Native::Crypto::Ikev2::Profile::Redirect
        class VirtualTemplate; //type: Native::Crypto::Ikev2::Profile::VirtualTemplate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa> aaa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::ConfigExchange> config_exchange;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Dpd> dpd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Identity> identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::InitialContact> initial_contact;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring> keyring;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Pki> pki;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Reconnect> reconnect; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::VirtualTemplate> virtual_template;
        
}; // Native::Crypto::Ikev2::Profile


class Native::Crypto::Ikev2::Profile::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accounting; //type: Native::Crypto::Ikev2::Profile::Aaa::Accounting
        class Authentication; //type: Native::Crypto::Ikev2::Profile::Aaa::Authentication
        class Authorization; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization> authorization;
        
}; // Native::Crypto::Ikev2::Profile::Aaa


class Native::Crypto::Ikev2::Profile::Aaa::Accounting : public ydk::Entity
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

        ydk::YLeaf anyconnect_eap; //type: string
        ydk::YLeaf cert; //type: string
        ydk::YLeaf eap; //type: string
        ydk::YLeaf psk; //type: string

}; // Native::Crypto::Ikev2::Profile::Aaa::Accounting


class Native::Crypto::Ikev2::Profile::Aaa::Authentication : public ydk::Entity
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

        ydk::YLeaf anyconnect_eap; //type: string
        ydk::YLeaf eap; //type: string

}; // Native::Crypto::Ikev2::Profile::Aaa::Authentication


class Native::Crypto::Ikev2::Profile::Aaa::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group
        class User; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User> user;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group : public ydk::Entity
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

        ydk::YLeaf override; //type: empty
        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap
        class Cert; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert
        class Eap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap
        class Psk; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert> cert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap> eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk> psk;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap : public ydk::Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert : public ydk::Entity
{
    public:
        Cert();
        ~Cert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap : public ydk::Entity
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

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk : public ydk::Entity
{
    public:
        Psk();
        ~Psk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User : public ydk::Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap
        class Cert; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert
        class Eap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap
        class Psk; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert> cert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap> eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk> psk;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap : public ydk::Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert : public ydk::Entity
{
    public:
        Cert();
        ~Cert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap : public ydk::Entity
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

        ydk::YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk : public ydk::Entity
{
    public:
        Psk();
        ~Psk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password


class Native::Crypto::Ikev2::Profile::Authentication : public ydk::Entity
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

        class Local; //type: Native::Crypto::Ikev2::Profile::Authentication::Local
        class Remote; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote> remote;
        
}; // Native::Crypto::Ikev2::Profile::Authentication


class Native::Crypto::Ikev2::Profile::Authentication::Local : public ydk::Entity
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

        ydk::YLeaf ecdsa_sig; //type: empty
        ydk::YLeaf rsa_sig; //type: empty
        class Eap; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap
        class PreShare; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap> eap; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare> pre_share; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap : public ydk::Entity
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

        class Gtc; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc
        class Md5; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5
        class Mschapv2; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc> gtc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5> md5;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2> mschapv2;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc : public ydk::Entity
{
    public:
        Gtc();
        ~Gtc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5 : public ydk::Entity
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

        ydk::YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2 : public ydk::Entity
{
    public:
        Mschapv2();
        ~Mschapv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare : public ydk::Entity
{
    public:
        PreShare();
        ~PreShare();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key> key;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare


class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key


class Native::Crypto::Ikev2::Profile::Authentication::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ecdsa_sig; //type: empty
        ydk::YLeaf rsa_sig; //type: empty
        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap
        class Eap; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap
        class PreShare; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap> eap; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare> pre_share; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote


class Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap : public ydk::Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aggregate; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate> aggregate; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate : public ydk::Entity
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

        ydk::YLeaf cert_request; //type: empty

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate


class Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap : public ydk::Entity
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

        ydk::YLeaf query_identity; //type: empty
        ydk::YLeaf timeout; //type: uint8

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap


class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare : public ydk::Entity
{
    public:
        PreShare();
        ~PreShare();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key> key;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare


class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key


class Native::Crypto::Ikev2::Profile::ConfigExchange : public ydk::Entity
{
    public:
        ConfigExchange();
        ~ConfigExchange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: empty
        ydk::YLeaf set; //type: Set
        class Set;

}; // Native::Crypto::Ikev2::Profile::ConfigExchange


class Native::Crypto::Ikev2::Profile::Dpd : public ydk::Entity
{
    public:
        Dpd();
        ~Dpd();

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
        ydk::YLeaf retry; //type: uint8
        ydk::YLeaf query; //type: Query
        class Query;

}; // Native::Crypto::Ikev2::Profile::Dpd


class Native::Crypto::Ikev2::Profile::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Local; //type: Native::Crypto::Ikev2::Profile::Identity::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Identity::Local> local;
        
}; // Native::Crypto::Ikev2::Profile::Identity


class Native::Crypto::Ikev2::Profile::Identity::Local : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf dn; //type: empty
        ydk::YLeaf email; //type: string
        ydk::YLeaf fqdn; //type: string
        ydk::YLeaf key_id; //type: string

}; // Native::Crypto::Ikev2::Profile::Identity::Local


class Native::Crypto::Ikev2::Profile::InitialContact : public ydk::Entity
{
    public:
        InitialContact();
        ~InitialContact();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf force; //type: empty

}; // Native::Crypto::Ikev2::Profile::InitialContact


class Native::Crypto::Ikev2::Profile::Keyring : public ydk::Entity
{
    public:
        Keyring();
        ~Keyring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: string
        class Aaa; //type: Native::Crypto::Ikev2::Profile::Keyring::Aaa

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring::Aaa> > aaa;
        
}; // Native::Crypto::Ikev2::Profile::Keyring


class Native::Crypto::Ikev2::Profile::Keyring::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

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
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Keyring::Aaa


class Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password


class Native::Crypto::Ikev2::Profile::Lifetime : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf certificate; //type: empty

}; // Native::Crypto::Ikev2::Profile::Lifetime


class Native::Crypto::Ikev2::Profile::Match : public ydk::Entity
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

        ydk::YLeaf certificate; //type: string
        class Address; //type: Native::Crypto::Ikev2::Profile::Match::Address
        class Fvrf; //type: Native::Crypto::Ikev2::Profile::Match::Fvrf
        class Identity; //type: Native::Crypto::Ikev2::Profile::Match::Identity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Fvrf> fvrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity> identity;
        
}; // Native::Crypto::Ikev2::Profile::Match


class Native::Crypto::Ikev2::Profile::Match::Address : public ydk::Entity
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

        class Local; //type: Native::Crypto::Ikev2::Profile::Match::Address::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Address::Local> local;
        
}; // Native::Crypto::Ikev2::Profile::Match::Address


class Native::Crypto::Ikev2::Profile::Match::Address::Local : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf interface; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Address::Local


class Native::Crypto::Ikev2::Profile::Match::Fvrf : public ydk::Entity
{
    public:
        Fvrf();
        ~Fvrf();

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
        ydk::YLeaf any; //type: empty

}; // Native::Crypto::Ikev2::Profile::Match::Fvrf


class Native::Crypto::Ikev2::Profile::Match::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Remote; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote> remote;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf key_id; //type: string
        class Address; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address
        class Email; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email
        class Fqdn; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email> email;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn> fqdn;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address : public ydk::Entity
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

        ydk::YLeafList ipv6_prefix; //type: list of  string
        class Ipv4; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4> > ipv4;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address

class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::Gdoi::Group::Default_::Client::TransportEncryptKey : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group_key;
        static const ydk::Enum::YLeaf pair_wise_key;

};

class Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::UpDown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class Native::Crypto::Ikev2::DpdContainer::DpdQuery : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_demand;
        static const ydk::Enum::YLeaf periodic;

};

class Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Limit::MaxNegSa::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf incoming;
        static const ydk::Enum::YLeaf outgoing;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::ConfigExchange::Set : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf send;

};

class Native::Crypto::Ikev2::Profile::Dpd::Query : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_demand;
        static const ydk::Enum::YLeaf periodic;

};

class Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_80_ */

