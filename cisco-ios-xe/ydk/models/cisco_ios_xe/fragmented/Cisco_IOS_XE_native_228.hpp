#ifndef _CISCO_IOS_XE_NATIVE_228_
#define _CISCO_IOS_XE_NATIVE_228_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_226.hpp"
#include "Cisco_IOS_XE_native_227.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No : public ydk::Entity
{
    public:
        No();
        ~No();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Permit; //type: Native::Arp::AccessList::No::Permit
        class Deny; //type: Native::Arp::AccessList::No::Deny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit> permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny> deny;
        
}; // Native::Arp::AccessList::No


class Native::Arp::AccessList::No::Permit : public ydk::Entity
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

        class Ip; //type: Native::Arp::AccessList::No::Permit::Ip
        class Request; //type: Native::Arp::AccessList::No::Permit::Request
        class Response; //type: Native::Arp::AccessList::No::Permit::Response

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request> request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response> response;
        
}; // Native::Arp::AccessList::No::Permit


class Native::Arp::AccessList::No::Permit::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Ip


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::Any : public ydk::Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Any


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::Host : public ydk::Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress

        ydk::YList ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Host


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request : public ydk::Entity
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

        class Ip; //type: Native::Arp::AccessList::No::Permit::Request::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip> ip;
        
}; // Native::Arp::AccessList::No::Permit::Request


class Native::Arp::AccessList::No::Permit::Request::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Any : public ydk::Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Host : public ydk::Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress

        ydk::YList ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response : public ydk::Entity
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

        class Ip; //type: Native::Arp::AccessList::No::Permit::Response::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip> ip;
        
}; // Native::Arp::AccessList::No::Permit::Response


class Native::Arp::AccessList::No::Permit::Response::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Any : public ydk::Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Host : public ydk::Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress

        ydk::YList ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Deny : public ydk::Entity
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

        class Ip; //type: Native::Arp::AccessList::No::Deny::Ip
        class Request; //type: Native::Arp::AccessList::No::Deny::Request
        class Response; //type: Native::Arp::AccessList::No::Deny::Response

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request> request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response> response;
        
}; // Native::Arp::AccessList::No::Deny


class Native::Arp::AccessList::No::Deny::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Ip


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::Any : public ydk::Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Any


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::Host : public ydk::Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress

        ydk::YList ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Host


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request : public ydk::Entity
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

        class Ip; //type: Native::Arp::AccessList::No::Deny::Request::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip> ip;
        
}; // Native::Arp::AccessList::No::Deny::Request


class Native::Arp::AccessList::No::Deny::Request::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Any : public ydk::Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Host : public ydk::Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress

        ydk::YList ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response : public ydk::Entity
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

        class Ip; //type: Native::Arp::AccessList::No::Deny::Response::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip> ip;
        
}; // Native::Arp::AccessList::No::Deny::Response


class Native::Arp::AccessList::No::Deny::Response::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Any : public ydk::Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Host : public ydk::Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress

        ydk::YList ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
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

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Esmc : public ydk::Entity
{
    public:
        Esmc();
        ~Esmc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf process; //type: empty

}; // Native::Esmc


class Native::BbaGroup : public ydk::Entity
{
    public:
        BbaGroup();
        ~BbaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pppoe; //type: Native::BbaGroup::Pppoe

        ydk::YList pppoe;
        
}; // Native::BbaGroup


class Native::BbaGroup::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: one of enumeration, string
        ydk::YLeaf virtual_template; //type: uint16
        class VendorTag; //type: Native::BbaGroup::Pppoe::VendorTag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe::VendorTag> vendor_tag;
                class Id;

}; // Native::BbaGroup::Pppoe


class Native::BbaGroup::Pppoe::VendorTag : public ydk::Entity
{
    public:
        VendorTag();
        ~VendorTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf strip; //type: empty
        class CircuitId; //type: Native::BbaGroup::Pppoe::VendorTag::CircuitId
        class DslSyncRate; //type: Native::BbaGroup::Pppoe::VendorTag::DslSyncRate
        class RemoteId; //type: Native::BbaGroup::Pppoe::VendorTag::RemoteId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe::VendorTag::CircuitId> circuit_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe::VendorTag::DslSyncRate> dsl_sync_rate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BbaGroup::Pppoe::VendorTag::RemoteId> remote_id;
        
}; // Native::BbaGroup::Pppoe::VendorTag


class Native::BbaGroup::Pppoe::VendorTag::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: empty

}; // Native::BbaGroup::Pppoe::VendorTag::CircuitId


class Native::BbaGroup::Pppoe::VendorTag::DslSyncRate : public ydk::Entity
{
    public:
        DslSyncRate();
        ~DslSyncRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: empty

}; // Native::BbaGroup::Pppoe::VendorTag::DslSyncRate


class Native::BbaGroup::Pppoe::VendorTag::RemoteId : public ydk::Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: empty

}; // Native::BbaGroup::Pppoe::VendorTag::RemoteId


class Native::Cef : public ydk::Entity
{
    public:
        Cef();
        ~Cef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Table; //type: Native::Cef::Table

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table> table;
        
}; // Native::Cef


class Native::Cef::Table : public ydk::Entity
{
    public:
        Table();
        ~Table();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rate_monitor_period; //type: uint8
        class OutputChain; //type: Native::Cef::Table::OutputChain
        class ConsistencyCheck; //type: Native::Cef::Table::ConsistencyCheck
        class Download; //type: Native::Cef::Table::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain> output_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck> consistency_check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download> download;
        
}; // Native::Cef::Table


class Native::Cef::Table::OutputChain : public ydk::Entity
{
    public:
        OutputChain();
        ~OutputChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Build; //type: Native::Cef::Table::OutputChain::Build

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build> build;
        
}; // Native::Cef::Table::OutputChain


class Native::Cef::Table::OutputChain::Build : public ydk::Entity
{
    public:
        Build();
        ~Build();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Favor; //type: Native::Cef::Table::OutputChain::Build::Favor
        class Indirection; //type: Native::Cef::Table::OutputChain::Build::Indirection
        class InplaceModify; //type: Native::Cef::Table::OutputChain::Build::InplaceModify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::Favor> favor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::Indirection> indirection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::InplaceModify> inplace_modify;
        
}; // Native::Cef::Table::OutputChain::Build


class Native::Cef::Table::OutputChain::Build::Favor : public ydk::Entity
{
    public:
        Favor();
        ~Favor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf convergence_speed; //type: empty
        ydk::YLeaf memory_utilization; //type: empty

}; // Native::Cef::Table::OutputChain::Build::Favor


class Native::Cef::Table::OutputChain::Build::Indirection : public ydk::Entity
{
    public:
        Indirection();
        ~Indirection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_to_mpls; //type: empty
        ydk::YLeaf ipv6_to_mpls; //type: empty
        ydk::YLeaf mpls_end_of_stack; //type: empty
        ydk::YLeaf mpls_non_end_of_stack; //type: empty
        ydk::YLeaf non_recursive_prefix; //type: empty
        ydk::YLeaf recursive_prefix; //type: empty

}; // Native::Cef::Table::OutputChain::Build::Indirection


class Native::Cef::Table::OutputChain::Build::InplaceModify : public ydk::Entity
{
    public:
        InplaceModify();
        ~InplaceModify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf load_sharing; //type: empty
        ydk::YLeaf push_counter; //type: empty

}; // Native::Cef::Table::OutputChain::Build::InplaceModify


class Native::Cef::Table::ConsistencyCheck : public ydk::Entity
{
    public:
        ConsistencyCheck();
        ~ConsistencyCheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::Cef::Table::ConsistencyCheck::Ipv4
        class Ipv6; //type: Native::Cef::Table::ConsistencyCheck::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6> ipv6;
        
}; // Native::Cef::Table::ConsistencyCheck


class Native::Cef::Table::ConsistencyCheck::Ipv4 : public ydk::Entity
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

        ydk::YLeaf data_checking; //type: empty
        ydk::YLeaf error_message; //type: empty
        class AutoRepair; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair
        class Type; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair> auto_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type> type;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4


class Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair : public ydk::Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf delay; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type : public ydk::Entity
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

        ydk::YLeaf lc_detect; //type: empty
        class ScanIosRib; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib
        class ScanRibIos; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos
        class ScanLcRp; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp
        class ScanRpLc; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib> scan_ios_rib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos> scan_rib_ios;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp> scan_lc_rp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc> scan_rp_lc;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type

class Native::BbaGroup::Pppoe::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_228_ */

