#ifndef _CISCO_IOS_XE_NATIVE_10_
#define _CISCO_IOS_XE_NATIVE_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol : public ydk::Entity
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

        class ProtocolsList; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList

        ydk::YList protocols_list;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList : public ydk::Entity
{
    public:
        ProtocolsList();
        ~ProtocolsList();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList


class Native::Ip::Nbar::Classification::TunneledTraffic : public ydk::Entity
{
    public:
        TunneledTraffic();
        ~TunneledTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf capwap; //type: empty
        ydk::YLeaf ipv6inip; //type: empty
        ydk::YLeaf teredo; //type: empty

}; // Native::Ip::Nbar::Classification::TunneledTraffic


class Native::Ip::Nbar::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
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
        class Composite; //type: Native::Ip::Nbar::Custom::Composite
        class Dns; //type: Native::Ip::Nbar::Custom::Dns
        class Http; //type: Native::Ip::Nbar::Custom::Http
        class Ssl; //type: Native::Ip::Nbar::Custom::Ssl
        class Transport; //type: Native::Ip::Nbar::Custom::Transport
        class Ip_; //type: Native::Ip::Nbar::Custom::Ip_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Composite> composite;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ssl> ssl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_> ip;
        
}; // Native::Ip::Nbar::Custom


class Native::Ip::Nbar::Custom::Composite : public ydk::Entity
{
    public:
        Composite();
        ~Composite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerName; //type: Native::Ip::Nbar::Custom::Composite::ServerName

        ydk::YList server_name;
        
}; // Native::Ip::Nbar::Custom::Composite


class Native::Ip::Nbar::Custom::Composite::ServerName : public ydk::Entity
{
    public:
        ServerName();
        ~ServerName();

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
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf extends; //type: string

}; // Native::Ip::Nbar::Custom::Composite::ServerName


class Native::Ip::Nbar::Custom::Dns : public ydk::Entity
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

        class DomainName; //type: Native::Ip::Nbar::Custom::Dns::DomainName

        ydk::YList domain_name;
        
}; // Native::Ip::Nbar::Custom::Dns


class Native::Ip::Nbar::Custom::Dns::DomainName : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf extends; //type: string

}; // Native::Ip::Nbar::Custom::Dns::DomainName


class Native::Ip::Nbar::Custom::Http : public ydk::Entity
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

        ydk::YLeaf cookie; //type: string
        ydk::YLeaf host; //type: string
        ydk::YLeaf method; //type: string
        ydk::YLeaf referer; //type: string
        ydk::YLeaf url; //type: string
        ydk::YLeaf user_agent; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf via; //type: string
        ydk::YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Http


class Native::Ip::Nbar::Custom::Ssl : public ydk::Entity
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

        class UniqueName; //type: Native::Ip::Nbar::Custom::Ssl::UniqueName

        ydk::YList unique_name;
        
}; // Native::Ip::Nbar::Custom::Ssl


class Native::Ip::Nbar::Custom::Ssl::UniqueName : public ydk::Entity
{
    public:
        UniqueName();
        ~UniqueName();

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
        ydk::YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Ssl::UniqueName


class Native::Ip::Nbar::Custom::Transport : public ydk::Entity
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

        class Tcp; //type: Native::Ip::Nbar::Custom::Transport::Tcp
        class Udp; //type: Native::Ip::Nbar::Custom::Transport::Udp
        class UdpTcp; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp> tcp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp> udp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp> udp_tcp; // presence node
        
}; // Native::Ip::Nbar::Custom::Transport


class Native::Ip::Nbar::Custom::Transport::Tcp : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp


class Native::Ip::Nbar::Custom::Transport::Tcp::Dscp : public ydk::Entity
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

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Dscp


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::Tcp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

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
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Direction


class Native::Ip::Nbar::Custom::Transport::Tcp::Port : public ydk::Entity
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

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range

        ydk::YList port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port


class Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range


class Native::Ip::Nbar::Custom::Transport::Udp : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::Udp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::Udp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp


class Native::Ip::Nbar::Custom::Transport::Udp::Dscp : public ydk::Entity
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

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Udp::Dscp


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::Udp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

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
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Udp::Direction


class Native::Ip::Nbar::Custom::Transport::Udp::Port : public ydk::Entity
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

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port::Range

        ydk::YList port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Port


class Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::Udp::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Udp::Port::Range


class Native::Ip::Nbar::Custom::Transport::UdpTcp : public ydk::Entity
{
    public:
        UdpTcp();
        ~UdpTcp();

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
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp : public ydk::Entity
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

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

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
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port : public ydk::Entity
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

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range

        ydk::YList port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range


class Native::Ip::Nbar::Custom::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Any; //type: Native::Ip::Nbar::Custom::Ip_::Any

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any> any; // presence node
        
}; // Native::Ip::Nbar::Custom::Ip_


class Native::Ip::Nbar::Custom::Ip_::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

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
        class Dscp; //type: Native::Ip::Nbar::Custom::Ip_::Any::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Ip_::Any::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Port> port;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any


class Native::Ip::Nbar::Custom::Ip_::Any::Dscp : public ydk::Entity
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

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Ip_::Any::Dscp


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Ip_::Any::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

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
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Ip_::Any::Direction


class Native::Ip::Nbar::Custom::Ip_::Any::Port : public ydk::Entity
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

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port::Range

        ydk::YList port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Port


class Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers


class Native::Ip::Nbar::Custom::Ip_::Any::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Ip_::Any::Port::Range


class Native::Ip::Nbar::ProtocolPack : public ydk::Entity
{
    public:
        ProtocolPack();
        ~ProtocolPack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Filepath; //type: Native::Ip::Nbar::ProtocolPack::Filepath

        ydk::YList filepath;
        
}; // Native::Ip::Nbar::ProtocolPack


class Native::Ip::Nbar::ProtocolPack::Filepath : public ydk::Entity
{
    public:
        Filepath();
        ~Filepath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf filepath; //type: string
        ydk::YLeaf force; //type: empty

}; // Native::Ip::Nbar::ProtocolPack::Filepath


class Native::Ip::Msdp : public ydk::Entity
{
    public:
        Msdp();
        ~Msdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cache_rejected_sa; //type: uint32
        ydk::YLeaf cache_sa_state; //type: empty
        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf rpf; //type: Rpf
        ydk::YLeaf timer; //type: uint8
        class Peer; //type: Native::Ip::Msdp::Peer
        class DefaultPeer; //type: Native::Ip::Msdp::DefaultPeer
        class Description; //type: Native::Ip::Msdp::Description
        class FilterSaRequest; //type: Native::Ip::Msdp::FilterSaRequest
        class Keepalive; //type: Native::Ip::Msdp::Keepalive
        class MeshGroup; //type: Native::Ip::Msdp::MeshGroup
        class Password; //type: Native::Ip::Msdp::Password
        class Redistribute; //type: Native::Ip::Msdp::Redistribute
        class SaFilter; //type: Native::Ip::Msdp::SaFilter
        class SaLimit; //type: Native::Ip::Msdp::SaLimit
        class Shutdown; //type: Native::Ip::Msdp::Shutdown
        class TtlThreshold; //type: Native::Ip::Msdp::TtlThreshold
        class Vrf; //type: Native::Ip::Msdp::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::DefaultPeer> default_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Description> description;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::FilterSaRequest> filter_sa_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::MeshGroup> mesh_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter> sa_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaLimit> sa_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Shutdown> shutdown;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::TtlThreshold> ttl_threshold;
        ydk::YList vrf;
                class Rpf;

}; // Native::Ip::Msdp


class Native::Ip::Msdp::Peer : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf connect_source; //type: string
        ydk::YLeaf remote_as; //type: uint16

}; // Native::Ip::Msdp::Peer


class Native::Ip::Msdp::DefaultPeer : public ydk::Entity
{
    public:
        DefaultPeer();
        ~DefaultPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Ip::Msdp::DefaultPeer


class Native::Ip::Msdp::Description : public ydk::Entity
{
    public:
        Description();
        ~Description();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf description; //type: string

}; // Native::Ip::Msdp::Description


class Native::Ip::Msdp::FilterSaRequest : public ydk::Entity
{
    public:
        FilterSaRequest();
        ~FilterSaRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Msdp::FilterSaRequest


class Native::Ip::Msdp::Keepalive : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf keepalive; //type: uint8
        ydk::YLeaf max_wait; //type: uint8

}; // Native::Ip::Msdp::Keepalive


class Native::Ip::Msdp::MeshGroup : public ydk::Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
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
        ydk::YLeaf addr; //type: string

}; // Native::Ip::Msdp::MeshGroup


class Native::Ip::Msdp::Password : public ydk::Entity
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

        class Peer; //type: Native::Ip::Msdp::Password::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Password::Peer> peer;
        
}; // Native::Ip::Msdp::Password


class Native::Ip::Msdp::Password::Peer : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf password; //type: string

}; // Native::Ip::Msdp::Password::Peer


class Native::Ip::Msdp::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf route_map; //type: string

}; // Native::Ip::Msdp::Redistribute


class Native::Ip::Msdp::SaFilter : public ydk::Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class In; //type: Native::Ip::Msdp::SaFilter::In
        class Out; //type: Native::Ip::Msdp::SaFilter::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter::Out> out;
        
}; // Native::Ip::Msdp::SaFilter


class Native::Ip::Msdp::SaFilter::In : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::SaFilter::In


class Native::Ip::Msdp::SaFilter::Out : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::SaFilter::Out


class Native::Ip::Msdp::SaLimit : public ydk::Entity
{
    public:
        SaLimit();
        ~SaLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf limit; //type: uint32

}; // Native::Ip::Msdp::SaLimit


class Native::Ip::Msdp::Shutdown : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string

}; // Native::Ip::Msdp::Shutdown


class Native::Ip::Msdp::TtlThreshold : public ydk::Entity
{
    public:
        TtlThreshold();
        ~TtlThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf threshold; //type: uint8

}; // Native::Ip::Msdp::TtlThreshold


class Native::Ip::Msdp::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf cache_rejected_sa; //type: uint32
        ydk::YLeaf cache_sa_state; //type: empty
        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf rpf; //type: Rpf
        ydk::YLeaf timer; //type: uint8
        class Peer; //type: Native::Ip::Msdp::Vrf::Peer
        class DefaultPeer; //type: Native::Ip::Msdp::Vrf::DefaultPeer
        class Description; //type: Native::Ip::Msdp::Vrf::Description
        class FilterSaRequest; //type: Native::Ip::Msdp::Vrf::FilterSaRequest
        class Keepalive; //type: Native::Ip::Msdp::Vrf::Keepalive
        class MeshGroup; //type: Native::Ip::Msdp::Vrf::MeshGroup
        class Password; //type: Native::Ip::Msdp::Vrf::Password
        class Redistribute; //type: Native::Ip::Msdp::Vrf::Redistribute
        class SaFilter; //type: Native::Ip::Msdp::Vrf::SaFilter
        class SaLimit; //type: Native::Ip::Msdp::Vrf::SaLimit
        class Shutdown; //type: Native::Ip::Msdp::Vrf::Shutdown
        class TtlThreshold; //type: Native::Ip::Msdp::Vrf::TtlThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::DefaultPeer> default_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Description> description;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::FilterSaRequest> filter_sa_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::MeshGroup> mesh_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter> sa_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaLimit> sa_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Shutdown> shutdown;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::TtlThreshold> ttl_threshold;
                class Rpf;

}; // Native::Ip::Msdp::Vrf


class Native::Ip::Msdp::Vrf::Peer : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf connect_source; //type: string
        ydk::YLeaf remote_as; //type: uint16

}; // Native::Ip::Msdp::Vrf::Peer


class Native::Ip::Msdp::Vrf::DefaultPeer : public ydk::Entity
{
    public:
        DefaultPeer();
        ~DefaultPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Ip::Msdp::Vrf::DefaultPeer


class Native::Ip::Msdp::Vrf::Description : public ydk::Entity
{
    public:
        Description();
        ~Description();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf description; //type: string

}; // Native::Ip::Msdp::Vrf::Description


class Native::Ip::Msdp::Vrf::FilterSaRequest : public ydk::Entity
{
    public:
        FilterSaRequest();
        ~FilterSaRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Msdp::Vrf::FilterSaRequest


class Native::Ip::Msdp::Vrf::Keepalive : public ydk::Entity
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

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf keepalive; //type: uint8
        ydk::YLeaf max_wait; //type: uint8

}; // Native::Ip::Msdp::Vrf::Keepalive


class Native::Ip::Msdp::Vrf::MeshGroup : public ydk::Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

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
        ydk::YLeaf addr; //type: string

}; // Native::Ip::Msdp::Vrf::MeshGroup


class Native::Ip::Msdp::Vrf::Password : public ydk::Entity
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

        class Peer; //type: Native::Ip::Msdp::Vrf::Password::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Password::Peer> peer;
        
}; // Native::Ip::Msdp::Vrf::Password


class Native::Ip::Msdp::Vrf::Password::Peer : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf password; //type: string

}; // Native::Ip::Msdp::Vrf::Password::Peer


class Native::Ip::Msdp::Vrf::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

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
        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf route_map; //type: string

}; // Native::Ip::Msdp::Vrf::Redistribute


class Native::Ip::Msdp::Vrf::SaFilter : public ydk::Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Ip::Msdp::Vrf::SaFilter::In
        class Out; //type: Native::Ip::Msdp::Vrf::SaFilter::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter::Out> out;
        
}; // Native::Ip::Msdp::Vrf::SaFilter


class Native::Ip::Msdp::Vrf::SaFilter::In : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::Vrf::SaFilter::In


class Native::Ip::Msdp::Vrf::SaFilter::Out : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::Vrf::SaFilter::Out


class Native::Ip::Msdp::Vrf::SaLimit : public ydk::Entity
{
    public:
        SaLimit();
        ~SaLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf limit; //type: uint32

}; // Native::Ip::Msdp::Vrf::SaLimit


class Native::Ip::Msdp::Vrf::Shutdown : public ydk::Entity
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

        ydk::YLeaf name_addr; //type: string

}; // Native::Ip::Msdp::Vrf::Shutdown


class Native::Ip::Msdp::Vrf::TtlThreshold : public ydk::Entity
{
    public:
        TtlThreshold();
        ~TtlThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf threshold; //type: uint8

}; // Native::Ip::Msdp::Vrf::TtlThreshold


class Native::Ip::McrConf : public ydk::Entity
{
    public:
        McrConf();
        ~McrConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf multicast_routing; //type: empty

}; // Native::Ip::McrConf


class Native::Ip::MulticastRouting : public ydk::Entity
{
    public:
        MulticastRouting();
        ~MulticastRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf distributed; //type: empty
        class Vrf; //type: Native::Ip::MulticastRouting::Vrf

        ydk::YList vrf;
        
}; // Native::Ip::MulticastRouting


class Native::Ip::MulticastRouting::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf distributed; //type: empty

}; // Native::Ip::MulticastRouting::Vrf


class Native::Ip::Mroute : public ydk::Entity
{
    public:
        Mroute();
        ~Mroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf subnet_mask; //type: string
        ydk::YLeaf tunnel; //type: int32

}; // Native::Ip::Mroute


class Native::Ip::Rsvp : public ydk::Entity
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

        class Authentication; //type: Native::Ip::Rsvp::Authentication
        class Signalling; //type: Native::Ip::Rsvp::Signalling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling> signalling;
        
}; // Native::Ip::Rsvp


class Native::Ip::Rsvp::Authentication : public ydk::Entity
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

        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Neighbor; //type: Native::Ip::Rsvp::Authentication::Neighbor
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication


class Native::Ip::Rsvp::Authentication::Neighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AccessList; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList
        class Address; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address> address;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Number; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number
        class Name; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name

        ydk::YList number;
        ydk::YList name;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number : public ydk::Entity
{
    public:
        Number();
        ~Number();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl_number; //type: uint8
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime : public ydk::Entity
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

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime : public ydk::Entity
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

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime


class Native::Ip::Rsvp::Authentication::Neighbor::Address : public ydk::Entity
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

        class Ipv4; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4

        ydk::YList ipv4;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor::Address


class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4


class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime : public ydk::Entity
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

}; // Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime


class Native::Ip::Rsvp::Authentication::Lifetime : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Lifetime


class Native::Ip::Rsvp::Signalling : public ydk::Entity
{
    public:
        Signalling();
        ~Signalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf initial_retransmit_delay; //type: uint16
        class FastLocalRepair; //type: Native::Ip::Rsvp::Signalling::FastLocalRepair
        class Hello; //type: Native::Ip::Rsvp::Signalling::Hello
        class Patherr; //type: Native::Ip::Rsvp::Signalling::Patherr
        class RateLimit; //type: Native::Ip::Rsvp::Signalling::RateLimit
        class Refresh; //type: Native::Ip::Rsvp::Signalling::Refresh

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::FastLocalRepair> fast_local_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello> hello; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Patherr> patherr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::RateLimit> rate_limit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Refresh> refresh;
        
}; // Native::Ip::Rsvp::Signalling


class Native::Ip::Rsvp::Signalling::FastLocalRepair : public ydk::Entity
{
    public:
        FastLocalRepair();
        ~FastLocalRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf notifications; //type: uint16
        ydk::YLeaf rate; //type: uint16

}; // Native::Ip::Rsvp::Signalling::FastLocalRepair


class Native::Ip::Rsvp::Signalling::Hello : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf statistics; //type: empty
        class GracefulRestart; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart> graceful_restart;
        
}; // Native::Ip::Rsvp::Signalling::Hello


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dscp; //type: uint8
        class Mode; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode
        class Refresh; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh
        class Send; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh> refresh;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send> send;
        
}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode : public ydk::Entity
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

        ydk::YLeaf full; //type: empty
        ydk::YLeaf help_neighbor; //type: empty

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh : public ydk::Entity
{
    public:
        Refresh();
        ~Refresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf misses; //type: uint8

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf recovery_time; //type: uint32

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send


class Native::Ip::Rsvp::Signalling::Patherr : public ydk::Entity
{
    public:
        Patherr();
        ~Patherr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StateRemoval; //type: Native::Ip::Rsvp::Signalling::Patherr::StateRemoval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Patherr::StateRemoval> state_removal; // presence node
        
}; // Native::Ip::Rsvp::Signalling::Patherr


class Native::Ip::Rsvp::Signalling::Patherr::StateRemoval : public ydk::Entity
{
    public:
        StateRemoval();
        ~StateRemoval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf neighbor; //type: uint8

}; // Native::Ip::Rsvp::Signalling::Patherr::StateRemoval


class Native::Ip::Rsvp::Signalling::RateLimit : public ydk::Entity
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

        ydk::YLeaf burst; //type: uint16
        ydk::YLeaf limit; //type: uint16
        ydk::YLeaf maxsize; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Ip::Rsvp::Signalling::RateLimit


class Native::Ip::Rsvp::Signalling::Refresh : public ydk::Entity
{
    public:
        Refresh();
        ~Refresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf misses; //type: uint8
        class Reduction; //type: Native::Ip::Rsvp::Signalling::Refresh::Reduction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Refresh::Reduction> reduction; // presence node
        
}; // Native::Ip::Rsvp::Signalling::Refresh


class Native::Ip::Rsvp::Signalling::Refresh::Reduction : public ydk::Entity
{
    public:
        Reduction();
        ~Reduction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ack_delay; //type: uint16

}; // Native::Ip::Rsvp::Signalling::Refresh::Reduction


class Native::Ip::Http : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf access_class; //type: uint8
        ydk::YLeaf server; //type: boolean
        ydk::YLeaf secure_server; //type: boolean
        ydk::YLeaf secure_trustpoint; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf max_connections; //type: uint16
        ydk::YLeaf active_session_modules; //type: one of string, enumeration
        ydk::YLeaf secure_active_session_modules; //type: one of string, enumeration
        ydk::YLeaf secure_client_auth; //type: empty
        class Authentication; //type: Native::Ip::Http::Authentication
        class TimeoutPolicy; //type: Native::Ip::Http::TimeoutPolicy
        class Client; //type: Native::Ip::Http::Client

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::TimeoutPolicy> timeout_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Client> client;
                class ActiveSessionModules;
        class SecureActiveSessionModules;

}; // Native::Ip::Http


class Native::Ip::Http::Authentication : public ydk::Entity
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

        ydk::YLeaf aaa; //type: empty
        ydk::YLeaf local; //type: empty

}; // Native::Ip::Http::Authentication


class Native::Ip::Http::TimeoutPolicy : public ydk::Entity
{
    public:
        TimeoutPolicy();
        ~TimeoutPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf idle; //type: uint16
        ydk::YLeaf life; //type: uint32
        ydk::YLeaf requests; //type: uint32

}; // Native::Ip::Http::TimeoutPolicy


class Native::Ip::Http::Client : public ydk::Entity
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

        ydk::YLeaf secure_trustpoint; //type: string
        ydk::YLeaf source_interface; //type: string
        class ProxyServer; //type: Native::Ip::Http::Client::ProxyServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Client::ProxyServer> proxy_server;
        
}; // Native::Ip::Http::Client


class Native::Ip::Http::Client::ProxyServer : public ydk::Entity
{
    public:
        ProxyServer();
        ~ProxyServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf proxy_server_name; //type: string
        ydk::YLeaf proxy_port; //type: uint16

}; // Native::Ip::Http::Client::ProxyServer


class Native::Ip::Nat : public ydk::Entity
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

        class Pool; //type: Native::Ip::Nat::Pool
        class Inside; //type: Native::Ip::Nat::Inside
        class Outside; //type: Native::Ip::Nat::Outside
        class Translation; //type: Native::Ip::Nat::Translation

        ydk::YList pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside> inside;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside> outside;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation> translation;
        
}; // Native::Ip::Nat


class Native::Ip::Nat::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
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
        ydk::YLeaf start_address; //type: string
        ydk::YLeaf end_address; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf accounting; //type: string
        ydk::YLeaf arp_ping; //type: empty
        ydk::YLeaf type; //type: Type
        ydk::YLeaf add_route; //type: empty
        class Type;

}; // Native::Ip::Nat::Pool


class Native::Ip::Nat::Inside : public ydk::Entity
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

        class Source; //type: Native::Ip::Nat::Inside::Source
        class Destination; //type: Native::Ip::Nat::Inside::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Destination> destination;
        
}; // Native::Ip::Nat::Inside


class Native::Ip::Nat::Inside::Source : public ydk::Entity
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

        class List; //type: Native::Ip::Nat::Inside::Source::List
        class RouteMap; //type: Native::Ip::Nat::Inside::Source::RouteMap
        class Static; //type: Native::Ip::Nat::Inside::Source::Static

        ydk::YList list;
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static> static_;
        
}; // Native::Ip::Nat::Inside::Source


class Native::Ip::Nat::Inside::Source::List : public ydk::Entity
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

        ydk::YLeaf id; //type: one of uint16, string
        class Pool; //type: Native::Ip::Nat::Inside::Source::List::Pool
        class PoolWithVrf; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf
        class Interface; //type: Native::Ip::Nat::Inside::Source::List::Interface
        class InterfaceWithVrf; //type: Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf

        ydk::YList pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::PoolWithVrf> pool_with_vrf;
        ydk::YList interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf> interface_with_vrf;
        
}; // Native::Ip::Nat::Inside::Source::List


class Native::Ip::Nat::Inside::Source::List::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

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
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty
        class Redundancy; //type: Native::Ip::Nat::Inside::Source::List::Pool::Redundancy

        ydk::YList redundancy;
        
}; // Native::Ip::Nat::Inside::Source::List::Pool


class Native::Ip::Nat::Inside::Source::List::Pool::Redundancy : public ydk::Entity
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

        ydk::YLeaf name; //type: uint8
        class MappingId; //type: Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId

        ydk::YList mapping_id;
        
}; // Native::Ip::Nat::Inside::Source::List::Pool::Redundancy


class Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId : public ydk::Entity
{
    public:
        MappingId();
        ~MappingId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint32
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf : public ydk::Entity
{
    public:
        PoolWithVrf();
        ~PoolWithVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pool; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool

        ydk::YList pool;
        
}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

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
        class Redundancy; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy
        class Vrf; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf

        ydk::YList redundancy;
        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy : public ydk::Entity
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

        ydk::YLeaf name; //type: uint8
        class MappingId; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId

        ydk::YList mapping_id;
        
}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId : public ydk::Entity
{
    public:
        MappingId();
        ~MappingId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint32
        class Vrf; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf

        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf : public ydk::Entity
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
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf overload; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf : public ydk::Entity
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
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf overload; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf


class Native::Ip::Nat::Inside::Source::List::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::Interface


class Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf : public ydk::Entity
{
    public:
        InterfaceWithVrf();
        ~InterfaceWithVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface

        ydk::YList interface;
        
}; // Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf


class Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Vrf; //type: Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf

        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface


class Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf : public ydk::Entity
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
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf


class Native::Ip::Nat::Inside::Source::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_map_name; //type: string
        class Pool; //type: Native::Ip::Nat::Inside::Source::RouteMap::Pool
        class PoolWithVrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf
        class Interface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface
        class InterfaceWithVrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Pool> pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf> pool_with_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf> interface_with_vrf;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap


class Native::Ip::Nat::Inside::Source::RouteMap::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty
        ydk::YLeaf reversible; //type: empty
        class Redundancy; //type: Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy

        ydk::YList redundancy;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::Pool

class Native::Ip::Msdp::Rpf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3618;

};

class Native::Ip::Msdp::Vrf::Rpf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3618;

};

class Native::Ip::Rsvp::Authentication::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Http::ActiveSessionModules : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;

};

class Native::Ip::Http::SecureActiveSessionModules : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;

};

class Native::Ip::Nat::Pool::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_host;
        static const ydk::Enum::YLeaf rotary;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_10_ */

