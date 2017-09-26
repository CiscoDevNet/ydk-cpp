#ifndef _CISCO_IOS_XE_NATIVE_28_
#define _CISCO_IOS_XE_NATIVE_28_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_26.hpp"
#include "Cisco_IOS_XE_native_27.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::FastEthernet::IpVrf::Ip::Vrf : public ydk::Entity
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

}; // Native::Interface::FastEthernet::IpVrf::Ip::Vrf


class Native::Interface::FastEthernet::Ipv6 : public ydk::Entity
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

        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf unreachables; //type: boolean
        class DestinationGuard; //type: Native::Interface::FastEthernet::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::FastEthernet::Ipv6::Dhcp
        class Address; //type: Native::Interface::FastEthernet::Ipv6::Address
        class Nd; //type: Native::Interface::FastEthernet::Ipv6::Nd
        class Tcp; //type: Native::Interface::FastEthernet::Ipv6::Tcp
        class TrafficFilter; //type: Native::Interface::FastEthernet::Ipv6::TrafficFilter
        class Crypto; //type: Native::Interface::FastEthernet::Ipv6::Crypto
        class Ospf; //type: Native::Interface::FastEthernet::Ipv6::Ospf
        class NoPim; //type: Native::Interface::FastEthernet::Ipv6::NoPim
        class Pim; //type: Native::Interface::FastEthernet::Ipv6::Pim
        class Flow; //type: Native::Interface::FastEthernet::Ipv6::Flow
        class Rip; //type: Native::Interface::FastEthernet::Ipv6::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::NoPim> no_pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Pim> pim;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Tcp> tcp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::FastEthernet::Ipv6


class Native::Interface::FastEthernet::Ipv6::Address : public ydk::Entity
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

        class Dhcp; //type: Native::Interface::FastEthernet::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::FastEthernet::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::FastEthernet::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::FastEthernet::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::FastEthernet::Ipv6::Address


class Native::Interface::FastEthernet::Ipv6::Address::Autoconfig : public ydk::Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Address::Autoconfig


class Native::Interface::FastEthernet::Ipv6::Address::Dhcp : public ydk::Entity
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

        ydk::YLeaf rapid_commit; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Address::Dhcp


class Native::Interface::FastEthernet::Ipv6::Address::LinkLocalAddress : public ydk::Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

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
        ydk::YLeaf link_local; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Address::LinkLocalAddress


class Native::Interface::FastEthernet::Ipv6::Address::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf anycast; //type: empty
        ydk::YLeaf eui_64; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Address::PrefixList


class Native::Interface::FastEthernet::Ipv6::Crypto : public ydk::Entity
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

        ydk::YLeaf map; //type: string

}; // Native::Interface::FastEthernet::Ipv6::Crypto


class Native::Interface::FastEthernet::Ipv6::DestinationGuard : public ydk::Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Interface::FastEthernet::Ipv6::DestinationGuard


class Native::Interface::FastEthernet::Ipv6::Dhcp : public ydk::Entity
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

        class Client; //type: Native::Interface::FastEthernet::Ipv6::Dhcp::Client
        class Server; //type: Native::Interface::FastEthernet::Ipv6::Dhcp::Server
        class Guard; //type: Native::Interface::FastEthernet::Ipv6::Dhcp::Guard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Dhcp::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Dhcp::Guard> guard; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Dhcp::Server> > server;
        
}; // Native::Interface::FastEthernet::Ipv6::Dhcp


class Native::Interface::FastEthernet::Ipv6::Dhcp::Client : public ydk::Entity
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

        class Request; //type: Native::Interface::FastEthernet::Ipv6::Dhcp::Client::Request

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Dhcp::Client::Request> request;
        
}; // Native::Interface::FastEthernet::Ipv6::Dhcp::Client


class Native::Interface::FastEthernet::Ipv6::Dhcp::Client::Request : public ydk::Entity
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

        ydk::YLeaf vendor; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Dhcp::Client::Request


class Native::Interface::FastEthernet::Ipv6::Dhcp::Guard : public ydk::Entity
{
    public:
        Guard();
        ~Guard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Interface::FastEthernet::Ipv6::Dhcp::Guard


class Native::Interface::FastEthernet::Ipv6::Dhcp::Server : public ydk::Entity
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

        ydk::YLeaf word; //type: string
        ydk::YLeaf preference; //type: uint8

}; // Native::Interface::FastEthernet::Ipv6::Dhcp::Server


class Native::Interface::FastEthernet::Ipv6::Flow : public ydk::Entity
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
        class Monitor; //type: Native::Interface::FastEthernet::Ipv6::Flow::Monitor

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Flow::Monitor> > monitor;
        
}; // Native::Interface::FastEthernet::Ipv6::Flow


class Native::Interface::FastEthernet::Ipv6::Flow::Monitor : public ydk::Entity
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
        class Sampler; //type: Native::Interface::FastEthernet::Ipv6::Flow::Monitor::Sampler

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Flow::Monitor::Sampler> > sampler;
        
}; // Native::Interface::FastEthernet::Ipv6::Flow::Monitor


class Native::Interface::FastEthernet::Ipv6::Flow::Monitor::Sampler : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ipv6::Flow::Monitor::Sampler


class Native::Interface::FastEthernet::Ipv6::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf managed_config_flag; //type: empty
        class Raguard; //type: Native::Interface::FastEthernet::Ipv6::Nd::Raguard
        class Autoconfig; //type: Native::Interface::FastEthernet::Ipv6::Nd::Autoconfig
        class Ra; //type: Native::Interface::FastEthernet::Ipv6::Nd::Ra

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Nd::Autoconfig> autoconfig;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Nd::Ra> ra;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Nd::Raguard> raguard;
        
}; // Native::Interface::FastEthernet::Ipv6::Nd


class Native::Interface::FastEthernet::Ipv6::Nd::Autoconfig : public ydk::Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_route; //type: empty
        ydk::YLeaf prefix; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Nd::Autoconfig


class Native::Interface::FastEthernet::Ipv6::Nd::Ra : public ydk::Entity
{
    public:
        Ra();
        ~Ra();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Suppress; //type: Native::Interface::FastEthernet::Ipv6::Nd::Ra::Suppress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Nd::Ra::Suppress> suppress; // presence node
        
}; // Native::Interface::FastEthernet::Ipv6::Nd::Ra


class Native::Interface::FastEthernet::Ipv6::Nd::Ra::Suppress : public ydk::Entity
{
    public:
        Suppress();
        ~Suppress();

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

}; // Native::Interface::FastEthernet::Ipv6::Nd::Ra::Suppress


class Native::Interface::FastEthernet::Ipv6::Nd::Raguard : public ydk::Entity
{
    public:
        Raguard();
        ~Raguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Interface::FastEthernet::Ipv6::Nd::Raguard


class Native::Interface::FastEthernet::Ipv6::NoPim : public ydk::Entity
{
    public:
        NoPim();
        ~NoPim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pim; //type: boolean

}; // Native::Interface::FastEthernet::Ipv6::NoPim


class Native::Interface::FastEthernet::Ipv6::Ospf : public ydk::Entity
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

        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Process; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Process
        class Authentication; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Authentication
        class Bfd; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::FastEthernet::Ipv6::Ospf::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::FastEthernet::Ipv6::Ospf::DemandCircuit
        class Encryption; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption
        class FloodReduction; //type: Native::Interface::FastEthernet::Ipv6::Ospf::FloodReduction
        class MtuIgnore; //type: Native::Interface::FastEthernet::Ipv6::Ospf::MtuIgnore
        class Neighbor; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor
        class Network; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Network
        class Shutdown; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Shutdown

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption> encryption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::MtuIgnore> mtu_ignore; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor> > neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Network> network;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Process> > process;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Shutdown> shutdown; // presence node
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf


class Native::Interface::FastEthernet::Ipv6::Ospf::Authentication : public ydk::Entity
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

        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Authentication


class Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec : public ydk::Entity
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

        ydk::YLeaf spi; //type: uint64
        class Md5; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec


class Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5 : public ydk::Entity
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

        class KeyString; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5


class Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString


class Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1 : public ydk::Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1


class Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::FastEthernet::Ipv6::Ospf::Bfd : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Bfd


class Native::Interface::FastEthernet::Ipv6::Ospf::DatabaseFilter : public ydk::Entity
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

        ydk::YLeaf all; //type: All
        ydk::YLeaf disable; //type: empty
        class All;

}; // Native::Interface::FastEthernet::Ipv6::Ospf::DatabaseFilter


class Native::Interface::FastEthernet::Ipv6::Ospf::DemandCircuit : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Ospf::DemandCircuit


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption : public ydk::Entity
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

        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec : public ydk::Entity
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

        ydk::YLeaf spi; //type: uint64
        ydk::YLeaf esp; //type: empty
        class Ipsec3Des; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des
        class AesCbc; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc> aes_cbc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des> ipsec_3des;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc : public ydk::Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AesCbc128; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192 : public ydk::Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256 : public ydk::Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128 : public ydk::Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des : public ydk::Entity
{
    public:
        Ipsec3Des();
        ~Ipsec3Des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des


class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString


class Native::Interface::FastEthernet::Ipv6::Ospf::FloodReduction : public ydk::Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

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

}; // Native::Interface::FastEthernet::Ipv6::Ospf::FloodReduction


class Native::Interface::FastEthernet::Ipv6::Ospf::MtuIgnore : public ydk::Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

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

}; // Native::Interface::FastEthernet::Ipv6::Ospf::MtuIgnore


class Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor


class Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter : public ydk::Entity
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

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter


class Native::Interface::FastEthernet::Ipv6::Ospf::Network : public ydk::Entity
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

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::FastEthernet::Ipv6::Ospf::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Ospf::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::FastEthernet::Ipv6::Ospf::Network


class Native::Interface::FastEthernet::Ipv6::Ospf::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Network::PointToMultipoint


class Native::Interface::FastEthernet::Ipv6::Ospf::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

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
        ydk::YLeaf area; //type: one of uint32, string
        ydk::YLeaf instance; //type: uint8

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Process


class Native::Interface::FastEthernet::Ipv6::Ospf::Shutdown : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Ospf::Shutdown


class Native::Interface::FastEthernet::Ipv6::Pim : public ydk::Entity
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

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf dr_priority; //type: uint32
        class Bsr; //type: Native::Interface::FastEthernet::Ipv6::Pim::Bsr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Pim::Bsr> bsr;
        
}; // Native::Interface::FastEthernet::Ipv6::Pim


class Native::Interface::FastEthernet::Ipv6::Pim::Bsr : public ydk::Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf border; //type: empty

}; // Native::Interface::FastEthernet::Ipv6::Pim::Bsr


class Native::Interface::FastEthernet::Ipv6::Rip : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf enable; //type: empty
        class DefaultInformation; //type: Native::Interface::FastEthernet::Ipv6::Rip::DefaultInformation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ipv6::Rip::DefaultInformation> default_information;
        
}; // Native::Interface::FastEthernet::Ipv6::Rip


class Native::Interface::FastEthernet::Ipv6::Rip::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: Route
        ydk::YLeaf metric; //type: uint8
        class Route;

}; // Native::Interface::FastEthernet::Ipv6::Rip::DefaultInformation


class Native::Interface::FastEthernet::Ipv6::Tcp : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ipv6::Tcp


class Native::Interface::FastEthernet::Ipv6::TrafficFilter : public ydk::Entity
{
    public:
        TrafficFilter();
        ~TrafficFilter();

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
        ydk::YLeaf access_list; //type: string
        class Direction;

}; // Native::Interface::FastEthernet::Ipv6::TrafficFilter


class Native::Interface::FastEthernet::Isis : public ydk::Entity
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

        ydk::YLeaf lsp_interval; //type: uint32
        ydk::YLeaf mesh_group; //type: one of uint32, enumeration
        ydk::YLeaf network; //type: Network
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf retransmit_throttle_interval; //type: uint16
        ydk::YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::FastEthernet::Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::FastEthernet::Isis::Advertise
        class Authentication; //type: Native::Interface::FastEthernet::Isis::Authentication
        class CircuitType; //type: Native::Interface::FastEthernet::Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::FastEthernet::Isis::CsnpInterval
        class Hello; //type: Native::Interface::FastEthernet::Isis::Hello
        class HelloInterval; //type: Native::Interface::FastEthernet::Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::FastEthernet::Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::FastEthernet::Isis::Ipv6
        class Metric; //type: Native::Interface::FastEthernet::Isis::Metric
        class Password; //type: Native::Interface::FastEthernet::Isis::Password
        class Priority; //type: Native::Interface::FastEthernet::Isis::Priority
        class ThreeWayHandshake; //type: Native::Interface::FastEthernet::Isis::ThreeWayHandshake

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroup;
        class Network;
        class Protocol;

}; // Native::Interface::FastEthernet::Isis


class Native::Interface::FastEthernet::Isis::AdjacencyFilter : public ydk::Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

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
        ydk::YLeaf match_all; //type: empty

}; // Native::Interface::FastEthernet::Isis::AdjacencyFilter


class Native::Interface::FastEthernet::Isis::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: empty

}; // Native::Interface::FastEthernet::Isis::Advertise


class Native::Interface::FastEthernet::Isis::Authentication : public ydk::Entity
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

        class Mode; //type: Native::Interface::FastEthernet::Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::FastEthernet::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::FastEthernet::Isis::Authentication::SendOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Authentication::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::FastEthernet::Isis::Authentication


class Native::Interface::FastEthernet::Isis::Authentication::KeyChain : public ydk::Entity
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
        class KeyChainList; //type: Native::Interface::FastEthernet::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Interface::FastEthernet::Isis::Authentication::KeyChain


class Native::Interface::FastEthernet::Isis::Authentication::KeyChain::KeyChainList : public ydk::Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType
        ydk::YLeaf name; //type: string

}; // Native::Interface::FastEthernet::Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::FastEthernet::Isis::Authentication::Mode : public ydk::Entity
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

        class Md5; //type: Native::Interface::FastEthernet::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::FastEthernet::Isis::Authentication::Mode::Text

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::FastEthernet::Isis::Authentication::Mode


class Native::Interface::FastEthernet::Isis::Authentication::Mode::Md5 : public ydk::Entity
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

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::FastEthernet::Isis::Authentication::Mode::Md5


class Native::Interface::FastEthernet::Isis::Authentication::Mode::Text : public ydk::Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::FastEthernet::Isis::Authentication::Mode::Text


class Native::Interface::FastEthernet::Isis::Authentication::SendOnly : public ydk::Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::FastEthernet::Isis::Authentication::SendOnly


class Native::Interface::FastEthernet::Isis::CircuitType : public ydk::Entity
{
    public:
        CircuitType();
        ~CircuitType();

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
        class Levels;

}; // Native::Interface::FastEthernet::Isis::CircuitType


class Native::Interface::FastEthernet::Isis::CsnpInterval : public ydk::Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

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
        class CsnpIntervalList; //type: Native::Interface::FastEthernet::Isis::CsnpInterval::CsnpIntervalList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::CsnpInterval::CsnpIntervalList> > csnp_interval_list;
        
}; // Native::Interface::FastEthernet::Isis::CsnpInterval


class Native::Interface::FastEthernet::Isis::CsnpInterval::CsnpIntervalList : public ydk::Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

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

}; // Native::Interface::FastEthernet::Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::FastEthernet::Isis::Hello : public ydk::Entity
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

        class Padding; //type: Native::Interface::FastEthernet::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::FastEthernet::Isis::Hello


class Native::Interface::FastEthernet::Isis::Hello::Padding : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Isis::Hello::Padding


class Native::Interface::FastEthernet::Isis::HelloInterval : public ydk::Entity
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
        class HelloIntervalList; //type: Native::Interface::FastEthernet::Isis::HelloInterval::HelloIntervalList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::HelloInterval::HelloIntervalList> > hello_interval_list;
                class Value_;

}; // Native::Interface::FastEthernet::Isis::HelloInterval


class Native::Interface::FastEthernet::Isis::HelloInterval::HelloIntervalList : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Isis::HelloInterval::HelloIntervalList


class Native::Interface::FastEthernet::Isis::HelloMultiplier : public ydk::Entity
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
        class HelloMultiplierList; //type: Native::Interface::FastEthernet::Isis::HelloMultiplier::HelloMultiplierList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::HelloMultiplier::HelloMultiplierList> > hello_multiplier_list;
        
}; // Native::Interface::FastEthernet::Isis::HelloMultiplier


class Native::Interface::FastEthernet::Isis::HelloMultiplier::HelloMultiplierList : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::FastEthernet::Isis::Ipv6 : public ydk::Entity
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
        class Metric; //type: Native::Interface::FastEthernet::Isis::Ipv6::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Ipv6::Metric> metric;
        
}; // Native::Interface::FastEthernet::Isis::Ipv6


class Native::Interface::FastEthernet::Isis::Ipv6::Metric : public ydk::Entity
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
        class MetricList; //type: Native::Interface::FastEthernet::Isis::Ipv6::Metric::MetricList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Ipv6::Metric::MetricList> > metric_list;
                class Value_;

}; // Native::Interface::FastEthernet::Isis::Ipv6::Metric


class Native::Interface::FastEthernet::Isis::Ipv6::Metric::MetricList : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Isis::Ipv6::Metric::MetricList


class Native::Interface::FastEthernet::Isis::Metric : public ydk::Entity
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
        class MetricList; //type: Native::Interface::FastEthernet::Isis::Metric::MetricList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Metric::MetricList> > metric_list;
                class Value_;

}; // Native::Interface::FastEthernet::Isis::Metric


class Native::Interface::FastEthernet::Isis::Metric::MetricList : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Isis::Metric::MetricList


class Native::Interface::FastEthernet::Isis::Password : public ydk::Entity
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
        class PasswordList; //type: Native::Interface::FastEthernet::Isis::Password::PasswordList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Password::PasswordList> > password_list;
        
}; // Native::Interface::FastEthernet::Isis::Password


class Native::Interface::FastEthernet::Isis::Password::PasswordList : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Isis::Password::PasswordList


class Native::Interface::FastEthernet::Isis::Priority : public ydk::Entity
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
        class PriorityList; //type: Native::Interface::FastEthernet::Isis::Priority::PriorityList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Isis::Priority::PriorityList> > priority_list;
        
}; // Native::Interface::FastEthernet::Isis::Priority


class Native::Interface::FastEthernet::Isis::Priority::PriorityList : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Isis::Priority::PriorityList


class Native::Interface::FastEthernet::Isis::ThreeWayHandshake : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Isis::ThreeWayHandshake


class Native::Interface::FastEthernet::KeepaliveSettings : public ydk::Entity
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

        class Keepalive; //type: Native::Interface::FastEthernet::KeepaliveSettings::Keepalive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::FastEthernet::KeepaliveSettings


class Native::Interface::FastEthernet::KeepaliveSettings::Keepalive : public ydk::Entity
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

}; // Native::Interface::FastEthernet::KeepaliveSettings::Keepalive


class Native::Interface::FastEthernet::L2ProtocolTunnel : public ydk::Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf stp; //type: empty
        ydk::YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::FastEthernet::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::FastEthernet::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::FastEthernet::L2ProtocolTunnel


class Native::Interface::FastEthernet::L2ProtocolTunnel::DropThreshold : public ydk::Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::FastEthernet::L2ProtocolTunnel::DropThreshold


class Native::Interface::FastEthernet::L2ProtocolTunnel::ShutdownThreshold : public ydk::Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::FastEthernet::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::FastEthernet::Lisp : public ydk::Entity
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

        ydk::YLeaf extended_subnet_mode; //type: empty
        class Mobility; //type: Native::Interface::FastEthernet::Lisp::Mobility

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Lisp::Mobility> mobility;
        
}; // Native::Interface::FastEthernet::Lisp


class Native::Interface::FastEthernet::Lisp::Mobility : public ydk::Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicEid; //type: Native::Interface::FastEthernet::Lisp::Mobility::DynamicEid
        class Discover; //type: Native::Interface::FastEthernet::Lisp::Mobility::Discover
        class Liveness; //type: Native::Interface::FastEthernet::Lisp::Mobility::Liveness

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Lisp::Mobility::Discover> discover;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Lisp::Mobility::DynamicEid> dynamic_eid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Lisp::Mobility::Liveness> liveness;
        
}; // Native::Interface::FastEthernet::Lisp::Mobility


class Native::Interface::FastEthernet::Lisp::Mobility::Discover : public ydk::Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf arp; //type: boolean

}; // Native::Interface::FastEthernet::Lisp::Mobility::Discover


class Native::Interface::FastEthernet::Lisp::Mobility::DynamicEid : public ydk::Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic_eid_name; //type: string
        ydk::YLeaf nbr_proxy_reply; //type: empty
        ydk::YLeaf requests; //type: uint8

}; // Native::Interface::FastEthernet::Lisp::Mobility::DynamicEid


class Native::Interface::FastEthernet::Lisp::Mobility::Liveness : public ydk::Entity
{
    public:
        Liveness();
        ~Liveness();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test; //type: boolean
        ydk::YLeaf ttl; //type: uint8

}; // Native::Interface::FastEthernet::Lisp::Mobility::Liveness


class Native::Interface::FastEthernet::Lldp : public ydk::Entity
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

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf transmit; //type: boolean

}; // Native::Interface::FastEthernet::Lldp


class Native::Interface::FastEthernet::LoadBalancing : public ydk::Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Interface::FastEthernet::LoadBalancing


class Native::Interface::FastEthernet::Location : public ydk::Entity
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

        class CivicLocationId; //type: Native::Interface::FastEthernet::Location::CivicLocationId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::FastEthernet::Location


class Native::Interface::FastEthernet::Location::CivicLocationId : public ydk::Entity
{
    public:
        CivicLocationId();
        ~CivicLocationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_identifier; //type: string
        class Host; //type: Native::Interface::FastEthernet::Location::CivicLocationId::Host
        class None; //type: Native::Interface::FastEthernet::Location::CivicLocationId::None

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::FastEthernet::Location::CivicLocationId


class Native::Interface::FastEthernet::Location::CivicLocationId::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_location; //type: string

}; // Native::Interface::FastEthernet::Location::CivicLocationId::Host


class Native::Interface::FastEthernet::Location::CivicLocationId::None : public ydk::Entity
{
    public:
        None();
        ~None();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_location; //type: string

}; // Native::Interface::FastEthernet::Location::CivicLocationId::None


class Native::Interface::FastEthernet::Logging : public ydk::Entity
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

        class Event; //type: Native::Interface::FastEthernet::Logging::Event

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Logging::Event> event;
        
}; // Native::Interface::FastEthernet::Logging


class Native::Interface::FastEthernet::Logging::Event : public ydk::Entity
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

        ydk::YLeaf bundle_status; //type: empty
        ydk::YLeaf link_status; //type: empty
        ydk::YLeaf trunk_status; //type: empty
        ydk::YLeaf nfas_status; //type: empty
        ydk::YLeaf power_inline_status; //type: empty
        ydk::YLeaf status; //type: empty
        class SpanningTree; //type: Native::Interface::FastEthernet::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::FastEthernet::Logging::Event::SubifLinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::FastEthernet::Logging::Event


class Native::Interface::FastEthernet::Logging::Event::SpanningTree : public ydk::Entity
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

        ydk::YLeaf status; //type: empty

}; // Native::Interface::FastEthernet::Logging::Event::SpanningTree


class Native::Interface::FastEthernet::Logging::Event::SubifLinkStatus : public ydk::Entity
{
    public:
        SubifLinkStatus();
        ~SubifLinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_bulk; //type: empty

}; // Native::Interface::FastEthernet::Logging::Event::SubifLinkStatus


class Native::Interface::FastEthernet::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eap; //type: empty

}; // Native::Interface::FastEthernet::Mab


class Native::Interface::FastEthernet::Mac : public ydk::Entity
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

        class AccessGroup; //type: Native::Interface::FastEthernet::Mac::AccessGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mac::AccessGroup> access_group;
        
}; // Native::Interface::FastEthernet::Mac


class Native::Interface::FastEthernet::Mac::AccessGroup : public ydk::Entity
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

        class ACLName; //type: Native::Interface::FastEthernet::Mac::AccessGroup::ACLName

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mac::AccessGroup::ACLName> acl_name;
        
}; // Native::Interface::FastEthernet::Mac::AccessGroup


class Native::Interface::FastEthernet::Mac::AccessGroup::ACLName : public ydk::Entity
{
    public:
        ACLName();
        ~ACLName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf apply_to; //type: ApplyTo
        class ApplyTo;

}; // Native::Interface::FastEthernet::Mac::AccessGroup::ACLName


class Native::Interface::FastEthernet::Macro : public ydk::Entity
{
    public:
        Macro();
        ~Macro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class Auto_; //type: Native::Interface::FastEthernet::Macro::Auto_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Macro::Auto_> auto_;
        
}; // Native::Interface::FastEthernet::Macro


class Native::Interface::FastEthernet::Macro::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processing; //type: boolean

}; // Native::Interface::FastEthernet::Macro::Auto_


class Native::Interface::FastEthernet::Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_link; //type: empty

}; // Native::Interface::FastEthernet::Macsec


class Native::Interface::FastEthernet::Mdix : public ydk::Entity
{
    public:
        Mdix();
        ~Mdix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: boolean

}; // Native::Interface::FastEthernet::Mdix


class Native::Interface::FastEthernet::Mka : public ydk::Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PreSharedKey; //type: Native::Interface::FastEthernet::Mka::PreSharedKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mka::PreSharedKey> pre_shared_key;
        
}; // Native::Interface::FastEthernet::Mka


class Native::Interface::FastEthernet::Mka::PreSharedKey : public ydk::Entity
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

        class KeyChain; //type: Native::Interface::FastEthernet::Mka::PreSharedKey::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mka::PreSharedKey::KeyChain> key_chain;
        
}; // Native::Interface::FastEthernet::Mka::PreSharedKey


class Native::Interface::FastEthernet::Mka::PreSharedKey::KeyChain : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Mka::PreSharedKey::KeyChain


class Native::Interface::FastEthernet::Mop : public ydk::Entity
{
    public:
        Mop();
        ~Mop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Native::Interface::FastEthernet::Mop


class Native::Interface::FastEthernet::Mpls : public ydk::Entity
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
        class Accounting; //type: Native::Interface::FastEthernet::Mpls::Accounting
        class Bgp; //type: Native::Interface::FastEthernet::Mpls::Bgp
        class Label; //type: Native::Interface::FastEthernet::Mpls::Label
        class Ldp; //type: Native::Interface::FastEthernet::Mpls::Ldp
        class TrafficEng; //type: Native::Interface::FastEthernet::Mpls::TrafficEng

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::Label> label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::FastEthernet::Mpls


class Native::Interface::FastEthernet::Mpls::Accounting : public ydk::Entity
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

        class Experimental; //type: Native::Interface::FastEthernet::Mpls::Accounting::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::Accounting::Experimental> experimental;
        
}; // Native::Interface::FastEthernet::Mpls::Accounting


class Native::Interface::FastEthernet::Mpls::Accounting::Experimental : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Mpls::Accounting::Experimental


class Native::Interface::FastEthernet::Mpls::Bgp : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Mpls::Bgp


class Native::Interface::FastEthernet::Mpls::Label : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Mpls::Label


class Native::Interface::FastEthernet::Mpls::Ldp : public ydk::Entity
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

        class Discovery; //type: Native::Interface::FastEthernet::Mpls::Ldp::Discovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::Ldp::Discovery> discovery;
        
}; // Native::Interface::FastEthernet::Mpls::Ldp


class Native::Interface::FastEthernet::Mpls::Ldp::Discovery : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Mpls::Ldp::Discovery


class Native::Interface::FastEthernet::Mpls::TrafficEng : public ydk::Entity
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
        class BackupPath; //type: Native::Interface::FastEthernet::Mpls::TrafficEng::BackupPath
        class Flooding; //type: Native::Interface::FastEthernet::Mpls::TrafficEng::Flooding
        class PassiveInterface; //type: Native::Interface::FastEthernet::Mpls::TrafficEng::PassiveInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::TrafficEng::BackupPath> backup_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::TrafficEng::Flooding> flooding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::TrafficEng::PassiveInterface> passive_interface;
        
}; // Native::Interface::FastEthernet::Mpls::TrafficEng


class Native::Interface::FastEthernet::Mpls::TrafficEng::BackupPath : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Mpls::TrafficEng::BackupPath


class Native::Interface::FastEthernet::Mpls::TrafficEng::Flooding : public ydk::Entity
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

        class Thresholds; //type: Native::Interface::FastEthernet::Mpls::TrafficEng::Flooding::Thresholds

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::TrafficEng::Flooding::Thresholds> thresholds;
        
}; // Native::Interface::FastEthernet::Mpls::TrafficEng::Flooding


class Native::Interface::FastEthernet::Mpls::TrafficEng::Flooding::Thresholds : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Mpls::TrafficEng::Flooding::Thresholds


class Native::Interface::FastEthernet::Mpls::TrafficEng::PassiveInterface : public ydk::Entity
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
        class NbrIgpId; //type: Native::Interface::FastEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId> nbr_igp_id;
        
}; // Native::Interface::FastEthernet::Mpls::TrafficEng::PassiveInterface


class Native::Interface::FastEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId


class Native::Interface::FastEthernet::Negotiation : public ydk::Entity
{
    public:
        Negotiation();
        ~Negotiation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: boolean

}; // Native::Interface::FastEthernet::Negotiation


class Native::Interface::FastEthernet::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf flood_reduction; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf mtu_ignore; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf transmit_delay; //type: uint32
        class ProcessId; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId
        class Authentication; //type: Native::Interface::FastEthernet::Ospfv3::Authentication
        class Bfd; //type: Native::Interface::FastEthernet::Ospfv3::Bfd
        class Cost; //type: Native::Interface::FastEthernet::Ospfv3::Cost
        class DatabaseFilter; //type: Native::Interface::FastEthernet::Ospfv3::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::FastEthernet::Ospfv3::DemandCircuit
        class Encryption; //type: Native::Interface::FastEthernet::Ospfv3::Encryption
        class Manet; //type: Native::Interface::FastEthernet::Ospfv3::Manet
        class MultiArea; //type: Native::Interface::FastEthernet::Ospfv3::MultiArea
        class Neighbor; //type: Native::Interface::FastEthernet::Ospfv3::Neighbor
        class Network; //type: Native::Interface::FastEthernet::Ospfv3::Network
        class PrefixSuppression; //type: Native::Interface::FastEthernet::Ospfv3::PrefixSuppression

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption> encryption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::MultiArea> multi_area;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Neighbor> > neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::PrefixSuppression> prefix_suppression; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId> > process_id;
        
}; // Native::Interface::FastEthernet::Ospfv3


class Native::Interface::FastEthernet::Ospfv3::Authentication : public ydk::Entity
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
        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::FastEthernet::Ospfv3::Authentication


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec : public ydk::Entity
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

        ydk::YLeaf spi; //type: uint64
        class Md5; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5 : public ydk::Entity
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

        class KeyString; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1 : public ydk::Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::FastEthernet::Ospfv3::Bfd : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ospfv3::Bfd


class Native::Interface::FastEthernet::Ospfv3::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

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
        class Dynamic; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::Cost


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

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

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

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

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

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

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::FastEthernet::Ospfv3::DatabaseFilter : public ydk::Entity
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

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FastEthernet::Ospfv3::DatabaseFilter

class Native::Interface::FastEthernet::Ipv6::Flow::Monitor::Sampler::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ipv6::Ospf::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Ipv6::Rip::DefaultInformation::Route : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf only;
        static const ydk::Enum::YLeaf originate;

};

class Native::Interface::FastEthernet::Ipv6::TrafficFilter::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Isis::MeshGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;

};

class Native::Interface::FastEthernet::Isis::Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Interface::FastEthernet::Isis::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::FastEthernet::Isis::CircuitType::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2_only;

};

class Native::Interface::FastEthernet::Isis::CsnpInterval::CsnpIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::FastEthernet::Isis::HelloInterval::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::FastEthernet::Isis::HelloInterval::HelloIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::FastEthernet::Isis::HelloInterval::HelloIntervalList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::FastEthernet::Isis::HelloMultiplier::HelloMultiplierList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::FastEthernet::Isis::Ipv6::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::FastEthernet::Isis::Ipv6::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::FastEthernet::Isis::Ipv6::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::FastEthernet::Isis::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::FastEthernet::Isis::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::FastEthernet::Isis::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::FastEthernet::Isis::Password::PasswordList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::FastEthernet::Isis::Priority::PriorityList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::FastEthernet::Isis::ThreeWayHandshake::Implementor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf ietf;

};

class Native::Interface::FastEthernet::Mac::AccessGroup::ACLName::ApplyTo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Mpls::Label::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ospfv3::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_28_ */

