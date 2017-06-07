#ifndef _CISCO_IOS_XE_NATIVE_25_
#define _CISCO_IOS_XE_NATIVE_25_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_22.hpp"
#include "Cisco_IOS_XE_native_24.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Fastethernet::Service::Instance::Encapsulation::Untagged : public Entity
{
    public:
        Untagged();
        ~Untagged();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Fastethernet::Service::Instance::Encapsulation::Untagged


class Native::Interface::Fastethernet::Service::Instance::Ip : public Entity
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

        class Acl; //type: Native::Interface::Fastethernet::Service::Instance::Ip::Acl
        class Dhcp; //type: Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp
        class Verify; //type: Native::Interface::Fastethernet::Service::Instance::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Ip::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Ip::Verify> verify;
        
}; // Native::Interface::Fastethernet::Service::Instance::Ip


class Native::Interface::Fastethernet::Service::Instance::Ip::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_group; //type: one of uint16, string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::Fastethernet::Service::Instance::Ip::Acl


class Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Relay; //type: Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay> relay;
        
}; // Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp


class Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay


class Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Option; //type: Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay::Information


class Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay::Information::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscriber_id; //type: string

}; // Native::Interface::Fastethernet::Service::Instance::Ip::Dhcp::Relay::Information::Option


class Native::Interface::Fastethernet::Service::Instance::Ip::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: empty
        YLeaf vlan; //type: empty
        YLeaf dhcp_snooping; //type: empty
        YLeaf port_security; //type: empty

}; // Native::Interface::Fastethernet::Service::Instance::Ip::Verify


class Native::Interface::Fastethernet::Service::Instance::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_filter; //type: string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::Fastethernet::Service::Instance::Ipv6


class Native::Interface::Fastethernet::Service::Instance::Rewrite : public Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ingress; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress> ingress;
        
}; // Native::Interface::Fastethernet::Service::Instance::Rewrite


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress : public Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tag; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag> tag;
        
}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pop; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop
        class Push; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push
        class Translate; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop> pop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push> push;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate> translate;
        
}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop : public Entity
{
    public:
        Pop();
        ~Pop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf way; //type: WayEnum
        YLeaf mode; //type: ModeEnum
        class WayEnum;
        class ModeEnum;

}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate : public Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class T1To1; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1
        class T1To2; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2
        class T2To1; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1
        class T2To2; //type: Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1> t1_to_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2> t1_to_2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1> t2_to_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2> t2_to_2;
        
}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1 : public Entity
{
    public:
        T1To1();
        ~T1To1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2 : public Entity
{
    public:
        T1To2();
        ~T1To2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf second_dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1 : public Entity
{
    public:
        T2To1();
        ~T2To1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1


class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2 : public Entity
{
    public:
        T2To2();
        ~T2To2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1q; //type: uint16
        YLeaf second_dot1q; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2


class Native::Interface::Fastethernet::Service::Instance::Errdisable : public Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Recovery; //type: Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery> recovery;
        
}; // Native::Interface::Fastethernet::Service::Instance::Errdisable


class Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery : public Entity
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

        class Cause; //type: Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause> cause;
        
}; // Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery


class Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause : public Entity
{
    public:
        Cause();
        ~Cause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_security; //type: uint32

}; // Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause


class Native::Interface::Fastethernet::Service::Instance::EthernetContainer : public Entity
{
    public:
        EthernetContainer();
        ~EthernetContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ethernet; //type: Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet> ethernet;
        
}; // Native::Interface::Fastethernet::Service::Instance::EthernetContainer


class Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lmi; //type: Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi
        class Loopback; //type: Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi> lmi;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback> loopback;
        
}; // Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet


class Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi : public Entity
{
    public:
        Lmi();
        ~Lmi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CeVlan; //type: Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan> ce_vlan;
        
}; // Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi


class Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan : public Entity
{
    public:
        CeVlan();
        ~CeVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Map; //type: Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map> map;
        
}; // Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan


class Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf default_; //type: empty
        YLeaf untagged; //type: empty
        class VlanRange; //type: Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange> vlan_range;
        
}; // Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map


class Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf comma; //type: uint16
        YLeaf hyphen; //type: uint16

}; // Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange


class Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback : public Entity
{
    public:
        Loopback();
        ~Loopback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Permit; //type: Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit> permit;
        
}; // Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback


class Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit : public Entity
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

        YLeaf external; //type: empty
        YLeaf internal; //type: empty

}; // Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit


class Native::Interface::Fastethernet::Service::Instance::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trap; //type: Native::Interface::Fastethernet::Service::Instance::Snmp::Trap
        class Ifindex; //type: Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Snmp::Trap> trap;
        
}; // Native::Interface::Fastethernet::Service::Instance::Snmp


class Native::Interface::Fastethernet::Service::Instance::Snmp::Trap : public Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_status; //type: empty

}; // Native::Interface::Fastethernet::Service::Instance::Snmp::Trap


class Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex : public Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf persist; //type: empty

}; // Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex


class Native::Interface::Fastethernet::Service::Instance::BridgeDomain : public Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_id; //type: uint16
        YLeaf from_encapsulation; //type: empty
        class SplitHorizon; //type: Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon> split_horizon;
        
}; // Native::Interface::Fastethernet::Service::Instance::BridgeDomain


class Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon : public Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: uint8

}; // Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon


class Native::Interface::Fastethernet::Service::Instance::Mac : public Entity
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

        class Security; //type: Native::Interface::Fastethernet::Service::Instance::Mac::Security

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Mac::Security> security; // presence node
        
}; // Native::Interface::Fastethernet::Service::Instance::Mac


class Native::Interface::Fastethernet::Service::Instance::Mac::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf violation; //type: ViolationEnum
        class Maximum; //type: Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::Fastethernet::Service::Instance::Mac::Security


class Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addresses; //type: uint16

}; // Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum


class Native::Interface::Fastethernet::Service::Instance::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input
        class Output; //type: Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input> > input;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output> > output;
        
}; // Native::Interface::Fastethernet::Service::Instance::ServicePolicy


class Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input


class Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output


class Native::Interface::Fastethernet::Service::Instance::Cfm : public Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encapsulation; //type: Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation
        class Mep; //type: Native::Interface::Fastethernet::Service::Instance::Cfm::Mep
        class Mip; //type: Native::Interface::Fastethernet::Service::Instance::Cfm::Mip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Cfm::Mep> mep;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Cfm::Mip> mip;
        
}; // Native::Interface::Fastethernet::Service::Instance::Cfm


class Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Ad; //type: Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q> dot1q;
        
}; // Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation


class Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad : public Entity
{
    public:
        Dot1Ad();
        ~Dot1Ad();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf cos; //type: uint8
        YLeaf dot1q; //type: uint16

}; // Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad


class Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf cos; //type: uint8
        YLeaf second_dot1q; //type: uint16

}; // Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q


class Native::Interface::Fastethernet::Service::Instance::Cfm::Mep : public Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: string
        YLeaf mpid; //type: uint16

}; // Native::Interface::Fastethernet::Service::Instance::Cfm::Mep


class Native::Interface::Fastethernet::Service::Instance::Cfm::Mip : public Entity
{
    public:
        Mip();
        ~Mip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8

}; // Native::Interface::Fastethernet::Service::Instance::Cfm::Mip


class Native::Interface::Fastethernet::Service::Instance::L2Protocol : public Entity
{
    public:
        L2Protocol();
        ~L2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer
        class Forward; //type: Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward
        class Tunnel; //type: Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward> forward; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer> peer; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel> tunnel; // presence node
        
}; // Native::Interface::Fastethernet::Service::Instance::L2Protocol


class Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList protocol; //type: list of  ProtocolEnum
        class ProtocolEnum;

}; // Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer


class Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward : public Entity
{
    public:
        Forward();
        ~Forward();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList protocol; //type: list of  ProtocolEnum
        class ProtocolEnum;

}; // Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward


class Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList protocol; //type: list of  ProtocolEnum
        class ProtocolEnum;

}; // Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel


class Native::Interface::Fastethernet::Service::Instance::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf manual; //type: empty
        YLeaf pw_class; //type: string
        YLeaf sequencing; //type: SequencingEnum
        YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::Fastethernet::Service::Instance::Xconnect


class Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup


class Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_router_ip_addr; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        YLeaf priority; //type: uint8

}; // Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer


class Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay


class Native::Interface::Fastethernet::Service::Instance::XconnectPwClass : public Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xconnect; //type: Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::Fastethernet::Service::Instance::XconnectPwClass


class Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect


class Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp


class Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: uint32
        YLeaf remote; //type: uint32

}; // Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::Fastethernet::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf manual; //type: empty
        YLeaf sequence; //type: SequenceEnum
        YLeaf pw_class; //type: string
        class EncapsulationEnum;
        class SequenceEnum;

}; // Native::Interface::Fastethernet::Xconnect


class Native::Interface::Fastethernet::Cdp : public Entity
{
    public:
        Cdp();
        ~Cdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        class Tlv; //type: Native::Interface::Fastethernet::Cdp::Tlv

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cdp::Tlv> tlv;
        
}; // Native::Interface::Fastethernet::Cdp


class Native::Interface::Fastethernet::Cdp::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_location; //type: empty
        YLeaf location; //type: empty
        class App; //type: Native::Interface::Fastethernet::Cdp::Tlv::App

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cdp::Tlv::App> app; // presence node
        
}; // Native::Interface::Fastethernet::Cdp::Tlv


class Native::Interface::Fastethernet::Cdp::Tlv::App : public Entity
{
    public:
        App();
        ~App();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tlvtype; //type: uint16
        YLeaf value_; //type: string

}; // Native::Interface::Fastethernet::Cdp::Tlv::App


class Native::Interface::Fastethernet::Crypto : public Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Map; //type: Native::Interface::Fastethernet::Crypto::Map
        class Ipsec; //type: Native::Interface::Fastethernet::Crypto::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Crypto::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Crypto::Map> map;
        
}; // Native::Interface::Fastethernet::Crypto


class Native::Interface::Fastethernet::Crypto::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string
        YLeaf redundancy; //type: string
        YLeaf stateful; //type: empty

}; // Native::Interface::Fastethernet::Crypto::Map


class Native::Interface::Fastethernet::Crypto::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf df_bit; //type: DfBitEnum
        YLeaf fragmentation; //type: FragmentationEnum
        class DfBitEnum;
        class FragmentationEnum;

}; // Native::Interface::Fastethernet::Crypto::Ipsec


class Native::Interface::Fastethernet::Cts : public Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Manual; //type: Native::Interface::Fastethernet::Cts::Manual

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual> manual; // presence node
        
}; // Native::Interface::Fastethernet::Cts


class Native::Interface::Fastethernet::Cts::Manual : public Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::Interface::Fastethernet::Cts::Manual::Policy
        class Sap; //type: Native::Interface::Fastethernet::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::Fastethernet::Cts::Manual::Propagate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Propagate> propagate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Sap> sap;
        
}; // Native::Interface::Fastethernet::Cts::Manual


class Native::Interface::Fastethernet::Cts::Manual::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Static_; //type: Native::Interface::Fastethernet::Cts::Manual::Policy::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Policy::Static_> static_;
        
}; // Native::Interface::Fastethernet::Cts::Manual::Policy


class Native::Interface::Fastethernet::Cts::Manual::Policy::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: uint16
        YLeaf trusted; //type: empty

}; // Native::Interface::Fastethernet::Cts::Manual::Policy::Static_


class Native::Interface::Fastethernet::Cts::Manual::Sap : public Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pmk; //type: Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::Fastethernet::Cts::Manual::Sap


class Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk : public Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        class ModeList; //type: Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk


class Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList : public Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GcmEncrypt; //type: Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gmac; //type: Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf null; //type: empty

}; // Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gmac; //type: Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::Fastethernet::Cts::Manual::Propagate : public Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: boolean

}; // Native::Interface::Fastethernet::Cts::Manual::Propagate


class Native::Interface::Fastethernet::Dot1X : public Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf credentials; //type: string
        YLeaf max_reauth_req; //type: uint8
        YLeaf max_req; //type: uint8
        YLeaf max_start; //type: uint8
        YLeaf pae; //type: PaeEnum
        class Authenticator; //type: Native::Interface::Fastethernet::Dot1X::Authenticator
        class Supplicant; //type: Native::Interface::Fastethernet::Dot1X::Supplicant
        class Timeout; //type: Native::Interface::Fastethernet::Dot1X::Timeout

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Dot1X::Authenticator> authenticator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Dot1X::Supplicant> supplicant;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Dot1X::Timeout> timeout;
                class PaeEnum;

}; // Native::Interface::Fastethernet::Dot1X


class Native::Interface::Fastethernet::Dot1X::Authenticator : public Entity
{
    public:
        Authenticator();
        ~Authenticator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eap; //type: Native::Interface::Fastethernet::Dot1X::Authenticator::Eap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Dot1X::Authenticator::Eap> eap;
        
}; // Native::Interface::Fastethernet::Dot1X::Authenticator


class Native::Interface::Fastethernet::Dot1X::Authenticator::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Native::Interface::Fastethernet::Dot1X::Authenticator::Eap


class Native::Interface::Fastethernet::Dot1X::Supplicant : public Entity
{
    public:
        Supplicant();
        ~Supplicant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eap; //type: Native::Interface::Fastethernet::Dot1X::Supplicant::Eap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Dot1X::Supplicant::Eap> eap;
        
}; // Native::Interface::Fastethernet::Dot1X::Supplicant


class Native::Interface::Fastethernet::Dot1X::Supplicant::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Native::Interface::Fastethernet::Dot1X::Supplicant::Eap


class Native::Interface::Fastethernet::Dot1X::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_period; //type: uint16
        YLeaf held_period; //type: uint16
        YLeaf quiet_period; //type: uint16
        YLeaf ratelimit_period; //type: uint16
        YLeaf server_timeout; //type: uint16
        YLeaf start_period; //type: uint16
        YLeaf supp_timeout; //type: uint16
        YLeaf tx_period; //type: uint16

}; // Native::Interface::Fastethernet::Dot1X::Timeout


class Native::Interface::Fastethernet::Performance : public Entity
{
    public:
        Performance();
        ~Performance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Monitor; //type: Native::Interface::Fastethernet::Performance::Monitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Performance::Monitor> monitor;
        
}; // Native::Interface::Fastethernet::Performance


class Native::Interface::Fastethernet::Performance::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList context; //type: list of  string

}; // Native::Interface::Fastethernet::Performance::Monitor


class Native::Interface::Fastethernet::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf history; //type: empty
        YLeaf input; //type: string
        YLeaf output; //type: string
        class Type; //type: Native::Interface::Fastethernet::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ServicePolicy::Type> type;
        
}; // Native::Interface::Fastethernet::ServicePolicy


class Native::Interface::Fastethernet::ServicePolicy::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Control; //type: Native::Interface::Fastethernet::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ServicePolicy::Type::Control> control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::Fastethernet::ServicePolicy::Type


class Native::Interface::Fastethernet::ServicePolicy::Type::Control : public Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscriber; //type: string

}; // Native::Interface::Fastethernet::ServicePolicy::Type::Control


class Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor : public Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf name; //type: string
        class DirectionEnum;

}; // Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain : public Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain


class Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::Fastethernet::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ifindex; //type: Native::Interface::Fastethernet::Snmp::Ifindex
        class Trap; //type: Native::Interface::Fastethernet::Snmp::Trap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Snmp::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Snmp::Trap> trap;
        
}; // Native::Interface::Fastethernet::Snmp


class Native::Interface::Fastethernet::Snmp::Ifindex : public Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf persist; //type: empty
        YLeaf clear; //type: boolean

}; // Native::Interface::Fastethernet::Snmp::Ifindex


class Native::Interface::Fastethernet::Snmp::Trap : public Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_status; //type: boolean
        class LinkStatusCapas; //type: Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas> link_status_capas;
        
}; // Native::Interface::Fastethernet::Snmp::Trap


class Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas : public Entity
{
    public:
        LinkStatusCapas();
        ~LinkStatusCapas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkStatus; //type: Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus> link_status;
        
}; // Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas


class Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus : public Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Permit; //type: Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit> permit;
        
}; // Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus


class Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit : public Entity
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

        YLeaf duplicates; //type: empty

}; // Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit


class Native::Interface::Fastethernet::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_subnet_mode; //type: empty
        class Mobility; //type: Native::Interface::Fastethernet::Lisp::Mobility

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Lisp::Mobility> mobility;
        
}; // Native::Interface::Fastethernet::Lisp


class Native::Interface::Fastethernet::Lisp::Mobility : public Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DynamicEid; //type: Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid
        class Discover; //type: Native::Interface::Fastethernet::Lisp::Mobility::Discover
        class Liveness; //type: Native::Interface::Fastethernet::Lisp::Mobility::Liveness

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Lisp::Mobility::Discover> discover;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid> dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Lisp::Mobility::Liveness> liveness;
        
}; // Native::Interface::Fastethernet::Lisp::Mobility


class Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid : public Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic_eid_name; //type: string
        YLeaf nbr_proxy_reply; //type: empty
        YLeaf requests; //type: uint8

}; // Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid


class Native::Interface::Fastethernet::Lisp::Mobility::Discover : public Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf arp; //type: boolean

}; // Native::Interface::Fastethernet::Lisp::Mobility::Discover


class Native::Interface::Fastethernet::Lisp::Mobility::Liveness : public Entity
{
    public:
        Liveness();
        ~Liveness();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test; //type: boolean
        YLeaf ttl; //type: uint8

}; // Native::Interface::Fastethernet::Lisp::Mobility::Liveness


class Native::Interface::Fastethernet::Mka : public Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PreSharedKey; //type: Native::Interface::Fastethernet::Mka::PreSharedKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mka::PreSharedKey> pre_shared_key;
        
}; // Native::Interface::Fastethernet::Mka


class Native::Interface::Fastethernet::Mka::PreSharedKey : public Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyChain; //type: Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain> key_chain;
        
}; // Native::Interface::Fastethernet::Mka::PreSharedKey


class Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain


class Native::Interface::Fastethernet::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dead_interval; //type: uint16
        YLeaf flood_reduction; //type: empty
        YLeaf hello_interval; //type: uint32
        YLeaf mtu_ignore; //type: empty
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf shutdown; //type: empty
        YLeaf transmit_delay; //type: uint32
        class ProcessId; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId
        class Authentication; //type: Native::Interface::Fastethernet::Ospfv3::Authentication
        class Bfd; //type: Native::Interface::Fastethernet::Ospfv3::Bfd
        class Cost; //type: Native::Interface::Fastethernet::Ospfv3::Cost
        class DatabaseFilter; //type: Native::Interface::Fastethernet::Ospfv3::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Fastethernet::Ospfv3::DemandCircuit
        class Encryption; //type: Native::Interface::Fastethernet::Ospfv3::Encryption
        class Manet; //type: Native::Interface::Fastethernet::Ospfv3::Manet
        class MultiArea; //type: Native::Interface::Fastethernet::Ospfv3::MultiArea
        class Neighbor; //type: Native::Interface::Fastethernet::Ospfv3::Neighbor
        class Network; //type: Native::Interface::Fastethernet::Ospfv3::Network
        class PrefixSuppression; //type: Native::Interface::Fastethernet::Ospfv3::PrefixSuppression

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::PrefixSuppression> prefix_suppression; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId> > process_id;
        
}; // Native::Interface::Fastethernet::Ospfv3


class Native::Interface::Fastethernet::Ospfv3::ProcessId : public Entity
{
    public:
        ProcessId();
        ~ProcessId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf dead_interval; //type: uint16
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication
        class Bfd; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd
        class Cost; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost
        class DatabaseFilter; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit
        class FloodReduction; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction
        class Manet; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet
        class MtuIgnore; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore
        class MultiArea; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea
        class Neighbor; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor
        class Network; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Network
        class PrefixSuppression; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression
        class Shutdown; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown
        class Ipv4; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4
        class Ipv6; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        YLeaf null; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis : public Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Factor; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor : public Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency : public Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput : public Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput


class Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        YLeaf disable; //type: empty
        class AllEnum;

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter


class Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit : public Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit


class Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction : public Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peering; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering> peering;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost


class Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore : public Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore


class Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf cost; //type: uint32
        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf manet; //type: empty
        YLeaf non_broadcast; //type: empty
        YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Network


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint : public Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_broadcast; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint


class Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression : public Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown : public Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dead_interval; //type: uint16
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area
        class Authentication; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication
        class Bfd; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd
        class Cost; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost
        class DatabaseFilter; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit
        class FloodReduction; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction
        class Manet; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet
        class MtuIgnore; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore
        class MultiArea; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea
        class Neighbor; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor
        class Network; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network
        class PrefixSuppression; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression
        class Shutdown; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Shutdown

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf instance; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        YLeaf null; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis : public Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Factor; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor : public Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency : public Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput : public Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        YLeaf disable; //type: empty
        class AllEnum;

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit : public Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction : public Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peering; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering> peering;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering

class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::WayEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::Fastethernet::Service::Instance::Mac::Security::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;

};

class Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf R4;
        static const Enum::YLeaf R5;
        static const Enum::YLeaf R6;
        static const Enum::YLeaf R8;
        static const Enum::YLeaf R9;
        static const Enum::YLeaf RA;
        static const Enum::YLeaf RB;
        static const Enum::YLeaf RC;
        static const Enum::YLeaf RD;
        static const Enum::YLeaf RF;
        static const Enum::YLeaf cdp;
        static const Enum::YLeaf dtp;
        static const Enum::YLeaf elmi;
        static const Enum::YLeaf esmc;
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf lldp;
        static const Enum::YLeaf loam;
        static const Enum::YLeaf pagp;
        static const Enum::YLeaf ptppd;
        static const Enum::YLeaf stp;
        static const Enum::YLeaf udld;
        static const Enum::YLeaf vtp;

};

class Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf R4;
        static const Enum::YLeaf R5;
        static const Enum::YLeaf R6;
        static const Enum::YLeaf R8;
        static const Enum::YLeaf R9;
        static const Enum::YLeaf RA;
        static const Enum::YLeaf RB;
        static const Enum::YLeaf RC;
        static const Enum::YLeaf RD;
        static const Enum::YLeaf RF;
        static const Enum::YLeaf cdp;
        static const Enum::YLeaf dtp;
        static const Enum::YLeaf elmi;
        static const Enum::YLeaf esmc;
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf lldp;
        static const Enum::YLeaf loam;
        static const Enum::YLeaf pagp;
        static const Enum::YLeaf ptppd;
        static const Enum::YLeaf stp;
        static const Enum::YLeaf udld;
        static const Enum::YLeaf vtp;

};

class Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf R4;
        static const Enum::YLeaf R5;
        static const Enum::YLeaf R6;
        static const Enum::YLeaf R8;
        static const Enum::YLeaf R9;
        static const Enum::YLeaf RA;
        static const Enum::YLeaf RB;
        static const Enum::YLeaf RC;
        static const Enum::YLeaf RD;
        static const Enum::YLeaf RF;
        static const Enum::YLeaf cdp;
        static const Enum::YLeaf dtp;
        static const Enum::YLeaf elmi;
        static const Enum::YLeaf esmc;
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf lldp;
        static const Enum::YLeaf loam;
        static const Enum::YLeaf pagp;
        static const Enum::YLeaf ptppd;
        static const Enum::YLeaf stp;
        static const Enum::YLeaf udld;
        static const Enum::YLeaf vtp;

};

class Native::Interface::Fastethernet::Service::Instance::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::Fastethernet::Service::Instance::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::Fastethernet::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::Fastethernet::Xconnect::SequenceEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::Fastethernet::Crypto::Ipsec::DfBitEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf copy;
        static const Enum::YLeaf set;

};

class Native::Interface::Fastethernet::Crypto::Ipsec::FragmentationEnum : public Enum
{
    public:
        static const Enum::YLeaf after_encryption;
        static const Enum::YLeaf before_encryption;

};

class Native::Interface::Fastethernet::Dot1X::PaeEnum : public Enum
{
    public:
        static const Enum::YLeaf authenticator;
        static const Enum::YLeaf supplicant;
        static const Enum::YLeaf both;

};

class Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_25_ */

