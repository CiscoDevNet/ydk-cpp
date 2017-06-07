#ifndef _CISCO_IOS_XE_NATIVE_159_
#define _CISCO_IOS_XE_NATIVE_159_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_157.hpp"
#include "Cisco_IOS_XE_native_158.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Arp::AccessList::Default_::Deny::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Ip::Any
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip


class Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress


class Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Ip::Any : public Entity
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

        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::Any


class Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac


class Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_ : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host


class Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::Host


class Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress


class Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_ : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip> ip;
        
}; // Native::Arp::AccessList::Default_::Deny::Request


class Native::Arp::AccessList::Default_::Deny::Request::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip


class Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress


class Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Any : public Entity
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

        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Any


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_ : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Host


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_ : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Response : public Entity
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

        class Ip; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip> ip;
        
}; // Native::Arp::AccessList::Default_::Deny::Response


class Native::Arp::AccessList::Default_::Deny::Response::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Any
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip


class Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress


class Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Any : public Entity
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

        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Any


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_ : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Host


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_ : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No : public Entity
{
    public:
        No();
        ~No();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Permit; //type: Native::Arp::AccessList::No::Permit
        class Deny; //type: Native::Arp::AccessList::No::Deny

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit> permit;
        
}; // Native::Arp::AccessList::No


class Native::Arp::AccessList::No::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Arp::AccessList::No::Permit::Ip
        class Request; //type: Native::Arp::AccessList::No::Permit::Request
        class Response; //type: Native::Arp::AccessList::No::Permit::Response

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request> request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response> response;
        
}; // Native::Arp::AccessList::No::Permit


class Native::Arp::AccessList::No::Permit::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::Any : public Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Any


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_ : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Host


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_ : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Arp::AccessList::No::Permit::Request::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip> ip;
        
}; // Native::Arp::AccessList::No::Permit::Request


class Native::Arp::AccessList::No::Permit::Request::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Any : public Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_ : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_ : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response : public Entity
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

        class Ip; //type: Native::Arp::AccessList::No::Permit::Response::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip> ip;
        
}; // Native::Arp::AccessList::No::Permit::Response


class Native::Arp::AccessList::No::Permit::Response::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Any : public Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_ : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_ : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Arp::AccessList::No::Deny::Ip
        class Request; //type: Native::Arp::AccessList::No::Deny::Request
        class Response; //type: Native::Arp::AccessList::No::Deny::Response

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request> request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Response> response;
        
}; // Native::Arp::AccessList::No::Deny


class Native::Arp::AccessList::No::Deny::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::Any : public Entity
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

        class Mac; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Any


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_ : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host


class Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Host


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_ : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
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

}; // Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::No::Deny::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Arp::AccessList::No::Deny::Request::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip> ip;
        
}; // Native::Arp::AccessList::No::Deny::Request


class Native::Arp::AccessList::No::Deny::Request::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::No::Deny::Request::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip


class Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress : public Entity
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
        class Mac; //type: Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress


}
}

#endif /* _CISCO_IOS_XE_NATIVE_159_ */

