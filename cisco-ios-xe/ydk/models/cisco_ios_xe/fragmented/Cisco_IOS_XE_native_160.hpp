#ifndef _CISCO_IOS_XE_NATIVE_160_
#define _CISCO_IOS_XE_NATIVE_160_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_157.hpp"
#include "Cisco_IOS_XE_native_159.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mac; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_ : public Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress : public Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_ : public Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response : public Entity
{
    public:
        Response();
        ~Response();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Arp::AccessList::No::Deny::Response::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip> ip;
        
}; // Native::Arp::AccessList::No::Deny::Response


class Native::Arp::AccessList::No::Deny::Response::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress : public Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mac; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_ : public Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress : public Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_ : public Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Switch : public Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf provision; //type: ProvisionEnum
        class ProvisionEnum;

}; // Native::Switch


class Native::SwitchVirtual : public Entity
{
    public:
        SwitchVirtual();
        ~SwitchVirtual();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: uint32
        YLeaf virtual_; //type: empty
        class Switch; //type: Native::SwitchVirtual::Switch
        class MacAddress; //type: Native::SwitchVirtual::MacAddress
        class DualActive; //type: Native::SwitchVirtual::DualActive

        std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive> dual_active;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual::Switch> switch;
        
}; // Native::SwitchVirtual


class Native::SwitchVirtual::Switch : public Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch_number; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::SwitchVirtual::Switch


class Native::SwitchVirtual::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf use_virtual; //type: empty

}; // Native::SwitchVirtual::MacAddress


class Native::SwitchVirtual::DualActive : public Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Recovery; //type: Native::SwitchVirtual::DualActive::Recovery
        class Detection; //type: Native::SwitchVirtual::DualActive::Detection

        std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection> detection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Recovery> recovery;
        
}; // Native::SwitchVirtual::DualActive


class Native::SwitchVirtual::DualActive::Recovery : public Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: uint8
        class Ip; //type: Native::SwitchVirtual::DualActive::Recovery::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Recovery::Ip> ip;
        
}; // Native::SwitchVirtual::DualActive::Recovery


class Native::SwitchVirtual::DualActive::Recovery::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string

}; // Native::SwitchVirtual::DualActive::Recovery::Ip


class Native::SwitchVirtual::DualActive::Detection : public Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pagp; //type: Native::SwitchVirtual::DualActive::Detection::Pagp

        std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection::Pagp> pagp; // presence node
        
}; // Native::SwitchVirtual::DualActive::Detection


class Native::SwitchVirtual::DualActive::Detection::Pagp : public Entity
{
    public:
        Pagp();
        ~Pagp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trust; //type: Native::SwitchVirtual::DualActive::Detection::Pagp::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection::Pagp::Trust> trust;
        
}; // Native::SwitchVirtual::DualActive::Detection::Pagp


class Native::SwitchVirtual::DualActive::Detection::Pagp::Trust : public Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf channel_group; //type: uint8

}; // Native::SwitchVirtual::DualActive::Detection::Pagp::Trust


class Native::Device : public Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf classifier; //type: empty

}; // Native::Device


class Native::StackMac : public Entity
{
    public:
        StackMac();
        ~StackMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Persistent; //type: Native::StackMac::Persistent

        std::shared_ptr<Cisco_IOS_XE_native::Native::StackMac::Persistent> persistent;
        
}; // Native::StackMac


class Native::StackMac::Persistent : public Entity
{
    public:
        Persistent();
        ~Persistent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timer; //type: uint8

}; // Native::StackMac::Persistent


class Native::L2ProtocolTunnel : public Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cos; //type: uint8
        class Global; //type: Native::L2ProtocolTunnel::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2ProtocolTunnel::Global> global;
        
}; // Native::L2ProtocolTunnel


class Native::L2ProtocolTunnel::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_threshold; //type: uint16

}; // Native::L2ProtocolTunnel::Global


class Native::Rep : public Entity
{
    public:
        Rep();
        ~Rep();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Admin; //type: Native::Rep::Admin

        std::shared_ptr<Cisco_IOS_XE_native::Native::Rep::Admin> admin;
        
}; // Native::Rep


class Native::Rep::Admin : public Entity
{
    public:
        Admin();
        ~Admin();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Rep::Admin::Vlan

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Rep::Admin::Vlan> > vlan;
        
}; // Native::Rep::Admin


class Native::Rep::Admin::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16

}; // Native::Rep::Admin::Vlan


class Native::HwSwitch : public Entity
{
    public:
        HwSwitch();
        ~HwSwitch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Switch; //type: Native::HwSwitch::Switch

        std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch::Switch> switch;
        
}; // Native::HwSwitch


class Native::HwSwitch::Switch : public Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SwitchNumber; //type: Native::HwSwitch::Switch::SwitchNumber

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch::Switch::SwitchNumber> > switch_number;
        
}; // Native::HwSwitch::Switch


class Native::HwSwitch::Switch::SwitchNumber : public Entity
{
    public:
        SwitchNumber();
        ~SwitchNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch_number; //type: uint8
        class Logging; //type: Native::HwSwitch::Switch::SwitchNumber::Logging

        std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch::Switch::SwitchNumber::Logging> logging;
        
}; // Native::HwSwitch::Switch::SwitchNumber


class Native::HwSwitch::Switch::SwitchNumber::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Onboard; //type: Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard

        std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard> onboard; // presence node
        
}; // Native::HwSwitch::Switch::SwitchNumber::Logging


class Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard : public Entity
{
    public:
        Onboard();
        ~Onboard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter; //type: empty
        YLeaf environment; //type: empty
        YLeaf message; //type: empty
        YLeaf poe; //type: empty
        YLeaf temperature; //type: empty
        YLeaf voltage; //type: empty

}; // Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard


class Native::Utd : public Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Utd


class Native::UtdEngine : public Entity
{
    public:
        UtdEngine();
        ~UtdEngine();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Utd; //type: Native::UtdEngine::Utd

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd> utd;
        
}; // Native::UtdEngine


class Native::UtdEngine::Utd : public Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Engine; //type: Native::UtdEngine::Utd::Engine
        class Whitelist; //type: Native::UtdEngine::Utd::Whitelist

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine> engine;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Whitelist> whitelist;
        
}; // Native::UtdEngine::Utd


class Native::UtdEngine::Utd::Engine : public Entity
{
    public:
        Engine();
        ~Engine();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Advanced; //type: Native::UtdEngine::Utd::Engine::Advanced
        class Standard; //type: Native::UtdEngine::Utd::Engine::Standard

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Advanced> advanced;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard> standard;
        
}; // Native::UtdEngine::Utd::Engine


class Native::UtdEngine::Utd::Engine::Advanced : public Entity
{
    public:
        Advanced();
        ~Advanced();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::UtdEngine::Utd::Engine::Advanced::Default_
        class Threat; //type: Native::UtdEngine::Utd::Engine::Advanced::Threat

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Advanced::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Advanced::Threat> threat; // presence node
        
}; // Native::UtdEngine::Utd::Engine::Advanced


class Native::UtdEngine::Utd::Engine::Advanced::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threat; //type: Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat> threat; // presence node
        
}; // Native::UtdEngine::Utd::Engine::Advanced::Default_


class Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat : public Entity
{
    public:
        Threat();
        ~Threat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat


class Native::UtdEngine::Utd::Engine::Advanced::Threat : public Entity
{
    public:
        Threat();
        ~Threat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf detection; //type: empty

}; // Native::UtdEngine::Utd::Engine::Advanced::Threat


class Native::UtdEngine::Utd::Engine::Standard : public Entity
{
    public:
        Standard();
        ~Standard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: PolicyEnum
        YLeaf threat; //type: ThreatEnum
        YLeaf whitelist; //type: empty
        class Default_; //type: Native::UtdEngine::Utd::Engine::Standard::Default_
        class Logging; //type: Native::UtdEngine::Utd::Engine::Standard::Logging
        class Signature; //type: Native::UtdEngine::Utd::Engine::Standard::Signature

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature> signature;
                class PolicyEnum;
        class ThreatEnum;

}; // Native::UtdEngine::Utd::Engine::Standard


class Native::UtdEngine::Utd::Engine::Standard::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: empty
        YLeaf threat; //type: empty

}; // Native::UtdEngine::Utd::Engine::Standard::Default_


class Native::UtdEngine::Utd::Engine::Standard::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server; //type: Native::UtdEngine::Utd::Engine::Standard::Logging::Server
        class Syslog; //type: Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Logging::Server> server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog> syslog; // presence node
        
}; // Native::UtdEngine::Utd::Engine::Standard::Logging


class Native::UtdEngine::Utd::Engine::Standard::Logging::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf level; //type: SyslogLevelTypeEnum
        YLeaf syslog; //type: empty

}; // Native::UtdEngine::Utd::Engine::Standard::Logging::Server


class Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: SyslogLevelTypeEnum

}; // Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog


class Native::UtdEngine::Utd::Engine::Standard::Signature : public Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Update; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update> update;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OccurAt; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt
        class Server; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt> occur_at;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server> server;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt : public Entity
{
    public:
        OccurAt();
        ~OccurAt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Daily; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily
        class Monthly; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly
        class Weekly; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly> monthly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly> weekly;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily : public Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly : public Entity
{
    public:
        Monthly();
        ~Monthly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: string
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly : public Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: string
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cisco; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco
        class Url; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco> cisco;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url> url;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco : public Entity
{
    public:
        Cisco();
        ~Cisco();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf username; //type: string
        YLeaf password; //type: string

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class All; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All> all;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf password; //type: string

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All


class Native::UtdEngine::Utd::Whitelist : public Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Signature; //type: Native::UtdEngine::Utd::Whitelist::Signature

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Whitelist::Signature> signature;
        
}; // Native::UtdEngine::Utd::Whitelist


class Native::UtdEngine::Utd::Whitelist::Signature : public Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint64
        YLeaf comment; //type: string

}; // Native::UtdEngine::Utd::Whitelist::Signature


class Native::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Service; //type: Native::Voice::Service

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Voice::Service> > service;
        
}; // Native::Voice


class Native::Voice::Service : public Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TypeEnum
        class Fax; //type: Native::Voice::Service::Fax

        std::shared_ptr<Cisco_IOS_XE_native::Native::Voice::Service::Fax> fax;
                class TypeEnum;

}; // Native::Voice::Service


class Native::Voice::Service::Fax : public Entity
{
    public:
        Fax();
        ~Fax();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        YLeaf fallback; //type: FallbackEnum
        YLeaf codec; //type: CodecEnum
        YLeaf ls_redundancy; //type: uint8
        YLeaf hs_redundancy; //type: uint8
        YLeaf version; //type: VersionEnum
        class ProtocolEnum;
        class FallbackEnum;
        class CodecEnum;
        class VersionEnum;

}; // Native::Voice::Service::Fax


class Native::VoiceCard : public Entity
{
    public:
        VoiceCard();
        ~VoiceCard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf slot; //type: uint8

}; // Native::VoiceCard


class Native::Vpdn : public Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authen_before_forward; //type: empty
        YLeaf enable; //type: empty
        YLeafList search_order; //type: list of  SearchOrderEnum
        class SearchOrderEnum;

}; // Native::Vpdn


class Native::Vstack : public Entity
{
    public:
        Vstack();
        ~Vstack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf director; //type: string

}; // Native::Vstack

class Native::Switch::ProvisionEnum : public Enum
{
    public:
        static const Enum::YLeaf ws_c2960x_24pd_l;
        static const Enum::YLeaf ws_c3650_48ps;
        static const Enum::YLeaf ws_c3650_24ps;
        static const Enum::YLeaf ws_c3850_48p;
        static const Enum::YLeaf ws_c3850_24p;
        static const Enum::YLeaf ws_c3850_48t;
        static const Enum::YLeaf ws_c3850_24t;
        static const Enum::YLeaf ws_c3850_48f;
        static const Enum::YLeaf ws_c3850_48u;
        static const Enum::YLeaf ws_c3850_24u;
        static const Enum::YLeaf ws_c3850_12x48u;
        static const Enum::YLeaf ws_c3850_24xu;
        static const Enum::YLeaf ws_c3850_24ux;
        static const Enum::YLeaf ws_c3850_12s;
        static const Enum::YLeaf ws_c3850_24s;
        static const Enum::YLeaf ws_c3850_12xs;
        static const Enum::YLeaf ws_c3850_24xs;
        static const Enum::YLeaf ws_c3850_48xs;
        static const Enum::YLeaf ws_c3650_12x48fd;
        static const Enum::YLeaf ws_c3650_12x48uq;
        static const Enum::YLeaf ws_c3650_12x48ur;
        static const Enum::YLeaf ws_c3650_12x48uz;
        static const Enum::YLeaf ws_c3650_24pd;
        static const Enum::YLeaf ws_c3650_24pdm;
        static const Enum::YLeaf ws_c3650_24td;
        static const Enum::YLeaf ws_c3650_24ts;
        static const Enum::YLeaf ws_c3650_48fqm;
        static const Enum::YLeaf ws_c3650_48pd;
        static const Enum::YLeaf ws_c3650_48pq;
        static const Enum::YLeaf ws_c3650_48td;
        static const Enum::YLeaf ws_c3650_48tq;
        static const Enum::YLeaf ws_c3650_48ts;
        static const Enum::YLeaf ws_c3650_8x24pd;
        static const Enum::YLeaf ws_c3650_8x24uq;
        static const Enum::YLeaf ws_c3750x_24p;
        static const Enum::YLeaf ws_c3750x_12s;
        static const Enum::YLeaf ws_c3850_12x48au;
        static const Enum::YLeaf c9300_24p;
        static const Enum::YLeaf c9300_24t;
        static const Enum::YLeaf c9300_24u;
        static const Enum::YLeaf c9300_48p;
        static const Enum::YLeaf c9300_48t;
        static const Enum::YLeaf c9300_48u;

};

class Native::SwitchVirtual::Switch::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf virtual_;

};

class Native::UtdEngine::Utd::Engine::Standard::PolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf balanced;
        static const Enum::YLeaf connectivity;
        static const Enum::YLeaf security;

};

class Native::UtdEngine::Utd::Engine::Standard::ThreatEnum : public Enum
{
    public:
        static const Enum::YLeaf detection;
        static const Enum::YLeaf protection;

};

class Native::Voice::Service::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf pots;
        static const Enum::YLeaf saf;
        static const Enum::YLeaf voatm;
        static const Enum::YLeaf vofr;
        static const Enum::YLeaf voip;

};

class Native::Voice::Service::Fax::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pass_through;
        static const Enum::YLeaf t38;

};

class Native::Voice::Service::Fax::FallbackEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pass_through;

};

class Native::Voice::Service::Fax::CodecEnum : public Enum
{
    public:
        static const Enum::YLeaf g711alaw;
        static const Enum::YLeaf g711ulaw;

};

class Native::Voice::Service::Fax::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_3;

};

class Native::Vpdn::SearchOrderEnum : public Enum
{
    public:
        static const Enum::YLeaf dnis;
        static const Enum::YLeaf domain;
        static const Enum::YLeaf multihop_hostname;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_160_ */

