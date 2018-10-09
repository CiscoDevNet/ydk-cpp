#ifndef _CISCO_IOS_XE_NATIVE_4_
#define _CISCO_IOS_XE_NATIVE_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_3.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate : public ydk::Entity
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

        class PerFlow; //type: Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate


class Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow : public ydk::Entity
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

}; // Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow


class Native::Flow::Record::Default::Collect::Application::Media::Packets : public ydk::Entity
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

        class Counter; //type: Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter
        class Rate; //type: Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Default::Collect::Application::Media::Packets


class Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter : public ydk::Entity
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

}; // Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter


class Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate : public ydk::Entity
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

        class Variation; //type: Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation> variation; // presence node
        
}; // Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate


class Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation : public ydk::Entity
{
    public:
        Variation();
        ~Variation();

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
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation


class Native::Flow::Record::Default::Collect::Application::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf account_on_resolution; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Name


class Native::Flow::Record::Default::Collect::Application::Nntp : public ydk::Entity
{
    public:
        Nntp();
        ~Nntp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Nntp


class Native::Flow::Record::Default::Collect::Application::Pop3 : public ydk::Entity
{
    public:
        Pop3();
        ~Pop3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Pop3


class Native::Flow::Record::Default::Collect::Application::Rtmp : public ydk::Entity
{
    public:
        Rtmp();
        ~Rtmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pageurl; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Rtmp


class Native::Flow::Record::Default::Collect::Application::Rtsp : public ydk::Entity
{
    public:
        Rtsp();
        ~Rtsp();

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

}; // Native::Flow::Record::Default::Collect::Application::Rtsp


class Native::Flow::Record::Default::Collect::Application::Sip : public ydk::Entity
{
    public:
        Sip();
        ~Sip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Sip


class Native::Flow::Record::Default::Collect::Application::Smtp : public ydk::Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sender; //type: empty
        ydk::YLeaf server; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Smtp


class Native::Flow::Record::Default::Collect::Application::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_name; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Ssl


class Native::Flow::Record::Default::Collect::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: empty
        ydk::YLeaf initiator; //type: empty
        ydk::YLeaf new_connections; //type: empty
        ydk::YLeaf sum_duration; //type: empty
        ydk::YLeaf transaction_id; //type: empty
        class Client; //type: Native::Flow::Record::Default::Collect::Connection::Client
        class Delay; //type: Native::Flow::Record::Default::Collect::Connection::Delay
        class Server; //type: Native::Flow::Record::Default::Collect::Connection::Server
        class Transaction; //type: Native::Flow::Record::Default::Collect::Connection::Transaction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Transaction> transaction;
        
}; // Native::Flow::Record::Default::Collect::Connection


class Native::Flow::Record::Default::Collect::Connection::Client : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Default::Collect::Connection::Client::Counter
        class Ipv4; //type: Native::Flow::Record::Default::Collect::Connection::Client::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default::Collect::Connection::Client::Ipv6
        class Transport; //type: Native::Flow::Record::Default::Collect::Connection::Client::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client::Transport> transport;
        
}; // Native::Flow::Record::Default::Collect::Connection::Client


class Native::Flow::Record::Default::Collect::Connection::Client::Counter : public ydk::Entity
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

        class Bytes; //type: Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets> packets;
        
}; // Native::Flow::Record::Default::Collect::Connection::Client::Counter


class Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes


class Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network


class Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport


class Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets


class Native::Flow::Record::Default::Collect::Connection::Client::Ipv4 : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Client::Ipv4


class Native::Flow::Record::Default::Collect::Connection::Client::Ipv6 : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Client::Ipv6


class Native::Flow::Record::Default::Collect::Connection::Client::Transport : public ydk::Entity
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

        ydk::YLeaf port; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Client::Transport


class Native::Flow::Record::Default::Collect::Connection::Delay : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        class Application; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Application
        class Network; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Network
        class Response; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Response

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Response> response;
        
}; // Native::Flow::Record::Default::Collect::Connection::Delay


class Native::Flow::Record::Default::Collect::Connection::Delay::Application : public ydk::Entity
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

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Application


class Native::Flow::Record::Default::Collect::Connection::Delay::Network : public ydk::Entity
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

        class ClientToServer; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer
        class LongLived; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived
        class ToClient; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient
        class ToServer; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer> client_to_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived> long_lived;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient> to_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer> to_server;
        
}; // Native::Flow::Record::Default::Collect::Connection::Delay::Network


class Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer : public ydk::Entity
{
    public:
        ClientToServer();
        ~ClientToServer();

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
        ydk::YLeaf num_samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer


class Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived : public ydk::Entity
{
    public:
        LongLived();
        ~LongLived();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientToServe; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe
        class ToClient; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient
        class ToServe; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe> client_to_serve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient> to_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe> to_serve;
        
}; // Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived


class Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe : public ydk::Entity
{
    public:
        ClientToServe();
        ~ClientToServe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe


class Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient : public ydk::Entity
{
    public:
        ToClient();
        ~ToClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient


class Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe : public ydk::Entity
{
    public:
        ToServe();
        ~ToServe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe


class Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient : public ydk::Entity
{
    public:
        ToClient();
        ~ToClient();

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
        ydk::YLeaf num_samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient


class Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer : public ydk::Entity
{
    public:
        ToServer();
        ~ToServer();

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
        ydk::YLeaf num_samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer


class Native::Flow::Record::Default::Collect::Connection::Delay::Response : public ydk::Entity
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

        class ClientToServer; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer
        class ToServer; //type: Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer> client_to_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer> to_server;
        
}; // Native::Flow::Record::Default::Collect::Connection::Delay::Response


class Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer : public ydk::Entity
{
    public:
        ClientToServer();
        ~ClientToServer();

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
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer


class Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer : public ydk::Entity
{
    public:
        ToServer();
        ~ToServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf histogram; //type: Histogram
        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty
        class Histogram;

}; // Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer


class Native::Flow::Record::Default::Collect::Connection::Server : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Default::Collect::Connection::Server::Counter
        class Ipv4; //type: Native::Flow::Record::Default::Collect::Connection::Server::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default::Collect::Connection::Server::Ipv6
        class Transport; //type: Native::Flow::Record::Default::Collect::Connection::Server::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server::Transport> transport;
        
}; // Native::Flow::Record::Default::Collect::Connection::Server


class Native::Flow::Record::Default::Collect::Connection::Server::Counter : public ydk::Entity
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

        ydk::YLeaf responses; //type: empty
        class Bytes; //type: Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets> packets;
        
}; // Native::Flow::Record::Default::Collect::Connection::Server::Counter


class Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes


class Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network


class Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport


class Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets


class Native::Flow::Record::Default::Collect::Connection::Server::Ipv4 : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Server::Ipv4


class Native::Flow::Record::Default::Collect::Connection::Server::Ipv6 : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Server::Ipv6


class Native::Flow::Record::Default::Collect::Connection::Server::Transport : public ydk::Entity
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

        ydk::YLeaf port; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Server::Transport


class Native::Flow::Record::Default::Collect::Connection::Transaction : public ydk::Entity
{
    public:
        Transaction();
        ~Transaction();

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
        class Counter; //type: Native::Flow::Record::Default::Collect::Connection::Transaction::Counter
        class Duration; //type: Native::Flow::Record::Default::Collect::Connection::Transaction::Duration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Transaction::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection::Transaction::Duration> duration;
        
}; // Native::Flow::Record::Default::Collect::Connection::Transaction


class Native::Flow::Record::Default::Collect::Connection::Transaction::Counter : public ydk::Entity
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

        ydk::YLeaf complete; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Transaction::Counter


class Native::Flow::Record::Default::Collect::Connection::Transaction::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

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
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Connection::Transaction::Duration


class Native::Flow::Record::Default::Collect::Counter : public ydk::Entity
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

        ydk::YLeaf flows; //type: empty
        class Bytes; //type: Native::Flow::Record::Default::Collect::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Default::Collect::Counter::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter::Bytes> bytes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter::Packets> packets; // presence node
        
}; // Native::Flow::Record::Default::Collect::Counter


class Native::Flow::Record::Default::Collect::Counter::Bytes : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Default::Collect::Counter::Bytes::Rate
        class Squared; //type: Native::Flow::Record::Default::Collect::Counter::Bytes::Squared
        class Layer2; //type: Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter::Bytes::Rate> rate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter::Bytes::Squared> squared;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2> layer2;
        
}; // Native::Flow::Record::Default::Collect::Counter::Bytes


class Native::Flow::Record::Default::Collect::Counter::Bytes::Rate : public ydk::Entity
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

        class PerFlow; //type: Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Default::Collect::Counter::Bytes::Rate


class Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow : public ydk::Entity
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

}; // Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow


class Native::Flow::Record::Default::Collect::Counter::Bytes::Squared : public ydk::Entity
{
    public:
        Squared();
        ~Squared();

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

}; // Native::Flow::Record::Default::Collect::Counter::Bytes::Squared


class Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2 : public ydk::Entity
{
    public:
        Layer2();
        ~Layer2();

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

}; // Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2


class Native::Flow::Record::Default::Collect::Counter::Packets : public ydk::Entity
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

        ydk::YLeaf dropped; //type: empty
        ydk::YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Default::Collect::Counter::Packets::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Default::Collect::Counter::Packets


class Native::Flow::Record::Default::Collect::Counter::Packets::Rate : public ydk::Entity
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

        class PerFlow; //type: Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Default::Collect::Counter::Packets::Rate


class Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow : public ydk::Entity
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

}; // Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow


class Native::Flow::Record::Default::Collect::Datalink : public ydk::Entity
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

        ydk::YLeaf destination_vlan_id; //type: empty
        ydk::YLeaf ethertype; //type: empty
        ydk::YLeaf vlan; //type: Vlan
        ydk::YLeaf source_vlan_id; //type: empty
        class Dot1q; //type: Native::Flow::Record::Default::Collect::Datalink::Dot1q
        class Mac; //type: Native::Flow::Record::Default::Collect::Datalink::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Datalink::Dot1q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Datalink::Mac> mac;
                class Vlan;

}; // Native::Flow::Record::Default::Collect::Datalink


class Native::Flow::Record::Default::Collect::Datalink::Dot1q : public ydk::Entity
{
    public:
        Dot1q();
        ~Dot1q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: empty
        class Vlan; //type: Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan> vlan;
        
}; // Native::Flow::Record::Default::Collect::Datalink::Dot1q


class Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan : public ydk::Entity
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

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan


class Native::Flow::Record::Default::Collect::Datalink::Mac : public ydk::Entity
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

        class Destination; //type: Native::Flow::Record::Default::Collect::Datalink::Mac::Destination
        class Source; //type: Native::Flow::Record::Default::Collect::Datalink::Mac::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Datalink::Mac::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Datalink::Mac::Source> source;
        
}; // Native::Flow::Record::Default::Collect::Datalink::Mac


class Native::Flow::Record::Default::Collect::Datalink::Mac::Destination : public ydk::Entity
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

        class Address; //type: Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address> address;
        
}; // Native::Flow::Record::Default::Collect::Datalink::Mac::Destination


class Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address : public ydk::Entity
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

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address


class Native::Flow::Record::Default::Collect::Datalink::Mac::Source : public ydk::Entity
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

        class Address; //type: Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address> address;
        
}; // Native::Flow::Record::Default::Collect::Datalink::Mac::Source


class Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address : public ydk::Entity
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

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address


class Native::Flow::Record::Default::Collect::Flow_ : public ydk::Entity
{
    public:
        Flow_();
        ~Flow_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: empty
        ydk::YLeaf sampler; //type: empty
        ydk::YLeaf end_reason; //type: empty
        class Cts; //type: Native::Flow::Record::Default::Collect::Flow_::Cts
        class Observation; //type: Native::Flow::Record::Default::Collect::Flow_::Observation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Flow_::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Flow_::Observation> observation;
        
}; // Native::Flow::Record::Default::Collect::Flow_


class Native::Flow::Record::Default::Collect::Flow_::Cts : public ydk::Entity
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

        class Destination; //type: Native::Flow::Record::Default::Collect::Flow_::Cts::Destination
        class Source; //type: Native::Flow::Record::Default::Collect::Flow_::Cts::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Flow_::Cts::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Flow_::Cts::Source> source;
        
}; // Native::Flow::Record::Default::Collect::Flow_::Cts


class Native::Flow::Record::Default::Collect::Flow_::Cts::Destination : public ydk::Entity
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

        ydk::YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Default::Collect::Flow_::Cts::Destination


class Native::Flow::Record::Default::Collect::Flow_::Cts::Source : public ydk::Entity
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

        ydk::YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Default::Collect::Flow_::Cts::Source


class Native::Flow::Record::Default::Collect::Flow_::Observation : public ydk::Entity
{
    public:
        Observation();
        ~Observation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf point; //type: empty

}; // Native::Flow::Record::Default::Collect::Flow_::Observation


class Native::Flow::Record::Default::Collect::Interface : public ydk::Entity
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

        class Input; //type: Native::Flow::Record::Default::Collect::Interface::Input
        class Output; //type: Native::Flow::Record::Default::Collect::Interface::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Interface::Input> input; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Interface::Output> output; // presence node
        
}; // Native::Flow::Record::Default::Collect::Interface


class Native::Flow::Record::Default::Collect::Interface::Input : public ydk::Entity
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

        ydk::YLeaf snmp; //type: empty

}; // Native::Flow::Record::Default::Collect::Interface::Input


class Native::Flow::Record::Default::Collect::Interface::Output : public ydk::Entity
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

        ydk::YLeaf snmp; //type: empty

}; // Native::Flow::Record::Default::Collect::Interface::Output


class Native::Flow::Record::Default::Collect::Ipv4 : public ydk::Entity
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

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf header_length; //type: empty
        ydk::YLeaf id; //type: empty
        ydk::YLeaf precedence; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf tos; //type: empty
        ydk::YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Default::Collect::Ipv4::Destination
        class Fragmentation; //type: Native::Flow::Record::Default::Collect::Ipv4::Fragmentation
        class Length; //type: Native::Flow::Record::Default::Collect::Ipv4::Length
        class Option; //type: Native::Flow::Record::Default::Collect::Ipv4::Option
        class Section; //type: Native::Flow::Record::Default::Collect::Ipv4::Section
        class Source; //type: Native::Flow::Record::Default::Collect::Ipv4::Source
        class TotalLength; //type: Native::Flow::Record::Default::Collect::Ipv4::TotalLength
        class Ttl; //type: Native::Flow::Record::Default::Collect::Ipv4::Ttl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Fragmentation> fragmentation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Length> length;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Section> section;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::TotalLength> total_length; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Ttl> ttl; // presence node
        
}; // Native::Flow::Record::Default::Collect::Ipv4


class Native::Flow::Record::Default::Collect::Ipv4::Destination : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Default::Collect::Ipv4::Destination


class Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask


class Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix : public ydk::Entity
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

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix


class Native::Flow::Record::Default::Collect::Ipv4::Fragmentation : public ydk::Entity
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

        ydk::YLeaf flags; //type: empty
        ydk::YLeaf offset; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv4::Fragmentation


class Native::Flow::Record::Default::Collect::Ipv4::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header; //type: empty
        ydk::YLeaf payload; //type: empty
        class Total; //type: Native::Flow::Record::Default::Collect::Ipv4::Length::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Default::Collect::Ipv4::Length


class Native::Flow::Record::Default::Collect::Ipv4::Length::Total : public ydk::Entity
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

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv4::Length::Total


class Native::Flow::Record::Default::Collect::Ipv4::Option : public ydk::Entity
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

        ydk::YLeaf map; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv4::Option


class Native::Flow::Record::Default::Collect::Ipv4::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: Native::Flow::Record::Default::Collect::Ipv4::Section::Header
        class Payload; //type: Native::Flow::Record::Default::Collect::Ipv4::Section::Payload

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Section::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Section::Payload> payload;
        
}; // Native::Flow::Record::Default::Collect::Ipv4::Section


class Native::Flow::Record::Default::Collect::Ipv4::Section::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

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

}; // Native::Flow::Record::Default::Collect::Ipv4::Section::Header


class Native::Flow::Record::Default::Collect::Ipv4::Section::Payload : public ydk::Entity
{
    public:
        Payload();
        ~Payload();

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

}; // Native::Flow::Record::Default::Collect::Ipv4::Section::Payload


class Native::Flow::Record::Default::Collect::Ipv4::Source : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Default::Collect::Ipv4::Source::Mask
        class Prefix; //type: Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Source::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Default::Collect::Ipv4::Source


class Native::Flow::Record::Default::Collect::Ipv4::Source::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Default::Collect::Ipv4::Source::Mask


class Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix : public ydk::Entity
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

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix


class Native::Flow::Record::Default::Collect::Ipv4::TotalLength : public ydk::Entity
{
    public:
        TotalLength();
        ~TotalLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv4::TotalLength


class Native::Flow::Record::Default::Collect::Ipv4::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv4::Ttl


class Native::Flow::Record::Default::Collect::Ipv6 : public ydk::Entity
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

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf flow_label; //type: empty
        ydk::YLeaf next_header; //type: empty
        ydk::YLeaf payload_length; //type: empty
        ydk::YLeaf precedence; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf traffic_class; //type: empty
        ydk::YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Default::Collect::Ipv6::Destination
        class Extension; //type: Native::Flow::Record::Default::Collect::Ipv6::Extension
        class Fragmentation; //type: Native::Flow::Record::Default::Collect::Ipv6::Fragmentation
        class HopLimit; //type: Native::Flow::Record::Default::Collect::Ipv6::HopLimit
        class Length; //type: Native::Flow::Record::Default::Collect::Ipv6::Length
        class Section; //type: Native::Flow::Record::Default::Collect::Ipv6::Section
        class Source; //type: Native::Flow::Record::Default::Collect::Ipv6::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Extension> extension;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Fragmentation> fragmentation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::HopLimit> hop_limit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Length> length;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Section> section;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Source> source;
        
}; // Native::Flow::Record::Default::Collect::Ipv6


class Native::Flow::Record::Default::Collect::Ipv6::Destination : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Default::Collect::Ipv6::Destination


class Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask


class Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix : public ydk::Entity
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

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix


class Native::Flow::Record::Default::Collect::Ipv6::Extension : public ydk::Entity
{
    public:
        Extension();
        ~Extension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv6::Extension


class Native::Flow::Record::Default::Collect::Ipv6::Fragmentation : public ydk::Entity
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

        ydk::YLeaf flags; //type: empty
        ydk::YLeaf id; //type: empty
        ydk::YLeaf offset; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv6::Fragmentation


class Native::Flow::Record::Default::Collect::Ipv6::HopLimit : public ydk::Entity
{
    public:
        HopLimit();
        ~HopLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv6::HopLimit


class Native::Flow::Record::Default::Collect::Ipv6::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header; //type: empty
        ydk::YLeaf payload; //type: empty
        class Total; //type: Native::Flow::Record::Default::Collect::Ipv6::Length::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Default::Collect::Ipv6::Length


class Native::Flow::Record::Default::Collect::Ipv6::Length::Total : public ydk::Entity
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

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Default::Collect::Ipv6::Length::Total


class Native::Flow::Record::Default::Collect::Ipv6::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: Native::Flow::Record::Default::Collect::Ipv6::Section::Header
        class Payload; //type: Native::Flow::Record::Default::Collect::Ipv6::Section::Payload

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Section::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Section::Payload> payload;
        
}; // Native::Flow::Record::Default::Collect::Ipv6::Section


class Native::Flow::Record::Default::Collect::Ipv6::Section::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

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

}; // Native::Flow::Record::Default::Collect::Ipv6::Section::Header


class Native::Flow::Record::Default::Collect::Ipv6::Section::Payload : public ydk::Entity
{
    public:
        Payload();
        ~Payload();

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

}; // Native::Flow::Record::Default::Collect::Ipv6::Section::Payload


class Native::Flow::Record::Default::Collect::Ipv6::Source : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Default::Collect::Ipv6::Source::Mask
        class Prefix; //type: Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Source::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Default::Collect::Ipv6::Source


class Native::Flow::Record::Default::Collect::Ipv6::Source::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Default::Collect::Ipv6::Source::Mask


class Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix : public ydk::Entity
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

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix


class Native::Flow::Record::Default::Collect::Metadata : public ydk::Entity
{
    public:
        Metadata();
        ~Metadata();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_rate; //type: empty
        ydk::YLeaf global_session_id; //type: empty
        ydk::YLeaf multi_party_session_id; //type: empty

}; // Native::Flow::Record::Default::Collect::Metadata


class Native::Flow::Record::Default::Collect::Monitor : public ydk::Entity
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

        ydk::YLeaf event; //type: empty

}; // Native::Flow::Record::Default::Collect::Monitor


class Native::Flow::Record::Default::Collect::Mpls : public ydk::Entity
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

        class Label; //type: Native::Flow::Record::Default::Collect::Mpls::Label

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Mpls::Label> label;
        
}; // Native::Flow::Record::Default::Collect::Mpls


class Native::Flow::Record::Default::Collect::Mpls::Label : public ydk::Entity
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

        class One; //type: Native::Flow::Record::Default::Collect::Mpls::Label::One
        class Two; //type: Native::Flow::Record::Default::Collect::Mpls::Label::Two
        class Three; //type: Native::Flow::Record::Default::Collect::Mpls::Label::Three
        class Four; //type: Native::Flow::Record::Default::Collect::Mpls::Label::Four
        class Five; //type: Native::Flow::Record::Default::Collect::Mpls::Label::Five
        class Six; //type: Native::Flow::Record::Default::Collect::Mpls::Label::Six

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Mpls::Label::One> one;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Mpls::Label::Two> two;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Mpls::Label::Three> three;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Mpls::Label::Four> four;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Mpls::Label::Five> five;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Mpls::Label::Six> six;
        
}; // Native::Flow::Record::Default::Collect::Mpls::Label


class Native::Flow::Record::Default::Collect::Mpls::Label::One : public ydk::Entity
{
    public:
        One();
        ~One();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty
        ydk::YLeaf exp; //type: empty
        ydk::YLeaf ttl; //type: empty
        ydk::YLeaf type; //type: empty

}; // Native::Flow::Record::Default::Collect::Mpls::Label::One


class Native::Flow::Record::Default::Collect::Mpls::Label::Two : public ydk::Entity
{
    public:
        Two();
        ~Two();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Default::Collect::Mpls::Label::Two


class Native::Flow::Record::Default::Collect::Mpls::Label::Three : public ydk::Entity
{
    public:
        Three();
        ~Three();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Default::Collect::Mpls::Label::Three


class Native::Flow::Record::Default::Collect::Mpls::Label::Four : public ydk::Entity
{
    public:
        Four();
        ~Four();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Default::Collect::Mpls::Label::Four


class Native::Flow::Record::Default::Collect::Mpls::Label::Five : public ydk::Entity
{
    public:
        Five();
        ~Five();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Default::Collect::Mpls::Label::Five


class Native::Flow::Record::Default::Collect::Mpls::Label::Six : public ydk::Entity
{
    public:
        Six();
        ~Six();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Default::Collect::Mpls::Label::Six


class Native::Flow::Record::Default::Collect::Network : public ydk::Entity
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

        class Delay; //type: Native::Flow::Record::Default::Collect::Network::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Network::Delay> delay;
        
}; // Native::Flow::Record::Default::Collect::Network


class Native::Flow::Record::Default::Collect::Network::Delay : public ydk::Entity
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

        ydk::YLeaf sample; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Network::Delay


class Native::Flow::Record::Default::Collect::Pfr : public ydk::Entity
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

        class Label; //type: Native::Flow::Record::Default::Collect::Pfr::Label
        class OneWayDelay; //type: Native::Flow::Record::Default::Collect::Pfr::OneWayDelay
        class Service; //type: Native::Flow::Record::Default::Collect::Pfr::Service
        class Site; //type: Native::Flow::Record::Default::Collect::Pfr::Site

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Label> label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::OneWayDelay> one_way_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site> site;
        
}; // Native::Flow::Record::Default::Collect::Pfr


class Native::Flow::Record::Default::Collect::Pfr::Label : public ydk::Entity
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

        ydk::YLeaf identifier; //type: empty

}; // Native::Flow::Record::Default::Collect::Pfr::Label


class Native::Flow::Record::Default::Collect::Pfr::OneWayDelay : public ydk::Entity
{
    public:
        OneWayDelay();
        ~OneWayDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Default::Collect::Pfr::OneWayDelay


class Native::Flow::Record::Default::Collect::Pfr::Service : public ydk::Entity
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

        ydk::YLeaf provider; //type: empty
        ydk::YLeaf tag; //type: empty
        ydk::YLeaf identifier; //type: empty

}; // Native::Flow::Record::Default::Collect::Pfr::Service


class Native::Flow::Record::Default::Collect::Pfr::Site : public ydk::Entity
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

        class Destination; //type: Native::Flow::Record::Default::Collect::Pfr::Site::Destination
        class Source; //type: Native::Flow::Record::Default::Collect::Pfr::Site::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site::Source> source;
        
}; // Native::Flow::Record::Default::Collect::Pfr::Site


class Native::Flow::Record::Default::Collect::Pfr::Site::Destination : public ydk::Entity
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

        class Id; //type: Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id
        class Prefix; //type: Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id> id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix> prefix;
        
}; // Native::Flow::Record::Default::Collect::Pfr::Site::Destination


class Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id


class Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty
        class Mask; //type: Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix


class Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

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

}; // Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask


class Native::Flow::Record::Default::Collect::Pfr::Site::Source : public ydk::Entity
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

        class Id; //type: Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id
        class Prefix; //type: Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id> id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix> prefix;
        
}; // Native::Flow::Record::Default::Collect::Pfr::Site::Source


class Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id


class Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty
        class Mask; //type: Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix


class Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

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

}; // Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask


class Native::Flow::Record::Default::Collect::Policy : public ydk::Entity
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

        class PerformanceMonitor; //type: Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor
        class Qos; //type: Native::Flow::Record::Default::Collect::Policy::Qos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor> performance_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Policy::Qos> qos;
        
}; // Native::Flow::Record::Default::Collect::Policy


class Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor : public ydk::Entity
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

        class Classification; //type: Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification> classification;
        
}; // Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor


class Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification : public ydk::Entity
{
    public:
        Classification();
        ~Classification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hierarchy; //type: empty

}; // Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification


class Native::Flow::Record::Default::Collect::Policy::Qos : public ydk::Entity
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

        class Classification; //type: Native::Flow::Record::Default::Collect::Policy::Qos::Classification
        class Queue; //type: Native::Flow::Record::Default::Collect::Policy::Qos::Queue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Policy::Qos::Classification> classification;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Policy::Qos::Queue> queue;
        
}; // Native::Flow::Record::Default::Collect::Policy::Qos


class Native::Flow::Record::Default::Collect::Policy::Qos::Classification : public ydk::Entity
{
    public:
        Classification();
        ~Classification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hierarchy; //type: empty

}; // Native::Flow::Record::Default::Collect::Policy::Qos::Classification


class Native::Flow::Record::Default::Collect::Policy::Qos::Queue : public ydk::Entity
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

        ydk::YLeaf drops; //type: empty
        ydk::YLeaf index_; //type: empty

}; // Native::Flow::Record::Default::Collect::Policy::Qos::Queue


class Native::Flow::Record::Default::Collect::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_multicast; //type: empty
        class Destination; //type: Native::Flow::Record::Default::Collect::Routing::Destination
        class ForwardingStatus; //type: Native::Flow::Record::Default::Collect::Routing::ForwardingStatus
        class NextHop; //type: Native::Flow::Record::Default::Collect::Routing::NextHop
        class Pw; //type: Native::Flow::Record::Default::Collect::Routing::Pw
        class Source; //type: Native::Flow::Record::Default::Collect::Routing::Source
        class Vrf; //type: Native::Flow::Record::Default::Collect::Routing::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::ForwardingStatus> forwarding_status; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Pw> pw;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Vrf> vrf;
        
}; // Native::Flow::Record::Default::Collect::Routing


class Native::Flow::Record::Default::Collect::Routing::Destination : public ydk::Entity
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

        ydk::YLeaf traffic_index; //type: empty
        class As; //type: Native::Flow::Record::Default::Collect::Routing::Destination::As

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Destination::As> as; // presence node
        
}; // Native::Flow::Record::Default::Collect::Routing::Destination


class Native::Flow::Record::Default::Collect::Routing::Destination::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as4_octet; //type: empty
        class Peer; //type: Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Default::Collect::Routing::Destination::As


class Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer : public ydk::Entity
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

        ydk::YLeaf peer4_octet; //type: empty

}; // Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer


class Native::Flow::Record::Default::Collect::Routing::ForwardingStatus : public ydk::Entity
{
    public:
        ForwardingStatus();
        ~ForwardingStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason; //type: empty

}; // Native::Flow::Record::Default::Collect::Routing::ForwardingStatus


class Native::Flow::Record::Default::Collect::Routing::NextHop : public ydk::Entity
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

        class Address; //type: Native::Flow::Record::Default::Collect::Routing::NextHop::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::NextHop::Address> address;
        
}; // Native::Flow::Record::Default::Collect::Routing::NextHop


class Native::Flow::Record::Default::Collect::Routing::NextHop::Address : public ydk::Entity
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

        class Ipv4; //type: Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6> ipv6; // presence node
        
}; // Native::Flow::Record::Default::Collect::Routing::NextHop::Address


class Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf bgp; //type: empty

}; // Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4


class Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6 : public ydk::Entity
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

        ydk::YLeaf bgp; //type: empty

}; // Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6


class Native::Flow::Record::Default::Collect::Routing::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Flow::Record::Default::Collect::Routing::Pw::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Pw::Destination> destination;
        
}; // Native::Flow::Record::Default::Collect::Routing::Pw


class Native::Flow::Record::Default::Collect::Routing::Pw::Destination : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Default::Collect::Routing::Pw::Destination


class Native::Flow::Record::Default::Collect::Routing::Source : public ydk::Entity
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

        ydk::YLeaf traffic_index; //type: empty
        class As; //type: Native::Flow::Record::Default::Collect::Routing::Source::As

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Source::As> as; // presence node
        
}; // Native::Flow::Record::Default::Collect::Routing::Source


class Native::Flow::Record::Default::Collect::Routing::Source::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as4_octet; //type: empty
        class Peer; //type: Native::Flow::Record::Default::Collect::Routing::Source::As::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing::Source::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Default::Collect::Routing::Source::As


class Native::Flow::Record::Default::Collect::Routing::Source::As::Peer : public ydk::Entity
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

        ydk::YLeaf peer4_octet; //type: empty

}; // Native::Flow::Record::Default::Collect::Routing::Source::As::Peer

class Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf bucket1;
        static const ydk::Enum::YLeaf bucket2;
        static const ydk::Enum::YLeaf bucket3;
        static const ydk::Enum::YLeaf bucket4;
        static const ydk::Enum::YLeaf bucket5;
        static const ydk::Enum::YLeaf bucket6;
        static const ydk::Enum::YLeaf bucket7;
        static const ydk::Enum::YLeaf late;

};

class Native::Flow::Record::Default::Collect::Datalink::Vlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_4_ */

