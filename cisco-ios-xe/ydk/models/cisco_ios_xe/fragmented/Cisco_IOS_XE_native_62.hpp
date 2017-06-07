#ifndef _CISCO_IOS_XE_NATIVE_62_
#define _CISCO_IOS_XE_NATIVE_62_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_60.hpp"
#include "Cisco_IOS_XE_native_61.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Tunnel::Ipv6::Nd : public Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf managed_config_flag; //type: empty
        class Raguard; //type: Native::Interface::Tunnel::Ipv6::Nd::Raguard
        class Autoconfig; //type: Native::Interface::Tunnel::Ipv6::Nd::Autoconfig
        class Ra; //type: Native::Interface::Tunnel::Ipv6::Nd::Ra

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Nd::Autoconfig> autoconfig;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Nd::Ra> ra;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Nd::Raguard> raguard;
        
}; // Native::Interface::Tunnel::Ipv6::Nd


class Native::Interface::Tunnel::Ipv6::Nd::Raguard : public Entity
{
    public:
        Raguard();
        ~Raguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Tunnel::Ipv6::Nd::Raguard


class Native::Interface::Tunnel::Ipv6::Nd::Autoconfig : public Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_route; //type: empty
        YLeaf prefix; //type: empty

}; // Native::Interface::Tunnel::Ipv6::Nd::Autoconfig


class Native::Interface::Tunnel::Ipv6::Nd::Ra : public Entity
{
    public:
        Ra();
        ~Ra();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Suppress; //type: Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress> suppress; // presence node
        
}; // Native::Interface::Tunnel::Ipv6::Nd::Ra


class Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress : public Entity
{
    public:
        Suppress();
        ~Suppress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress


class Native::Interface::Tunnel::Ipv6::TrafficFilter : public Entity
{
    public:
        TrafficFilter();
        ~TrafficFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf access_list; //type: string
        class DirectionEnum;

}; // Native::Interface::Tunnel::Ipv6::TrafficFilter


class Native::Interface::Tunnel::Ipv6::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ingress; //type: empty
        YLeaf egress; //type: empty
        class Monitor; //type: Native::Interface::Tunnel::Ipv6::Flow::Monitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Flow::Monitor> > monitor;
        
}; // Native::Interface::Tunnel::Ipv6::Flow


class Native::Interface::Tunnel::Ipv6::Flow::Monitor : public Entity
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

        YLeaf name; //type: string
        YLeaf input; //type: empty
        YLeaf output; //type: empty
        YLeaf multicast; //type: empty
        YLeaf unicast; //type: empty
        class Sampler; //type: Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler> > sampler;
        
}; // Native::Interface::Tunnel::Ipv6::Flow::Monitor


class Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler : public Entity
{
    public:
        Sampler();
        ~Sampler();

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

}; // Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler


class Native::Interface::Tunnel::Ipv6::NoPim : public Entity
{
    public:
        NoPim();
        ~NoPim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pim; //type: boolean

}; // Native::Interface::Tunnel::Ipv6::NoPim


class Native::Interface::Tunnel::Ipv6::Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd; //type: empty
        YLeaf dr_priority; //type: uint32
        class Bsr; //type: Native::Interface::Tunnel::Ipv6::Pim::Bsr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Pim::Bsr> bsr;
        
}; // Native::Interface::Tunnel::Ipv6::Pim


class Native::Interface::Tunnel::Ipv6::Pim::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf border; //type: empty

}; // Native::Interface::Tunnel::Ipv6::Pim::Bsr


class Native::Interface::Tunnel::Ipv6::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cost; //type: uint16
        YLeaf dead_interval; //type: uint16
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        class Process; //type: Native::Interface::Tunnel::Ipv6::Ospf::Process
        class Authentication; //type: Native::Interface::Tunnel::Ipv6::Ospf::Authentication
        class Bfd; //type: Native::Interface::Tunnel::Ipv6::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::Tunnel::Ipv6::Ospf::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Tunnel::Ipv6::Ospf::DemandCircuit
        class Encryption; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption
        class FloodReduction; //type: Native::Interface::Tunnel::Ipv6::Ospf::FloodReduction
        class MtuIgnore; //type: Native::Interface::Tunnel::Ipv6::Ospf::MtuIgnore
        class Neighbor; //type: Native::Interface::Tunnel::Ipv6::Ospf::Neighbor
        class Network; //type: Native::Interface::Tunnel::Ipv6::Ospf::Network
        class Shutdown; //type: Native::Interface::Tunnel::Ipv6::Ospf::Shutdown

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::MtuIgnore> mtu_ignore; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Network> network;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Process> > process;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Tunnel::Ipv6::Ospf


class Native::Interface::Tunnel::Ipv6::Ospf::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf area; //type: one of uint32, string
        YLeaf instance; //type: uint8

}; // Native::Interface::Tunnel::Ipv6::Ospf::Process


class Native::Interface::Tunnel::Ipv6::Ospf::Authentication : public Entity
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

        YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Authentication


class Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec : public Entity
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

        YLeaf spi; //type: uint64
        class Md5; //type: Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec


class Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5


class Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString


class Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1 : public Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1


class Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::Tunnel::Ipv6::Ospf::Bfd : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Ospf::Bfd


class Native::Interface::Tunnel::Ipv6::Ospf::DatabaseFilter : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Ospf::DatabaseFilter


class Native::Interface::Tunnel::Ipv6::Ospf::DemandCircuit : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Ospf::DemandCircuit


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec : public Entity
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

        YLeaf spi; //type: uint64
        YLeaf esp; //type: empty
        class Ipsec_3Des; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des
        class AesCbc; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc> aes_cbc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des> ipsec_3des;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des : public Entity
{
    public:
        Ipsec_3Des();
        ~Ipsec_3Des();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc : public Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AesCbc128; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128 : public Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192 : public Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256 : public Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::Tunnel::Ipv6::Ospf::FloodReduction : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Ospf::FloodReduction


class Native::Interface::Tunnel::Ipv6::Ospf::MtuIgnore : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Ospf::MtuIgnore


class Native::Interface::Tunnel::Ipv6::Ospf::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::Tunnel::Ipv6::Ospf::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Neighbor


class Native::Interface::Tunnel::Ipv6::Ospf::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Ospf::Neighbor::DatabaseFilter


class Native::Interface::Tunnel::Ipv6::Ospf::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::Tunnel::Ipv6::Ospf::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Tunnel::Ipv6::Ospf::Network


class Native::Interface::Tunnel::Ipv6::Ospf::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Ospf::Network::PointToMultipoint


class Native::Interface::Tunnel::Ipv6::Ospf::Shutdown : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Ospf::Shutdown


class Native::Interface::Tunnel::Ipv6::Rip : public Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf enable; //type: empty
        class DefaultInformation; //type: Native::Interface::Tunnel::Ipv6::Rip::DefaultInformation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Rip::DefaultInformation> default_information;
        
}; // Native::Interface::Tunnel::Ipv6::Rip


class Native::Interface::Tunnel::Ipv6::Rip::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route; //type: RouteEnum
        YLeaf metric; //type: uint8
        class RouteEnum;

}; // Native::Interface::Tunnel::Ipv6::Rip::DefaultInformation


class Native::Interface::Tunnel::Logging : public Entity
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

        class Event; //type: Native::Interface::Tunnel::Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Logging::Event> event;
        
}; // Native::Interface::Tunnel::Logging


class Native::Interface::Tunnel::Logging::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: empty
        YLeaf link_status; //type: empty
        YLeaf trunk_status; //type: empty
        YLeaf nfas_status; //type: empty
        YLeaf power_inline_status; //type: empty
        YLeaf status; //type: empty
        class SpanningTree; //type: Native::Interface::Tunnel::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::Tunnel::Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::Tunnel::Logging::Event


class Native::Interface::Tunnel::Logging::Event::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: empty

}; // Native::Interface::Tunnel::Logging::Event::SpanningTree


class Native::Interface::Tunnel::Logging::Event::SubifLinkStatus : public Entity
{
    public:
        SubifLinkStatus();
        ~SubifLinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore_bulk; //type: empty

}; // Native::Interface::Tunnel::Logging::Event::SubifLinkStatus


class Native::Interface::Tunnel::Mdix : public Entity
{
    public:
        Mdix();
        ~Mdix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: boolean

}; // Native::Interface::Tunnel::Mdix


class Native::Interface::Tunnel::Mop : public Entity
{
    public:
        Mop();
        ~Mop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Native::Interface::Tunnel::Mop


class Native::Interface::Tunnel::Interface_Qos : public Entity
{
    public:
        Interface_Qos();
        ~Interface_Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trust; //type: Native::Interface::Tunnel::Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Interface_Qos::Trust> trust;
        
}; // Native::Interface::Tunnel::Interface_Qos


class Native::Interface::Tunnel::Interface_Qos::Trust : public Entity
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

        YLeaf device; //type: DeviceEnum
        class DeviceEnum;

}; // Native::Interface::Tunnel::Interface_Qos::Trust


class Native::Interface::Tunnel::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: VersionEnum
        YLeaf bfd; //type: empty
        YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::Tunnel::Standby::Delay
        class UseBia; //type: Native::Interface::Tunnel::Standby::UseBia
        class StandbyList; //type: Native::Interface::Tunnel::Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::Tunnel::Standby


class Native::Interface::Tunnel::Standby::Delay : public Entity
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

        YLeaf minimum; //type: uint16
        YLeaf reload; //type: uint16

}; // Native::Interface::Tunnel::Standby::Delay


class Native::Interface::Tunnel::Standby::UseBia : public Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Scope; //type: Native::Interface::Tunnel::Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::Tunnel::Standby::UseBia


class Native::Interface::Tunnel::Standby::UseBia::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty

}; // Native::Interface::Tunnel::Standby::UseBia::Scope


class Native::Interface::Tunnel::Standby::StandbyList : public Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_number; //type: uint16
        YLeaf follow; //type: string
        YLeaf ipv6; //type: one of string, enumeration
        YLeaf mac_address; //type: string
        YLeaf name; //type: string
        YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::Tunnel::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::Tunnel::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::Tunnel::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::Tunnel::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::Tunnel::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::Tunnel::Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::Tunnel::Standby::StandbyList


class Native::Interface::Tunnel::Standby::StandbyList::Authentication : public Entity
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

        YLeaf word; //type: string
        YLeaf text; //type: string
        class Md5; //type: Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Tunnel::Standby::StandbyList::Authentication


class Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5


class Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        YLeaf timeout; //type: uint16
        class EncryptEnum;

}; // Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::Tunnel::Standby::StandbyList::Ip : public Entity
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
        YLeaf secondary; //type: empty

}; // Native::Interface::Tunnel::Standby::StandbyList::Ip


class Native::Interface::Tunnel::Standby::StandbyList::Preempt : public Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::Tunnel::Standby::StandbyList::Preempt


class Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay : public Entity
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

        YLeaf minimum; //type: uint16
        YLeaf reload; //type: uint16
        YLeaf sync; //type: uint16

}; // Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay


class Native::Interface::Tunnel::Standby::StandbyList::Redirect : public Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::Tunnel::Standby::StandbyList::Redirect


class Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement : public Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authentication; //type: Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        YLeaf timeout; //type: uint16
        class EncryptEnum;

}; // Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf advertisement; //type: uint16
        YLeaf holddown; //type: uint16

}; // Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers


class Native::Interface::Tunnel::Standby::StandbyList::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelloInterval; //type: Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Tunnel::Standby::StandbyList::Timers


class Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime


class Native::Interface::Tunnel::Standby::StandbyList::Track : public Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf decrement; //type: uint8
        YLeaf shutdown; //type: empty

}; // Native::Interface::Tunnel::Standby::StandbyList::Track


class Native::Interface::Tunnel::AccessSession : public Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf closed; //type: empty
        YLeaf host_mode; //type: HostModeEnum
        class PortControl; //type: Native::Interface::Tunnel::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::Tunnel::AccessSession


class Native::Interface::Tunnel::AccessSession::PortControl : public Entity
{
    public:
        PortControl();
        ~PortControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: empty

}; // Native::Interface::Tunnel::AccessSession::PortControl


class Native::Interface::Tunnel::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Tunnel::StormControl::Action
        class Broadcast; //type: Native::Interface::Tunnel::StormControl::Broadcast
        class Multicast; //type: Native::Interface::Tunnel::StormControl::Multicast
        class Unicast; //type: Native::Interface::Tunnel::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Unicast> unicast;
        
}; // Native::Interface::Tunnel::StormControl


class Native::Interface::Tunnel::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: decimal64
        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Interface::Tunnel::StormControl::Action


class Native::Interface::Tunnel::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Include; //type: Native::Interface::Tunnel::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::Tunnel::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::Tunnel::StormControl::Broadcast


class Native::Interface::Tunnel::StormControl::Broadcast::Include : public Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast; //type: empty

}; // Native::Interface::Tunnel::StormControl::Broadcast::Include


class Native::Interface::Tunnel::StormControl::Broadcast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Tunnel::StormControl::Broadcast::Level


class Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps


class Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps


class Native::Interface::Tunnel::StormControl::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Interface::Tunnel::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Multicast::Level> level;
        
}; // Native::Interface::Tunnel::StormControl::Multicast


class Native::Interface::Tunnel::StormControl::Multicast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Tunnel::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Tunnel::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Tunnel::StormControl::Multicast::Level


class Native::Interface::Tunnel::StormControl::Multicast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Tunnel::StormControl::Multicast::Level::Bps


class Native::Interface::Tunnel::StormControl::Multicast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Tunnel::StormControl::Multicast::Level::Pps


class Native::Interface::Tunnel::StormControl::Unicast : public Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Interface::Tunnel::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Unicast::Level> level;
        
}; // Native::Interface::Tunnel::StormControl::Unicast


class Native::Interface::Tunnel::StormControl::Unicast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threshold; //type: Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Tunnel::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Tunnel::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Tunnel::StormControl::Unicast::Level


class Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: decimal64
        YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold


class Native::Interface::Tunnel::StormControl::Unicast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Tunnel::StormControl::Unicast::Level::Bps


class Native::Interface::Tunnel::StormControl::Unicast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rising_threshold; //type: string
        YLeaf falling_threshold; //type: string

}; // Native::Interface::Tunnel::StormControl::Unicast::Level::Pps


class Native::Interface::Tunnel::Trust : public Entity
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

        YLeaf device; //type: DeviceEnum
        class DeviceEnum;

}; // Native::Interface::Tunnel::Trust


class Native::Interface::Tunnel::Utd : public Entity
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

        YLeaf enable; //type: empty

}; // Native::Interface::Tunnel::Utd


class Native::Interface::Tunnel::PriorityQueue : public Entity
{
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::Tunnel::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Tunnel::PriorityQueue


class Native::Interface::Tunnel::PriorityQueue::CosMap : public Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Tunnel::PriorityQueue::CosMap


class Native::Interface::Tunnel::RcvQueue : public Entity
{
    public:
        RcvQueue();
        ~RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CosMap; //type: Native::Interface::Tunnel::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::Tunnel::RcvQueue


class Native::Interface::Tunnel::RcvQueue::CosMap : public Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint8
        YLeaf threshold_id; //type: uint8
        YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Tunnel::RcvQueue::CosMap


class Native::Interface::Tunnel::Peer : public Entity
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

        class Default_; //type: Native::Interface::Tunnel::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Peer::Default_> default_;
        
}; // Native::Interface::Tunnel::Peer


class Native::Interface::Tunnel::Peer::Default_ : public Entity
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

        class Ip; //type: Native::Interface::Tunnel::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Peer::Default_::Ip> ip;
        
}; // Native::Interface::Tunnel::Peer::Default_


class Native::Interface::Tunnel::Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::Tunnel::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::Tunnel::Peer::Default_::Ip


class Native::Interface::Tunnel::Peer::Default_::Ip::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::Tunnel::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Tunnel::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Tunnel::Peer::Default_::Ip::Address


class Native::Interface::Tunnel::Peer::Default_::Ip::Address::DhcpPool : public Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pools; //type: string

}; // Native::Interface::Tunnel::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::Tunnel::Peer::Default_::Ip::Address::Pool : public Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pools; //type: string

}; // Native::Interface::Tunnel::Peer::Default_::Ip::Address::Pool


class Native::Interface::Tunnel::PmPath : public Entity
{
    public:
        PmPath();
        ~PmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf interface_id; //type: uint8

}; // Native::Interface::Tunnel::PmPath


class Native::Interface::Tunnel::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Interface::Tunnel::Qos


class Native::Interface::Tunnel::Cdp : public Entity
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
        class Tlv; //type: Native::Interface::Tunnel::Cdp::Tlv

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Cdp::Tlv> tlv;
        
}; // Native::Interface::Tunnel::Cdp


class Native::Interface::Tunnel::Cdp::Tlv : public Entity
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
        class App; //type: Native::Interface::Tunnel::Cdp::Tlv::App

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Cdp::Tlv::App> app; // presence node
        
}; // Native::Interface::Tunnel::Cdp::Tlv


class Native::Interface::Tunnel::Cdp::Tlv::App : public Entity
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

}; // Native::Interface::Tunnel::Cdp::Tlv::App


class Native::Interface::Tunnel::Nhrp : public Entity
{
    public:
        Nhrp();
        ~Nhrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: string
        YLeaf route_watch; //type: boolean
        class EventPublisher; //type: Native::Interface::Tunnel::Nhrp::EventPublisher
        class Map; //type: Native::Interface::Tunnel::Nhrp::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Nhrp::EventPublisher> event_publisher;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Nhrp::Map> map;
        
}; // Native::Interface::Tunnel::Nhrp


class Native::Interface::Tunnel::Nhrp::EventPublisher : public Entity
{
    public:
        EventPublisher();
        ~EventPublisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_event_timeout; //type: uint8

}; // Native::Interface::Tunnel::Nhrp::EventPublisher


class Native::Interface::Tunnel::Nhrp::Map : public Entity
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

        class Group; //type: Native::Interface::Tunnel::Nhrp::Map::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Nhrp::Map::Group> group;
        
}; // Native::Interface::Tunnel::Nhrp::Map


class Native::Interface::Tunnel::Nhrp::Map::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NhrpName; //type: Native::Interface::Tunnel::Nhrp::Map::Group::NhrpName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Nhrp::Map::Group::NhrpName> > nhrp_name;
        
}; // Native::Interface::Tunnel::Nhrp::Map::Group


class Native::Interface::Tunnel::Nhrp::Map::Group::NhrpName : public Entity
{
    public:
        NhrpName();
        ~NhrpName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhrp_name; //type: string
        class ServicePolicy; //type: Native::Interface::Tunnel::Nhrp::Map::Group::NhrpName::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Nhrp::Map::Group::NhrpName::ServicePolicy> service_policy;
        
}; // Native::Interface::Tunnel::Nhrp::Map::Group::NhrpName


class Native::Interface::Tunnel::Nhrp::Map::Group::NhrpName::ServicePolicy : public Entity
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

        YLeaf output; //type: string

}; // Native::Interface::Tunnel::Nhrp::Map::Group::NhrpName::ServicePolicy


class Native::Interface::Tunnel::Tunnel_ : public Entity
{
    public:
        Tunnel_();
        ~Tunnel_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf checksum; //type: empty
        YLeaf source; //type: string
        YLeaf destination; //type: one of union, string
        YLeaf entropy; //type: empty
        YLeaf key; //type: uint64
        YLeaf raw_packet_interface; //type: string
        YLeaf snooping; //type: SnoopingEnum
        YLeaf tos; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf vrf; //type: string
        class Tun6Rd; //type: Native::Interface::Tunnel::Tunnel_::Tun6Rd
        class Bandwidth; //type: Native::Interface::Tunnel::Tunnel_::Bandwidth
        class DstPort; //type: Native::Interface::Tunnel::Tunnel_::DstPort
        class Endpoint; //type: Native::Interface::Tunnel::Tunnel_::Endpoint
        class Fixup; //type: Native::Interface::Tunnel::Tunnel_::Fixup
        class Flow; //type: Native::Interface::Tunnel::Tunnel_::Flow
        class Mode; //type: Native::Interface::Tunnel::Tunnel_::Mode
        class NetworkId; //type: Native::Interface::Tunnel::Tunnel_::NetworkId
        class PathMtuDiscovery; //type: Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery
        class Protection; //type: Native::Interface::Tunnel::Tunnel_::Protection
        class Mpls; //type: Native::Interface::Tunnel::Tunnel_::Mpls
        class Rbscp; //type: Native::Interface::Tunnel::Tunnel_::Rbscp
        class SrcPort; //type: Native::Interface::Tunnel::Tunnel_::SrcPort
        class Udlr; //type: Native::Interface::Tunnel::Tunnel_::Udlr
        class Vlan; //type: Native::Interface::Tunnel::Tunnel_::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::DstPort> dst_port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Endpoint> endpoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Fixup> fixup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::NetworkId> network_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Protection> protection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Rbscp> rbscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::SrcPort> src_port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Tun6Rd> tun_6rd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Udlr> udlr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Vlan> vlan;
                class SnoopingEnum;

}; // Native::Interface::Tunnel::Tunnel_


class Native::Interface::Tunnel::Tunnel_::Tun6Rd : public Entity
{
    public:
        Tun6Rd();
        ~Tun6Rd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf br; //type: string
        YLeaf prefix; //type: string
        YLeaf reverse_map_check; //type: empty
        class Ipv4; //type: Native::Interface::Tunnel::Tunnel_::Tun6Rd::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Tun6Rd::Ipv4> ipv4;
        
}; // Native::Interface::Tunnel::Tunnel_::Tun6Rd


class Native::Interface::Tunnel::Tunnel_::Tun6Rd::Ipv4 : public Entity
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

        YLeaf prefix_len; //type: uint8
        YLeaf suffix_len; //type: uint8

}; // Native::Interface::Tunnel::Tunnel_::Tun6Rd::Ipv4


class Native::Interface::Tunnel::Tunnel_::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: uint32
        YLeaf transmit; //type: uint32

}; // Native::Interface::Tunnel::Tunnel_::Bandwidth


class Native::Interface::Tunnel::Tunnel_::DstPort : public Entity
{
    public:
        DstPort();
        ~DstPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_num; //type: uint16
        YLeaf dynamic; //type: empty

}; // Native::Interface::Tunnel::Tunnel_::DstPort


class Native::Interface::Tunnel::Tunnel_::Endpoint : public Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicy; //type: Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy> service_policy;
        
}; // Native::Interface::Tunnel::Tunnel_::Endpoint


class Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy : public Entity
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

        YLeaf output; //type: string

}; // Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy


class Native::Interface::Tunnel::Tunnel_::Fixup : public Entity
{
    public:
        Fixup();
        ~Fixup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nat; //type: empty

}; // Native::Interface::Tunnel::Tunnel_::Fixup


class Native::Interface::Tunnel::Tunnel_::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf egress_records; //type: empty

}; // Native::Interface::Tunnel::Tunnel_::Flow


class Native::Interface::Tunnel::Tunnel_::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: empty
        YLeaf udp; //type: UdpEnum
        class Ipsec; //type: Native::Interface::Tunnel::Tunnel_::Mode::Ipsec
        class Mpls; //type: Native::Interface::Tunnel::Tunnel_::Mode::Mpls
        class Ethernet; //type: Native::Interface::Tunnel::Tunnel_::Mode::Ethernet
        class Gre; //type: Native::Interface::Tunnel::Tunnel_::Mode::Gre
        class Ipip; //type: Native::Interface::Tunnel::Tunnel_::Mode::Ipip
        class Ipv6Ip; //type: Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Gre> gre;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Ipip> ipip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip> ipv6ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Mpls> mpls;
                class UdpEnum;

}; // Native::Interface::Tunnel::Tunnel_::Mode


class Native::Interface::Tunnel::Tunnel_::Mode::Ipsec : public Entity
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

        class Ipv4; //type: Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4
        class Ipv6; //type: Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6> ipv6; // presence node
        
}; // Native::Interface::Tunnel::Tunnel_::Mode::Ipsec


class Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4 : public Entity
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


}; // Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4


class Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6 : public Entity
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


}; // Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6


class Native::Interface::Tunnel::Tunnel_::Mode::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TrafficEng; //type: Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng> traffic_eng; // presence node
        
}; // Native::Interface::Tunnel::Tunnel_::Mode::Mpls


class Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng : public Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gre_ip; //type: empty

}; // Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng


class Native::Interface::Tunnel::Tunnel_::Mode::Ethernet : public Entity
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

        YLeaf gre; //type: GreEnum
        class GreEnum;

}; // Native::Interface::Tunnel::Tunnel_::Mode::Ethernet


class Native::Interface::Tunnel::Tunnel_::Mode::Gre : public Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: empty
        YLeaf ipv6; //type: empty
        class Multipoint; //type: Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint> multipoint; // presence node
        
}; // Native::Interface::Tunnel::Tunnel_::Mode::Gre


class Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint : public Entity
{
    public:
        Multipoint();
        ~Multipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: empty

}; // Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint


class Native::Interface::Tunnel::Tunnel_::Mode::Ipip : public Entity
{
    public:
        Ipip();
        ~Ipip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf decapsulate_any; //type: empty

}; // Native::Interface::Tunnel::Tunnel_::Mode::Ipip


class Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip : public Entity
{
    public:
        Ipv6Ip();
        ~Ipv6Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_6rd; //type: empty
        YLeaf auto_6to4; //type: empty
        YLeaf isatap; //type: empty

}; // Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip


class Native::Interface::Tunnel::Tunnel_::NetworkId : public Entity
{
    public:
        NetworkId();
        ~NetworkId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf nexthop; //type: string
        YLeaf qos; //type: string
        YLeaf weight; //type: uint16

}; // Native::Interface::Tunnel::Tunnel_::NetworkId


class Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery : public Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery


class Native::Interface::Tunnel::Tunnel_::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipsec; //type: Native::Interface::Tunnel::Tunnel_::Protection::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Protection::Ipsec> ipsec;
        
}; // Native::Interface::Tunnel::Tunnel_::Protection


class Native::Interface::Tunnel::Tunnel_::Protection::Ipsec : public Entity
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

        YLeaf profile; //type: string
        YLeaf ikev2_profile; //type: string

}; // Native::Interface::Tunnel::Tunnel_::Protection::Ipsec


class Native::Interface::Tunnel::Tunnel_::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TrafficEng; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::Tunnel::Tunnel_::Mpls


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng : public Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth; //type: uint32
        class Affinity; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Affinity
        class AutoBw; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw
        class Autoroute; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute
        class Priority; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority
        class PathOption; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption
        class FastReroute; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute
        class PathSelection; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw> auto_bw;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption> path_option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority> priority;
        
}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attributes; //type: string
        YLeaf mask; //type: string

}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Affinity


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw : public Entity
{
    public:
        AutoBw();
        ~AutoBw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_bw; //type: uint32

}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute : public Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf announce; //type: empty
        YLeaf destination; //type: empty
        class Metric; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric> metric;
        
}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint32
        YLeaf absolute; //type: uint32
        YLeaf relative; //type: int8

}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8

}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption : public Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Working; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working
        class Protect; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect> > protect;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working> > working;
        
}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working : public Entity
{
    public:
        Working();
        ~Working();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        class Dynamic; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic
        class Explicit_; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_
        class Lockdown; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Lockdown

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic> dynamic; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_> explicit_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Lockdown> lockdown; // presence node
        
}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic : public Entity
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

        class Pce; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce
        class SegmentRouting; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce> pce; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting> segment_routing; // presence node
        
}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce : public Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf segment_routing; //type: empty

}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting : public Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pce; //type: Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce> pce; // presence node
        
}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting


class Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce : public Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce

class Native::Interface::Tunnel::Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ipv6::Ospf::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Ipv6::Ospf::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Tunnel::Ipv6::Rip::DefaultInformation::RouteEnum : public Enum
{
    public:
        static const Enum::YLeaf only;
        static const Enum::YLeaf originate;

};

class Native::Interface::Tunnel::Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::Tunnel::Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::Tunnel::Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tunnel::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::Tunnel::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};

class Native::Interface::Tunnel::Tunnel_::SnoopingEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;

};

class Native::Interface::Tunnel::Tunnel_::Mode::UdpEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf multipoint;

};

class Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::GreEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_62_ */

