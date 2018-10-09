#ifndef _CISCO_IOS_XE_NATIVE_41_
#define _CISCO_IOS_XE_NATIVE_41_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_39.hpp"
#include "Cisco_IOS_XE_native_40.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache : public ydk::Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect> redirect;
        
}; // Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache


class Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect


class Native::Interface::GigabitEthernet::Ipv6 : public ydk::Entity
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
        class DestinationGuard; //type: Native::Interface::GigabitEthernet::Ipv6::DestinationGuard
        class SourceGuard; //type: Native::Interface::GigabitEthernet::Ipv6::SourceGuard
        class Dhcp; //type: Native::Interface::GigabitEthernet::Ipv6::Dhcp
        class Address; //type: Native::Interface::GigabitEthernet::Ipv6::Address
        class Nd; //type: Native::Interface::GigabitEthernet::Ipv6::Nd
        class Tcp; //type: Native::Interface::GigabitEthernet::Ipv6::Tcp
        class TrafficFilter; //type: Native::Interface::GigabitEthernet::Ipv6::TrafficFilter
        class Flow; //type: Native::Interface::GigabitEthernet::Ipv6::Flow
        class Crypto; //type: Native::Interface::GigabitEthernet::Ipv6::Crypto
        class Ospf; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf
        class NoPim; //type: Native::Interface::GigabitEthernet::Ipv6::NoPim
        class Pim; //type: Native::Interface::GigabitEthernet::Ipv6::Pim
        class Rip; //type: Native::Interface::GigabitEthernet::Ipv6::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::SourceGuard> source_guard; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Tcp> tcp;
        ydk::YList traffic_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::NoPim> no_pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Pim> pim;
        ydk::YList rip;
        
}; // Native::Interface::GigabitEthernet::Ipv6


class Native::Interface::GigabitEthernet::Ipv6::DestinationGuard : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::DestinationGuard


class Native::Interface::GigabitEthernet::Ipv6::SourceGuard : public ydk::Entity
{
    public:
        SourceGuard();
        ~SourceGuard();

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

}; // Native::Interface::GigabitEthernet::Ipv6::SourceGuard


class Native::Interface::GigabitEthernet::Ipv6::Dhcp : public ydk::Entity
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

        class Client; //type: Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client
        class Server; //type: Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server
        class Guard; //type: Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client> client;
        ydk::YList server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard> guard; // presence node
        
}; // Native::Interface::GigabitEthernet::Ipv6::Dhcp


class Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client : public ydk::Entity
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

        class Request; //type: Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request> request;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client


class Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request


class Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server


class Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard


class Native::Interface::GigabitEthernet::Ipv6::Address : public ydk::Entity
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

        class Dhcp; //type: Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig> autoconfig; // presence node
        ydk::YList prefix_list;
        ydk::YList link_local_address;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Address


class Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp


class Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig


class Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList


class Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress


class Native::Interface::GigabitEthernet::Ipv6::Nd : public ydk::Entity
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
        class Raguard; //type: Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard
        class Autoconfig; //type: Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig
        class Ra; //type: Native::Interface::GigabitEthernet::Ipv6::Nd::Ra

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard> raguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig> autoconfig;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Nd::Ra> ra;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Nd


class Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard


class Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig


class Native::Interface::GigabitEthernet::Ipv6::Nd::Ra : public ydk::Entity
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

        class Suppress; //type: Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress> suppress; // presence node
        
}; // Native::Interface::GigabitEthernet::Ipv6::Nd::Ra


class Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress


class Native::Interface::GigabitEthernet::Ipv6::Tcp : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Tcp


class Native::Interface::GigabitEthernet::Ipv6::TrafficFilter : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::TrafficFilter


class Native::Interface::GigabitEthernet::Ipv6::Flow : public ydk::Entity
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
        class Monitor; //type: Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor

        ydk::YList monitor;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Flow


class Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor : public ydk::Entity
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
        class Sampler; //type: Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler

        ydk::YList sampler;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor


class Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler


class Native::Interface::GigabitEthernet::Ipv6::Crypto : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Crypto


class Native::Interface::GigabitEthernet::Ipv6::Ospf : public ydk::Entity
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
        class Process; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Process
        class Authentication; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication
        class Bfd; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit
        class Encryption; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption
        class FloodReduction; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction
        class MtuIgnore; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore
        class Neighbor; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor
        class Network; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Network
        class Shutdown; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown

        ydk::YList process;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption> encryption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore> mtu_ignore; // presence node
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown> shutdown; // presence node
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Process : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Process


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication : public ydk::Entity
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
        class Ipsec; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec : public ydk::Entity
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
        class Md5; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5 : public ydk::Entity
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

        class KeyString; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1 : public ydk::Entity
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

        class KeyString; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd


class Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter


class Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption : public ydk::Entity
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
        class Ipsec; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec : public ydk::Entity
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
        class Ipsec3des; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des
        class AesCbc; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des> ipsec_3des;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc> aes_cbc;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des : public ydk::Entity
{
    public:
        Ipsec3des();
        ~Ipsec3des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString> key_string;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc : public ydk::Entity
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

        class AesCbc128; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128 : public ydk::Entity
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

        class KeyString; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192 : public ydk::Entity
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

        class KeyString; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256 : public ydk::Entity
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

        class KeyString; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction


class Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor : public ydk::Entity
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
        class DatabaseFilter; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Network : public ydk::Entity
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
        class PointToMultipoint; //type: Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Network


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint


class Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown


class Native::Interface::GigabitEthernet::Ipv6::NoPim : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::NoPim


class Native::Interface::GigabitEthernet::Ipv6::Pim : public ydk::Entity
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
        class Bsr; //type: Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr> bsr;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Pim


class Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr


class Native::Interface::GigabitEthernet::Ipv6::Rip : public ydk::Entity
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
        class DefaultInformation; //type: Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation> default_information;
        
}; // Native::Interface::GigabitEthernet::Ipv6::Rip


class Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation


class Native::Interface::GigabitEthernet::Logging : public ydk::Entity
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

        class Event; //type: Native::Interface::GigabitEthernet::Logging::Event

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Logging::Event> event;
        
}; // Native::Interface::GigabitEthernet::Logging


class Native::Interface::GigabitEthernet::Logging::Event : public ydk::Entity
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
        class SpanningTree; //type: Native::Interface::GigabitEthernet::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::GigabitEthernet::Logging::Event


class Native::Interface::GigabitEthernet::Logging::Event::SpanningTree : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Logging::Event::SpanningTree


class Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus


class Native::Interface::GigabitEthernet::Mdix : public ydk::Entity
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

}; // Native::Interface::GigabitEthernet::Mdix


class Native::Interface::GigabitEthernet::Mop : public ydk::Entity
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
        ydk::YLeaf sysid; //type: boolean

}; // Native::Interface::GigabitEthernet::Mop


class Native::Interface::GigabitEthernet::InterfaceQos : public ydk::Entity
{
    public:
        InterfaceQos();
        ~InterfaceQos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trust; //type: Native::Interface::GigabitEthernet::InterfaceQos::Trust

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::InterfaceQos::Trust> trust;
        
}; // Native::Interface::GigabitEthernet::InterfaceQos


class Native::Interface::GigabitEthernet::InterfaceQos::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::GigabitEthernet::InterfaceQos::Trust


class Native::Interface::GigabitEthernet::Source : public ydk::Entity
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

        class Template; //type: Native::Interface::GigabitEthernet::Source::Template

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Source::Template> template_;
        
}; // Native::Interface::GigabitEthernet::Source


class Native::Interface::GigabitEthernet::Source::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TemplateName; //type: Native::Interface::GigabitEthernet::Source::Template::TemplateName

        ydk::YList template_name;
        
}; // Native::Interface::GigabitEthernet::Source::Template


class Native::Interface::GigabitEthernet::Source::Template::TemplateName : public ydk::Entity
{
    public:
        TemplateName();
        ~TemplateName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf merge; //type: empty

}; // Native::Interface::GigabitEthernet::Source::Template::TemplateName


class Native::Interface::GigabitEthernet::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: Version
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::GigabitEthernet::Standby::Delay
        class UseBia; //type: Native::Interface::GigabitEthernet::Standby::UseBia
        class StandbyList; //type: Native::Interface::GigabitEthernet::Standby::StandbyList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::UseBia> use_bia; // presence node
        ydk::YList standby_list;
                class Version;

}; // Native::Interface::GigabitEthernet::Standby


class Native::Interface::GigabitEthernet::Standby::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16

}; // Native::Interface::GigabitEthernet::Standby::Delay


class Native::Interface::GigabitEthernet::Standby::UseBia : public ydk::Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Scope; //type: Native::Interface::GigabitEthernet::Standby::UseBia::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::GigabitEthernet::Standby::UseBia


class Native::Interface::GigabitEthernet::Standby::UseBia::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

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

}; // Native::Interface::GigabitEthernet::Standby::UseBia::Scope


class Native::Interface::GigabitEthernet::Standby::StandbyList : public ydk::Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint16
        ydk::YLeaf follow; //type: string
        ydk::YLeaf ipv6; //type: one of string, enumeration
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Timers> timers;
        ydk::YList track;
                class Ipv6;

}; // Native::Interface::GigabitEthernet::Standby::StandbyList


class Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication : public ydk::Entity
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

        ydk::YLeaf word; //type: string
        ydk::YLeaf text; //type: string
        class Md5; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication


class Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5 : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5


class Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString : public ydk::Entity
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
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::GigabitEthernet::Standby::StandbyList::Ip : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Ip


class Native::Interface::GigabitEthernet::Standby::StandbyList::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Preempt


class Native::Interface::GigabitEthernet::Standby::StandbyList::Preempt::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16
        ydk::YLeaf sync; //type: uint16

}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Preempt::Delay


class Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect


class Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement : public ydk::Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication : public ydk::Entity
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

        class Md5; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public ydk::Entity
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
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertisement; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Timers


class Native::Interface::GigabitEthernet::Standby::StandbyList::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloInterval; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::GigabitEthernet::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Timers


class Native::Interface::GigabitEthernet::Standby::StandbyList::Timers::HelloInterval : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::GigabitEthernet::Standby::StandbyList::Timers::HoldTime : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Timers::HoldTime


class Native::Interface::GigabitEthernet::Standby::StandbyList::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::GigabitEthernet::Standby::StandbyList::Track


class Native::Interface::GigabitEthernet::AccessSession : public ydk::Entity
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

        ydk::YLeaf closed; //type: empty
        ydk::YLeaf host_mode; //type: HostMode
        class PortControl; //type: Native::Interface::GigabitEthernet::AccessSession::PortControl
        class ControlDirection; //type: Native::Interface::GigabitEthernet::AccessSession::ControlDirection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::AccessSession::PortControl> port_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::AccessSession::ControlDirection> control_direction;
                class HostMode;

}; // Native::Interface::GigabitEthernet::AccessSession


class Native::Interface::GigabitEthernet::AccessSession::PortControl : public ydk::Entity
{
    public:
        PortControl();
        ~PortControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty

}; // Native::Interface::GigabitEthernet::AccessSession::PortControl


class Native::Interface::GigabitEthernet::AccessSession::ControlDirection : public ydk::Entity
{
    public:
        ControlDirection();
        ~ControlDirection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty

}; // Native::Interface::GigabitEthernet::AccessSession::ControlDirection


class Native::Interface::GigabitEthernet::StormControl : public ydk::Entity
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

        class Action; //type: Native::Interface::GigabitEthernet::StormControl::Action
        class Broadcast; //type: Native::Interface::GigabitEthernet::StormControl::Broadcast
        class Multicast; //type: Native::Interface::GigabitEthernet::StormControl::Multicast
        class Unicast; //type: Native::Interface::GigabitEthernet::StormControl::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Unicast> unicast;
        
}; // Native::Interface::GigabitEthernet::StormControl


class Native::Interface::GigabitEthernet::StormControl::Action : public ydk::Entity
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

        ydk::YLeaf level; //type: decimal64
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Interface::GigabitEthernet::StormControl::Action


class Native::Interface::GigabitEthernet::StormControl::Broadcast : public ydk::Entity
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

        class Include; //type: Native::Interface::GigabitEthernet::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::GigabitEthernet::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Broadcast::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::GigabitEthernet::StormControl::Broadcast


class Native::Interface::GigabitEthernet::StormControl::Broadcast::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty

}; // Native::Interface::GigabitEthernet::StormControl::Broadcast::Include


class Native::Interface::GigabitEthernet::StormControl::Broadcast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Threshold
        class Bps; //type: Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::GigabitEthernet::StormControl::Broadcast::Level


class Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Threshold : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Threshold


class Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Bps


class Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::GigabitEthernet::StormControl::Broadcast::Level::Pps


class Native::Interface::GigabitEthernet::StormControl::Multicast : public ydk::Entity
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

        class Level; //type: Native::Interface::GigabitEthernet::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Multicast::Level> level;
        
}; // Native::Interface::GigabitEthernet::StormControl::Multicast


class Native::Interface::GigabitEthernet::StormControl::Multicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Threshold
        class Bps; //type: Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::GigabitEthernet::StormControl::Multicast::Level


class Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Threshold : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Threshold


class Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Bps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Bps


class Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Pps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::GigabitEthernet::StormControl::Multicast::Level::Pps


class Native::Interface::GigabitEthernet::StormControl::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::GigabitEthernet::StormControl::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Unicast::Level> level;
        
}; // Native::Interface::GigabitEthernet::StormControl::Unicast


class Native::Interface::GigabitEthernet::StormControl::Unicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Pps> pps;
        
}; // Native::Interface::GigabitEthernet::StormControl::Unicast::Level


class Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Threshold : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Threshold


class Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Bps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Bps


class Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Pps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::GigabitEthernet::StormControl::Unicast::Level::Pps


class Native::Interface::GigabitEthernet::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::GigabitEthernet::Trust


class Native::Interface::GigabitEthernet::PriorityQueue : public ydk::Entity
{
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::GigabitEthernet::PriorityQueue::CosMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::GigabitEthernet::PriorityQueue


class Native::Interface::GigabitEthernet::PriorityQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::GigabitEthernet::PriorityQueue::CosMap


class Native::Interface::GigabitEthernet::RcvQueue : public ydk::Entity
{
    public:
        RcvQueue();
        ~RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosMap; //type: Native::Interface::GigabitEthernet::RcvQueue::CosMap

        ydk::YList cos_map;
        
}; // Native::Interface::GigabitEthernet::RcvQueue


class Native::Interface::GigabitEthernet::RcvQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint8
        ydk::YLeaf threshold_id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::GigabitEthernet::RcvQueue::CosMap


class Native::Interface::GigabitEthernet::Peer : public ydk::Entity
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

        class Default; //type: Native::Interface::GigabitEthernet::Peer::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Peer::Default> default_;
        
}; // Native::Interface::GigabitEthernet::Peer


class Native::Interface::GigabitEthernet::Peer::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::GigabitEthernet::Peer::Default::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Peer::Default::Ip> ip;
        
}; // Native::Interface::GigabitEthernet::Peer::Default


class Native::Interface::GigabitEthernet::Peer::Default::Ip : public ydk::Entity
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

        class Address; //type: Native::Interface::GigabitEthernet::Peer::Default::Ip::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Peer::Default::Ip::Address> address;
        
}; // Native::Interface::GigabitEthernet::Peer::Default::Ip


class Native::Interface::GigabitEthernet::Peer::Default::Ip::Address : public ydk::Entity
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

        ydk::YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::GigabitEthernet::Peer::Default::Ip::Address


class Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool : public ydk::Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pools; //type: string

}; // Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool


class Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool : public ydk::Entity
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

        ydk::YLeaf pools; //type: string

}; // Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool


class Native::Interface::GigabitEthernet::PmPath : public ydk::Entity
{
    public:
        PmPath();
        ~PmPath();

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
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::GigabitEthernet::PmPath


class Native::Interface::GigabitEthernet::SwitchportWrapper : public ydk::Entity
{
    public:
        SwitchportWrapper();
        ~SwitchportWrapper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Switchport; //type: Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport> switchport;
        
}; // Native::Interface::GigabitEthernet::SwitchportWrapper


class Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport : public ydk::Entity
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

        ydk::YLeaf mode; //type: Mode
        class Access; //type: Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access
        class Trunk; //type: Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk> trunk;
                class Mode;

}; // Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport


class Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access : public ydk::Entity
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

        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access


class Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Allowed; //type: Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_> native;
        
}; // Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk


class Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed : public ydk::Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed


class Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan : public ydk::Entity
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

        ydk::YLeaf vlans; //type: string
        ydk::YLeaf add; //type: one of uint16, string
        ydk::YLeaf all; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of uint16, string
        ydk::YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan


class Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_ : public ydk::Entity
{
    public:
        Native_();
        ~Native_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_


class Native::Interface::GigabitEthernet::CarrierDelay : public ydk::Entity
{
    public:
        CarrierDelay();
        ~CarrierDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16
        class Down; //type: Native::Interface::GigabitEthernet::CarrierDelay::Down
        class Up; //type: Native::Interface::GigabitEthernet::CarrierDelay::Up

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::CarrierDelay::Down> down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::CarrierDelay::Up> up;
        
}; // Native::Interface::GigabitEthernet::CarrierDelay


class Native::Interface::GigabitEthernet::CarrierDelay::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::GigabitEthernet::CarrierDelay::Down


class Native::Interface::GigabitEthernet::CarrierDelay::Up : public ydk::Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::GigabitEthernet::CarrierDelay::Up


class Native::Interface::GigabitEthernet::ChannelGroup : public ydk::Entity
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

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf non_silent; //type: empty
        ydk::YLeaf link; //type: uint8
        ydk::YLeaf auto_; //type: empty
        class Mode;

}; // Native::Interface::GigabitEthernet::ChannelGroup


class Native::Interface::GigabitEthernet::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Oam; //type: Native::Interface::GigabitEthernet::Ethernet::Oam
        class Dot1ad; //type: Native::Interface::GigabitEthernet::Ethernet::Dot1ad

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam> oam; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Dot1ad> dot1ad;
        
}; // Native::Interface::GigabitEthernet::Ethernet


class Native::Interface::GigabitEthernet::Ethernet::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_rate; //type: uint8
        ydk::YLeaf min_rate; //type: uint8
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf timeout; //type: uint8
        class LinkMonitor; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor
        class RemoteFailure; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure
        class RemoteLoopback; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor> link_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure> remote_failure;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback> remote_loopback;
                class Mode;

}; // Native::Interface::GigabitEthernet::Ethernet::Oam


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor : public ydk::Entity
{
    public:
        LinkMonitor();
        ~LinkMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on; //type: empty
        ydk::YLeaf supported; //type: empty
        class Frame; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame
        class FramePeriod; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod
        class FrameSeconds; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds
        class HighThreshold; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold
        class ReceiveCrc; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc
        class SymbolPeriod; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame> frame;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod> frame_period;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds> frame_seconds;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold> high_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc> receive_crc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod> symbol_period;
        
}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame : public ydk::Entity
{
    public:
        Frame();
        ~Frame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold> threshold;
        
}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High> high;
        
}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High : public ydk::Entity
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

        ydk::YLeaf thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod : public ydk::Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold> threshold;
        
}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High> high;
        
}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High : public ydk::Entity
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

        ydk::YLeaf f_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds : public ydk::Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold> threshold;
        
}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High> high;
        
}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High : public ydk::Entity
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

        ydk::YLeaf e_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold : public ydk::Entity
{
    public:
        HighThreshold();
        ~HighThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action> action;
        
}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold


class Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action : public ydk::Entity
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

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action

class Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::Route : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf only;
        static const ydk::Enum::YLeaf originate;

};

class Native::Interface::GigabitEthernet::InterfaceQos::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;

};

class Native::Interface::GigabitEthernet::Standby::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Interface::GigabitEthernet::Standby::StandbyList::Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf autoconfig;

};

class Native::Interface::GigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::GigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::GigabitEthernet::AccessSession::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

};

class Native::Interface::GigabitEthernet::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

};

class Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access;
        static const ydk::Enum::YLeaf trunk;

};

class Native::Interface::GigabitEthernet::ChannelGroup::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf passive;

};

class Native::Interface::GigabitEthernet::Ethernet::Oam::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_41_ */

