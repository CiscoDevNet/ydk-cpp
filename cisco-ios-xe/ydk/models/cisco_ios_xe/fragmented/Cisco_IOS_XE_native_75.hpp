#ifndef _CISCO_IOS_XE_NATIVE_75_
#define _CISCO_IOS_XE_NATIVE_75_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::TacacsServer : public Entity
{
    public:
        TacacsServer();
        ~TacacsServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint16
        class Host; //type: Native::TacacsServer::Host
        class DirectedRequest; //type: Native::TacacsServer::DirectedRequest
        class Key; //type: Native::TacacsServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::TacacsServer::DirectedRequest> directed_request; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::TacacsServer::Host> > host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::TacacsServer::Key> key;
        
}; // Native::TacacsServer


class Native::TacacsServer::Host : public Entity
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

        YLeaf name; //type: one of union, string
        YLeaf port; //type: uint16
        YLeaf key; //type: one of string, enumeration
        YLeaf encryption_key; //type: string
        YLeaf timeout; //type: uint16
        class KeyEnum;

}; // Native::TacacsServer::Host


class Native::TacacsServer::DirectedRequest : public Entity
{
    public:
        DirectedRequest();
        ~DirectedRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restricted; //type: empty
        YLeaf no_truncate; //type: empty

}; // Native::TacacsServer::DirectedRequest


class Native::TacacsServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::TacacsServer::Key


class Native::Upgrade : public Entity
{
    public:
        Upgrade();
        ~Upgrade();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fpd; //type: Native::Upgrade::Fpd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Upgrade::Fpd> fpd;
        
}; // Native::Upgrade


class Native::Upgrade::Fpd : public Entity
{
    public:
        Fpd();
        ~Fpd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: empty
        YLeaf path; //type: string

}; // Native::Upgrade::Fpd


class Native::Vtp : public Entity
{
    public:
        Vtp();
        ~Vtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file; //type: string
        YLeaf pruning; //type: empty
        YLeaf version; //type: uint8
        YLeaf domain; //type: string
        class Interface; //type: Native::Vtp::Interface
        class Password; //type: Native::Vtp::Password
        class Mode; //type: Native::Vtp::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Password> password;
        
}; // Native::Vtp


class Native::Vtp::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf only; //type: empty

}; // Native::Vtp::Interface


class Native::Vtp::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf password; //type: string
        YLeaf hidden; //type: empty
        YLeaf secret; //type: empty

}; // Native::Vtp::Password


class Native::Vtp::Mode : public Entity
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

        class Client; //type: Native::Vtp::Mode::Client
        class Off; //type: Native::Vtp::Mode::Off
        class Server; //type: Native::Vtp::Mode::Server
        class Transparent; //type: Native::Vtp::Mode::Transparent

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode::Client> client; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode::Off> off; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode::Server> server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode::Transparent> transparent; // presence node
        
}; // Native::Vtp::Mode


class Native::Vtp::Mode::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mst; //type: empty
        YLeaf unknown; //type: empty
        YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Client


class Native::Vtp::Mode::Off : public Entity
{
    public:
        Off();
        ~Off();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mst; //type: empty
        YLeaf unknown; //type: empty
        YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Off


class Native::Vtp::Mode::Server : public Entity
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

        YLeaf mst; //type: empty
        YLeaf unknown; //type: empty
        YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Server


class Native::Vtp::Mode::Transparent : public Entity
{
    public:
        Transparent();
        ~Transparent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mst; //type: empty
        YLeaf unknown; //type: empty
        YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Transparent


class Native::Xconnect : public Entity
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

        class Logging; //type: Native::Xconnect::Logging

        std::shared_ptr<Cisco_IOS_XE_native::Native::Xconnect::Logging> logging;
        
}; // Native::Xconnect


class Native::Xconnect::Logging : public Entity
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

        YLeaf redundancy; //type: empty
        class Pseudowire; //type: Native::Xconnect::Logging::Pseudowire

        std::shared_ptr<Cisco_IOS_XE_native::Native::Xconnect::Logging::Pseudowire> pseudowire;
        
}; // Native::Xconnect::Logging


class Native::Xconnect::Logging::Pseudowire : public Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: empty

}; // Native::Xconnect::Logging::Pseudowire


class Native::Fabric : public Entity
{
    public:
        Fabric();
        ~Fabric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SwitchingMode; //type: Native::Fabric::SwitchingMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric::SwitchingMode> switching_mode;
        
}; // Native::Fabric


class Native::Fabric::SwitchingMode : public Entity
{
    public:
        SwitchingMode();
        ~SwitchingMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Allow; //type: Native::Fabric::SwitchingMode::Allow
        class Force; //type: Native::Fabric::SwitchingMode::Force

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Allow> allow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Force> force;
        
}; // Native::Fabric::SwitchingMode


class Native::Fabric::SwitchingMode::Allow : public Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bus_mode; //type: empty
        class Truncated; //type: Native::Fabric::SwitchingMode::Allow::Truncated

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Allow::Truncated> truncated; // presence node
        
}; // Native::Fabric::SwitchingMode::Allow


class Native::Fabric::SwitchingMode::Allow::Truncated : public Entity
{
    public:
        Truncated();
        ~Truncated();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint8

}; // Native::Fabric::SwitchingMode::Allow::Truncated


class Native::Fabric::SwitchingMode::Force : public Entity
{
    public:
        Force();
        ~Force();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bus_mode; //type: empty

}; // Native::Fabric::SwitchingMode::Force


class Native::PortChannel : public Entity
{
    public:
        PortChannel();
        ~PortChannel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: empty
        class LoadBalance; //type: Native::PortChannel::LoadBalance
        class LoadBalancing; //type: Native::PortChannel::LoadBalancing

        std::shared_ptr<Cisco_IOS_XE_native::Native::PortChannel::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PortChannel::LoadBalancing> load_balancing;
        
}; // Native::PortChannel


class Native::PortChannel::LoadBalance : public Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_balance; //type: LoadBalanceEnum
        class Extended; //type: Native::PortChannel::LoadBalance::Extended

        std::shared_ptr<Cisco_IOS_XE_native::Native::PortChannel::LoadBalance::Extended> extended; // presence node
                class LoadBalanceEnum;

}; // Native::PortChannel::LoadBalance


class Native::PortChannel::LoadBalance::Extended : public Entity
{
    public:
        Extended();
        ~Extended();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList extended; //type: list of  ExtendedEnum
        class ExtendedEnum;

}; // Native::PortChannel::LoadBalance::Extended


class Native::PortChannel::LoadBalancing : public Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_manual; //type: empty

}; // Native::PortChannel::LoadBalancing


class Native::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Chain; //type: Native::Key::Chain

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Key::Chain> > chain;
        
}; // Native::Key


class Native::Key::Chain : public Entity
{
    public:
        Chain();
        ~Chain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf macsec; //type: empty
        class Key_; //type: Native::Key::Chain::Key_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Key::Chain::Key_> > key;
        
}; // Native::Key::Chain


class Native::Key::Chain::Key_ : public Entity
{
    public:
        Key_();
        ~Key_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cryptographic_algorithm; //type: CryptographicAlgorithmEnum
        class KeyString; //type: Native::Key::Chain::Key_::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Key::Chain::Key_::KeyString> key_string;
                class CryptographicAlgorithmEnum;

}; // Native::Key::Chain::Key_


class Native::Key::Chain::Key_::KeyString : public Entity
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

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Key::Chain::Key_::KeyString


class Native::L2 : public Entity
{
    public:
        L2();
        ~L2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        class Vfi; //type: Native::L2::Vfi

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2::Vfi> > vfi;
        
}; // Native::L2


class Native::L2::Vfi : public Entity
{
    public:
        Vfi();
        ~Vfi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf mode; //type: ModeEnum
        YLeaf evc; //type: string
        YLeaf bridge_domain; //type: uint16
        class Vpn; //type: Native::L2::Vfi::Vpn
        class Neighbor; //type: Native::L2::Vfi::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2::Vfi::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2::Vfi::Vpn> vpn;
                class ModeEnum;

}; // Native::L2::Vfi


class Native::L2::Vfi::Vpn : public Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint64

}; // Native::L2::Vfi::Vpn


class Native::L2::Vfi::Neighbor : public Entity
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

        YLeaf router_id; //type: string
        YLeaf vc_id; //type: uint64
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf pw_class; //type: string
        class EncapsulationEnum;

}; // Native::L2::Vfi::Neighbor


class Native::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Debug; //type: Native::System::Debug
        class Disable; //type: Native::System::Disable
        class Environment; //type: Native::System::Environment
        class Fnf; //type: Native::System::Fnf
        class Ignore; //type: Native::System::Ignore
        class ModeButton; //type: Native::System::ModeButton
        class Mtu; //type: Native::System::Mtu

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Debug> debug;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Disable> disable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment> environment;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Fnf> fnf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Ignore> ignore;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::ModeButton> mode_button;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Mtu> mtu;
        
}; // Native::System


class Native::System::Debug : public Entity
{
    public:
        Debug();
        ~Debug();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Shell; //type: Native::System::Debug::Shell

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Debug::Shell> shell;
        
}; // Native::System::Debug


class Native::System::Debug::Shell : public Entity
{
    public:
        Shell();
        ~Shell();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Switch; //type: Native::System::Debug::Shell::Switch

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Debug::Shell::Switch> switch;
        
}; // Native::System::Debug::Shell


class Native::System::Debug::Shell::Switch : public Entity
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

        YLeaf switch_number; //type: uint8
        YLeaf all; //type: empty

}; // Native::System::Debug::Shell::Switch


class Native::System::Disable : public Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Password; //type: Native::System::Disable::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Disable::Password> password;
        
}; // Native::System::Disable


class Native::System::Disable::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Recovery; //type: Native::System::Disable::Password::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Disable::Password::Recovery> recovery;
        
}; // Native::System::Disable::Password


class Native::System::Disable::Password::Recovery : public Entity
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

        class Switch; //type: Native::System::Disable::Password::Recovery::Switch

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Disable::Password::Recovery::Switch> switch;
        
}; // Native::System::Disable::Password::Recovery


class Native::System::Disable::Password::Recovery::Switch : public Entity
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
        YLeaf all; //type: empty

}; // Native::System::Disable::Password::Recovery::Switch


class Native::System::Environment : public Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FanFailAction; //type: Native::System::Environment::FanFailAction
        class Temperature; //type: Native::System::Environment::Temperature

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment::FanFailAction> fan_fail_action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment::Temperature> temperature;
        
}; // Native::System::Environment


class Native::System::Environment::FanFailAction : public Entity
{
    public:
        FanFailAction();
        ~FanFailAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shut; //type: empty

}; // Native::System::Environment::FanFailAction


class Native::System::Environment::Temperature : public Entity
{
    public:
        Temperature();
        ~Temperature();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threshold; //type: Native::System::Environment::Temperature::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment::Temperature::Threshold> threshold;
        
}; // Native::System::Environment::Temperature


class Native::System::Environment::Temperature::Threshold : public Entity
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

        class Yellow; //type: Native::System::Environment::Temperature::Threshold::Yellow

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment::Temperature::Threshold::Yellow> yellow;
        
}; // Native::System::Environment::Temperature::Threshold


class Native::System::Environment::Temperature::Threshold::Yellow : public Entity
{
    public:
        Yellow();
        ~Yellow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delta_value; //type: uint8
        YLeaf detail; //type: empty

}; // Native::System::Environment::Temperature::Threshold::Yellow


class Native::System::Fnf : public Entity
{
    public:
        Fnf();
        ~Fnf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BytesCount; //type: Native::System::Fnf::BytesCount

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Fnf::BytesCount> bytes_count;
        
}; // Native::System::Fnf


class Native::System::Fnf::BytesCount : public Entity
{
    public:
        BytesCount();
        ~BytesCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf layer2; //type: empty

}; // Native::System::Fnf::BytesCount


class Native::System::Ignore : public Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Startupconfig; //type: Native::System::Ignore::Startupconfig

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Ignore::Startupconfig> startupconfig;
        
}; // Native::System::Ignore


class Native::System::Ignore::Startupconfig : public Entity
{
    public:
        Startupconfig();
        ~Startupconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Switch; //type: Native::System::Ignore::Startupconfig::Switch

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Ignore::Startupconfig::Switch> switch;
        
}; // Native::System::Ignore::Startupconfig


class Native::System::Ignore::Startupconfig::Switch : public Entity
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
        YLeaf all; //type: empty

}; // Native::System::Ignore::Startupconfig::Switch


class Native::System::ModeButton : public Entity
{
    public:
        ModeButton();
        ~ModeButton();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reset; //type: empty

}; // Native::System::ModeButton


class Native::System::Mtu : public Entity
{
    public:
        Mtu();
        ~Mtu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint16
        YLeaf jumbo; //type: uint16
        YLeaf routing; //type: uint16

}; // Native::System::Mtu


class Native::Errdisable : public Entity
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

        class Detect; //type: Native::Errdisable::Detect
        class FlapSetting; //type: Native::Errdisable::FlapSetting
        class Recovery; //type: Native::Errdisable::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Detect> detect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting> flap_setting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Recovery> recovery;
        
}; // Native::Errdisable


class Native::Errdisable::Detect : public Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cause; //type: Native::Errdisable::Detect::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Detect::Cause> cause;
        
}; // Native::Errdisable::Detect


class Native::Errdisable::Detect::Cause : public Entity
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

        YLeaf all; //type: empty
        YLeaf arp_inspection; //type: empty
        YLeaf bpduguard; //type: empty
        YLeaf dhcp_rate_limit; //type: empty
        YLeaf dtp_flap; //type: empty
        YLeaf gbic_invalid; //type: empty
        YLeaf inline_power; //type: empty
        YLeaf l2ptguard; //type: empty
        YLeaf link_flap; //type: empty
        YLeaf loopback; //type: empty
        YLeaf mlacp_minlink; //type: empty
        YLeaf pagp_flap; //type: empty
        YLeaf pppoe_ia_rate_limit; //type: empty
        YLeaf sfp_config_mismatch; //type: empty
        YLeaf small_frame; //type: empty
        class SecurityViolation; //type: Native::Errdisable::Detect::Cause::SecurityViolation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Detect::Cause::SecurityViolation> security_violation;
        
}; // Native::Errdisable::Detect::Cause


class Native::Errdisable::Detect::Cause::SecurityViolation : public Entity
{
    public:
        SecurityViolation();
        ~SecurityViolation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Shutdown; //type: Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown> shutdown;
        
}; // Native::Errdisable::Detect::Cause::SecurityViolation


class Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown : public Entity
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

        YLeaf vlan; //type: empty

}; // Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown


class Native::Errdisable::FlapSetting : public Entity
{
    public:
        FlapSetting();
        ~FlapSetting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cause; //type: Native::Errdisable::FlapSetting::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting::Cause> cause;
        
}; // Native::Errdisable::FlapSetting


class Native::Errdisable::FlapSetting::Cause : public Entity
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

        class DtpFlap; //type: Native::Errdisable::FlapSetting::Cause::DtpFlap
        class LinkFlap; //type: Native::Errdisable::FlapSetting::Cause::LinkFlap
        class PagpFlap; //type: Native::Errdisable::FlapSetting::Cause::PagpFlap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting::Cause::DtpFlap> dtp_flap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting::Cause::LinkFlap> link_flap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting::Cause::PagpFlap> pagp_flap;
        
}; // Native::Errdisable::FlapSetting::Cause


class Native::Errdisable::FlapSetting::Cause::DtpFlap : public Entity
{
    public:
        DtpFlap();
        ~DtpFlap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_flaps; //type: uint8
        YLeaf time; //type: uint8

}; // Native::Errdisable::FlapSetting::Cause::DtpFlap


class Native::Errdisable::FlapSetting::Cause::LinkFlap : public Entity
{
    public:
        LinkFlap();
        ~LinkFlap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_flaps; //type: uint8
        YLeaf time; //type: uint8

}; // Native::Errdisable::FlapSetting::Cause::LinkFlap


class Native::Errdisable::FlapSetting::Cause::PagpFlap : public Entity
{
    public:
        PagpFlap();
        ~PagpFlap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_flaps; //type: uint8
        YLeaf time; //type: uint8

}; // Native::Errdisable::FlapSetting::Cause::PagpFlap


class Native::Errdisable::Recovery : public Entity
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

        YLeaf interval; //type: uint32
        class Cause; //type: Native::Errdisable::Recovery::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Recovery::Cause> cause;
        
}; // Native::Errdisable::Recovery


class Native::Errdisable::Recovery::Cause : public Entity
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

        YLeaf all; //type: empty
        YLeaf arp_inspection; //type: empty
        YLeaf bpduguard; //type: empty
        YLeaf channel_misconfig; //type: empty
        YLeaf dhcp_rate_limit; //type: empty
        YLeaf dtp_flap; //type: empty
        YLeaf gbic_invalid; //type: empty
        YLeaf inline_power; //type: empty
        YLeaf l2ptguard; //type: empty
        YLeaf link_flap; //type: empty
        YLeaf link_monitor_failure; //type: empty
        YLeaf loopback; //type: empty
        YLeaf mac_limit; //type: empty
        YLeaf mlacp_minlink; //type: empty
        YLeaf pagp_flap; //type: empty
        YLeaf port_mode_failure; //type: empty
        YLeaf pppoe_ia_rate_limit; //type: empty
        YLeaf psp; //type: empty
        YLeaf psecure_violation; //type: empty
        YLeaf security_violation; //type: empty
        YLeaf sfp_config_mismatch; //type: empty
        YLeaf small_frame; //type: empty
        YLeaf storm_control; //type: empty
        YLeaf udld; //type: empty
        YLeaf unicast_flood; //type: empty
        YLeaf vmps; //type: empty
        class OamRemoteFailure; //type: Native::Errdisable::Recovery::Cause::OamRemoteFailure

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Recovery::Cause::OamRemoteFailure> oam_remote_failure; // presence node
        
}; // Native::Errdisable::Recovery::Cause


class Native::Errdisable::Recovery::Cause::OamRemoteFailure : public Entity
{
    public:
        OamRemoteFailure();
        ~OamRemoteFailure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical_event; //type: empty
        YLeaf dying_gasp; //type: empty
        YLeaf link_fault; //type: empty

}; // Native::Errdisable::Recovery::Cause::OamRemoteFailure


class Native::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile; //type: Native::Identity::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::Identity::Profile> profile;
        
}; // Native::Identity


class Native::Identity::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1x; //type: empty
        YLeaf default_; //type: empty

}; // Native::Identity::Profile


class Native::Monitor : public Entity
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

        class EventTrace; //type: Native::Monitor::EventTrace
        class Session; //type: Native::Monitor::Session

        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::EventTrace> event_trace;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session> > session;
        
}; // Native::Monitor


class Native::Monitor::EventTrace : public Entity
{
    public:
        EventTrace();
        ~EventTrace();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Monitor::EventTrace


class Native::Monitor::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Destination; //type: Native::Monitor::Session::Destination
        class Filter; //type: Native::Monitor::Session::Filter
        class Source; //type: Native::Monitor::Session::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Filter> filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Source> source;
        
}; // Native::Monitor::Session


class Native::Monitor::Session::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::Monitor::Session::Destination::Interface
        class Remote; //type: Native::Monitor::Session::Destination::Remote

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Destination::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Destination::Remote> remote;
        
}; // Native::Monitor::Session::Destination


class Native::Monitor::Session::Destination::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf ingress; //type: empty
        YLeaf ingress_encap; //type: IngressEncapEnum
        YLeaf vlan; //type: uint16
        class EncapsulationEnum;
        class IngressEncapEnum;

}; // Native::Monitor::Session::Destination::Interface


class Native::Monitor::Session::Destination::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Monitor::Session::Destination::Remote


class Native::Monitor::Session::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PacketType; //type: Native::Monitor::Session::Filter::PacketType
        class Ip; //type: Native::Monitor::Session::Filter::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Filter::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Filter::PacketType> packet_type;
        
}; // Native::Monitor::Session::Filter


class Native::Monitor::Session::Filter::PacketType : public Entity
{
    public:
        PacketType();
        ~PacketType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: StatusEnum
        YLeaf direction; //type: DirectionEnum
        class StatusEnum;
        class DirectionEnum;

}; // Native::Monitor::Session::Filter::PacketType


class Native::Monitor::Session::Filter::Ip : public Entity
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

        class AccessGroup; //type: Native::Monitor::Session::Filter::Ip::AccessGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Filter::Ip::AccessGroup> access_group;
        
}; // Native::Monitor::Session::Filter::Ip


class Native::Monitor::Session::Filter::Ip::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: string

}; // Native::Monitor::Session::Filter::Ip::AccessGroup


class Native::Monitor::Session::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::Monitor::Session::Source::Interface
        class Vlan; //type: Native::Monitor::Session::Source::Vlan
        class Remote; //type: Native::Monitor::Session::Source::Remote

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Source::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Source::Remote> remote;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Source::Vlan> vlan;
        
}; // Native::Monitor::Session::Source


class Native::Monitor::Session::Source::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Monitor::Session::Source::Interface


class Native::Monitor::Session::Source::Vlan : public Entity
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

        YLeaf vlan; //type: uint16
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Monitor::Session::Source::Vlan


class Native::Monitor::Session::Source::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Monitor::Session::Source::Remote


class Native::TftpServer : public Entity
{
    public:
        TftpServer();
        ~TftpServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::TftpServer


class Native::RadiusServer : public Entity
{
    public:
        RadiusServer();
        ~RadiusServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deadtime; //type: uint32
        YLeaf retransmit; //type: uint8
        YLeaf timeout; //type: uint16
        class Attribute; //type: Native::RadiusServer::Attribute
        class DeadCriteria; //type: Native::RadiusServer::DeadCriteria
        class Host; //type: Native::RadiusServer::Host
        class Key; //type: Native::RadiusServer::Key
        class SourcePorts; //type: Native::RadiusServer::SourcePorts
        class Vsa; //type: Native::RadiusServer::Vsa

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Attribute> > attribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::DeadCriteria> dead_criteria;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Host> > host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Key> key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::SourcePorts> source_ports;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa> vsa;
        
}; // Native::RadiusServer


class Native::RadiusServer::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeafList send_attribute; //type: list of  SendAttributeEnum
        class AccessRequest; //type: Native::RadiusServer::Attribute::AccessRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Attribute::AccessRequest> access_request;
                class SendAttributeEnum;

}; // Native::RadiusServer::Attribute


class Native::RadiusServer::Attribute::AccessRequest : public Entity
{
    public:
        AccessRequest();
        ~AccessRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include; //type: empty

}; // Native::RadiusServer::Attribute::AccessRequest


class Native::RadiusServer::DeadCriteria : public Entity
{
    public:
        DeadCriteria();
        ~DeadCriteria();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint8
        YLeaf tries; //type: uint8

}; // Native::RadiusServer::DeadCriteria


class Native::RadiusServer::Host : public Entity
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

        YLeaf id; //type: string
        YLeaf auth_port; //type: uint16
        YLeaf acct_port; //type: uint16
        YLeaf retransmit; //type: uint8
        YLeaf timeout; //type: uint16
        YLeaf key; //type: one of string, enumeration
        YLeaf clear_key; //type: string
        class Test; //type: Native::RadiusServer::Host::Test

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Host::Test> test;
                class KeyEnum;

}; // Native::RadiusServer::Host


class Native::RadiusServer::Host::Test : public Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Username; //type: Native::RadiusServer::Host::Test::Username

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Host::Test::Username> > username;
        
}; // Native::RadiusServer::Host::Test


class Native::RadiusServer::Host::Test::Username : public Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Key; //type: Native::RadiusServer::Host::Test::Username::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Host::Test::Username::Key> key;
        
}; // Native::RadiusServer::Host::Test::Username


class Native::RadiusServer::Host::Test::Username::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf clear_key; //type: string
        class EncryptionEnum;

}; // Native::RadiusServer::Host::Test::Username::Key


class Native::RadiusServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf clear_key; //type: string
        class EncryptionEnum;

}; // Native::RadiusServer::Key


class Native::RadiusServer::SourcePorts : public Entity
{
    public:
        SourcePorts();
        ~SourcePorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended; //type: empty

}; // Native::RadiusServer::SourcePorts


class Native::RadiusServer::Vsa : public Entity
{
    public:
        Vsa();
        ~Vsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Disallow; //type: Native::RadiusServer::Vsa::Disallow
        class Send; //type: Native::RadiusServer::Vsa::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Disallow> disallow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send> send; // presence node
        
}; // Native::RadiusServer::Vsa


class Native::RadiusServer::Vsa::Disallow : public Entity
{
    public:
        Disallow();
        ~Disallow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unknown; //type: empty

}; // Native::RadiusServer::Vsa::Disallow


class Native::RadiusServer::Vsa::Send : public Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Accounting; //type: Native::RadiusServer::Vsa::Send::Accounting
        class Authentication; //type: Native::RadiusServer::Vsa::Send::Authentication
        class CiscoNasPort; //type: Native::RadiusServer::Vsa::Send::CiscoNasPort

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::Accounting> accounting; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::CiscoNasPort> cisco_nas_port; // presence node
        
}; // Native::RadiusServer::Vsa::Send


class Native::RadiusServer::Vsa::Send::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::Accounting


class Native::RadiusServer::Vsa::Send::Authentication : public Entity
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

        YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::Authentication


class Native::RadiusServer::Vsa::Send::CiscoNasPort : public Entity
{
    public:
        CiscoNasPort();
        ~CiscoNasPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::CiscoNasPort


class Native::Radius : public Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Filter; //type: Native::Radius::Filter
        class Server; //type: Native::Radius::Server

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Filter> > filter;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server> > server;
        
}; // Native::Radius


class Native::Radius::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf match; //type: MatchEnum
        class MatchEnum;

}; // Native::Radius::Filter


class Native::Radius::Server : public Entity
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

        YLeaf id; //type: string
        class Address; //type: Native::Radius::Server::Address
        class Backoff; //type: Native::Radius::Server::Backoff
        class Key; //type: Native::Radius::Server::Key
        class Pac; //type: Native::Radius::Server::Pac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Backoff> backoff;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Key> key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Pac> pac;
        
}; // Native::Radius::Server


class Native::Radius::Server::Address : public Entity
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

        class Ipv4; //type: Native::Radius::Server::Address::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Address::Ipv4> ipv4;
        
}; // Native::Radius::Server::Address


class Native::Radius::Server::Address::Ipv4 : public Entity
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

        YLeaf host; //type: string
        YLeaf auth_port; //type: uint16
        YLeaf acct_port; //type: uint16

}; // Native::Radius::Server::Address::Ipv4


class Native::Radius::Server::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Exponential; //type: Native::Radius::Server::Backoff::Exponential

        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Backoff::Exponential> exponential; // presence node
        
}; // Native::Radius::Server::Backoff


class Native::Radius::Server::Backoff::Exponential : public Entity
{
    public:
        Exponential();
        ~Exponential();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_delay; //type: uint8
        YLeaf backoff_retry; //type: uint8

}; // Native::Radius::Server::Backoff::Exponential


class Native::Radius::Server::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Radius::Server::Key


class Native::Radius::Server::Pac : public Entity
{
    public:
        Pac();
        ~Pac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Key; //type: Native::Radius::Server::Pac::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Pac::Key> key;
        
}; // Native::Radius::Server::Pac


class Native::Radius::Server::Pac::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Radius::Server::Pac::Key


class Native::Zone : public Entity
{
    public:
        Zone();
        ~Zone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Security; //type: Native::Zone::Security

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Zone::Security> > security;
        
}; // Native::Zone


class Native::Zone::Security : public Entity
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

        YLeaf id; //type: string
        YLeaf description; //type: string
        YLeaf protection; //type: string

}; // Native::Zone::Security


class Native::ZonePair : public Entity
{
    public:
        ZonePair();
        ~ZonePair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Security; //type: Native::ZonePair::Security

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ZonePair::Security> > security;
        
}; // Native::ZonePair


class Native::ZonePair::Security : public Entity
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

        YLeaf id; //type: string
        YLeaf source; //type: string
        YLeaf destination; //type: string
        YLeaf description; //type: string
        class ServicePolicy; //type: Native::ZonePair::Security::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::ZonePair::Security::ServicePolicy> service_policy;
        
}; // Native::ZonePair::Security


class Native::ZonePair::Security::ServicePolicy : public Entity
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

        class Type; //type: Native::ZonePair::Security::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::ZonePair::Security::ServicePolicy::Type> type;
        
}; // Native::ZonePair::Security::ServicePolicy


class Native::ZonePair::Security::ServicePolicy::Type : public Entity
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

        YLeaf inspect; //type: string

}; // Native::ZonePair::Security::ServicePolicy::Type


class Native::AlarmContact : public Entity
{
    public:
        AlarmContact();
        ~AlarmContact();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint8
        YLeaf description; //type: string
        YLeaf severity; //type: SeverityEnum
        YLeaf trigger; //type: TriggerEnum
        class SeverityEnum;
        class TriggerEnum;

}; // Native::AlarmContact


class Native::Ethernet : public Entity
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

        class Evc; //type: Native::Ethernet::Evc
        class Lmi; //type: Native::Ethernet::Lmi
        class Cfm; //type: Native::Ethernet::Cfm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm> cfm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Evc> > evc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Lmi> lmi;
        
}; // Native::Ethernet


class Native::Ethernet::Evc : public Entity
{
    public:
        Evc();
        ~Evc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Ethernet::Evc


class Native::Ethernet::Lmi : public Entity
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

        YLeaf ce; //type: empty
        YLeaf global; //type: empty

}; // Native::Ethernet::Lmi


class Native::Ethernet::Cfm : public Entity
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

        YLeaf ieee; //type: empty
        YLeaf global; //type: empty
        class Ais; //type: Native::Ethernet::Cfm::Ais
        class Alarm; //type: Native::Ethernet::Cfm::Alarm
        class Domain; //type: Native::Ethernet::Cfm::Domain
        class Logging; //type: Native::Ethernet::Cfm::Logging
        class Mep; //type: Native::Ethernet::Cfm::Mep
        class Mip; //type: Native::Ethernet::Cfm::Mip
        class Traceroute; //type: Native::Ethernet::Cfm::Traceroute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais> ais;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Alarm> alarm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain> > domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Logging> logging; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mep> mep;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip> mip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Traceroute> traceroute;
        
}; // Native::Ethernet::Cfm


class Native::Ethernet::Cfm::Ais : public Entity
{
    public:
        Ais();
        ~Ais();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkStatus; //type: Native::Ethernet::Cfm::Ais::LinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus> link_status;
        
}; // Native::Ethernet::Cfm::Ais


class Native::Ethernet::Cfm::Ais::LinkStatus : public Entity
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

        class Global; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global> global; // presence node
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus


class Native::Ethernet::Cfm::Ais::LinkStatus::Global : public Entity
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

        class CfmMode__ConfigAisLinkCfm; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm> cfm_mode__config_ais_link_cfm;
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global


class Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm : public Entity
{
    public:
        CfmMode__ConfigAisLinkCfm();
        ~CfmMode__ConfigAisLinkCfm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf level; //type: uint8
        class Period; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period> period;
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm


class Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period : public Entity
{
    public:
        Period();
        ~Period();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tp_1; //type: empty
        YLeaf tp_60; //type: empty

}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period


class Native::Ethernet::Cfm::Alarm : public Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint16
        YLeaf packet; //type: uint16
        YLeaf reset; //type: uint16
        class Notification; //type: Native::Ethernet::Cfm::Alarm::Notification

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Alarm::Notification> notification;
        
}; // Native::Ethernet::Cfm::Alarm


class Native::Ethernet::Cfm::Alarm::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf error_xcon; //type: empty
        YLeaf mac_remote_error_xcon; //type: empty
        YLeaf none; //type: empty
        YLeaf remote_error_xcon; //type: empty
        YLeaf xcon; //type: empty

}; // Native::Ethernet::Cfm::Alarm::Notification


class Native::Ethernet::Cfm::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf level; //type: uint8
        class Service; //type: Native::Ethernet::Cfm::Domain::Service

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain::Service> > service;
        
}; // Native::Ethernet::Cfm::Domain


class Native::Ethernet::Cfm::Domain::Service : public Entity
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

        YLeaf name; //type: string
        YLeaf evc; //type: string
        YLeaf vlan; //type: uint16
        class ContinuityCheck; //type: Native::Ethernet::Cfm::Domain::Service::ContinuityCheck

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain::Service::ContinuityCheck> continuity_check; // presence node
        
}; // Native::Ethernet::Cfm::Domain::Service


class Native::Ethernet::Cfm::Domain::Service::ContinuityCheck : public Entity
{
    public:
        ContinuityCheck();
        ~ContinuityCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Ethernet::Cfm::Domain::Service::ContinuityCheck


class Native::Ethernet::Cfm::Logging : public Entity
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

        YLeaf ais; //type: empty
        class Alarm; //type: Native::Ethernet::Cfm::Logging::Alarm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Logging::Alarm> alarm;
        
}; // Native::Ethernet::Cfm::Logging


class Native::Ethernet::Cfm::Logging::Alarm : public Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco; //type: empty
        YLeaf ieee; //type: empty

}; // Native::Ethernet::Cfm::Logging::Alarm


class Native::Ethernet::Cfm::Mep : public Entity
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

        class Crosscheck; //type: Native::Ethernet::Cfm::Mep::Crosscheck

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mep::Crosscheck> crosscheck;
        
}; // Native::Ethernet::Cfm::Mep


class Native::Ethernet::Cfm::Mep::Crosscheck : public Entity
{
    public:
        Crosscheck();
        ~Crosscheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_delay; //type: uint16

}; // Native::Ethernet::Cfm::Mep::Crosscheck


class Native::Ethernet::Cfm::Mip : public Entity
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

        YLeaf filter; //type: empty
        class AutoCreate; //type: Native::Ethernet::Cfm::Mip::AutoCreate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate> auto_create;
        
}; // Native::Ethernet::Cfm::Mip


class Native::Ethernet::Cfm::Mip::AutoCreate : public Entity
{
    public:
        AutoCreate();
        ~AutoCreate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Ethernet::Cfm::Mip::AutoCreate::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate::Level> level;
        
}; // Native::Ethernet::Cfm::Mip::AutoCreate


class Native::Ethernet::Cfm::Mip::AutoCreate::Level : public Entity
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

        class MefNum; //type: Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum> > mef_num;
        
}; // Native::Ethernet::Cfm::Mip::AutoCreate::Level


class Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum : public Entity
{
    public:
        MefNum();
        ~MefNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mef_num; //type: uint8
        YLeaf evc; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum


class Native::Ethernet::Cfm::Traceroute : public Entity
{
    public:
        Traceroute();
        ~Traceroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cache; //type: Native::Ethernet::Cfm::Traceroute::Cache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Traceroute::Cache> cache; // presence node
        
}; // Native::Ethernet::Cfm::Traceroute


class Native::Ethernet::Cfm::Traceroute::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hold_time; //type: uint16
        YLeaf size; //type: uint16

}; // Native::Ethernet::Cfm::Traceroute::Cache


class Native::AccessList : public Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessListStandardRange; //type: Native::AccessList::AccessListStandardRange
        class AccessListExtendedRange; //type: Native::AccessList::AccessListExtendedRange
        class Hardware; //type: Native::AccessList::Hardware
        class AccessListExpandedRange; //type: Native::AccessList::AccessListExpandedRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange> > access_list_expanded_range;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExtendedRange> > access_list_extended_range;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListStandardRange> > access_list_standard_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::Hardware> hardware;
        
}; // Native::AccessList


class Native::AccessList::AccessListStandardRange : public Entity
{
    public:
        AccessListStandardRange();
        ~AccessListStandardRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf listnumber; //type: uint16
        class StdAccessListRule; //type: Native::AccessList::AccessListStandardRange::StdAccessListRule
        class Permit; //type: Native::AccessList::AccessListStandardRange::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListStandardRange::Permit> permit;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListStandardRange::StdAccessListRule> > std_access_list_rule;
        
}; // Native::AccessList::AccessListStandardRange


class Native::AccessList::AccessListStandardRange::StdAccessListRule : public Entity
{
    public:
        StdAccessListRule();
        ~StdAccessListRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule; //type: string

}; // Native::AccessList::AccessListStandardRange::StdAccessListRule


class Native::AccessList::AccessListStandardRange::Permit : public Entity
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

        class Ipv4OrHostname; //type: Native::AccessList::AccessListStandardRange::Permit::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListStandardRange::Permit::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::AccessList::AccessListStandardRange::Permit


class Native::AccessList::AccessListStandardRange::Permit::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf wildcard; //type: string
        YLeaf log; //type: empty

}; // Native::AccessList::AccessListStandardRange::Permit::Ipv4OrHostname


class Native::AccessList::AccessListExtendedRange : public Entity
{
    public:
        AccessListExtendedRange();
        ~AccessListExtendedRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf listnumber; //type: uint16
        class ExtAccessListRule; //type: Native::AccessList::AccessListExtendedRange::ExtAccessListRule

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExtendedRange::ExtAccessListRule> > ext_access_list_rule;
        
}; // Native::AccessList::AccessListExtendedRange


class Native::AccessList::AccessListExtendedRange::ExtAccessListRule : public Entity
{
    public:
        ExtAccessListRule();
        ~ExtAccessListRule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule; //type: string

}; // Native::AccessList::AccessListExtendedRange::ExtAccessListRule


class Native::AccessList::Hardware : public Entity
{
    public:
        Hardware();
        ~Hardware();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Capture; //type: Native::AccessList::Hardware::Capture

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::Hardware::Capture> capture;
        
}; // Native::AccessList::Hardware


class Native::AccessList::Hardware::Capture : public Entity
{
    public:
        Capture();
        ~Capture();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::AccessList::Hardware::Capture

class Native::TacacsServer::Host::KeyEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::TacacsServer::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::PortChannel::LoadBalance::LoadBalanceEnum : public Enum
{
    public:
        static const Enum::YLeaf dst_ip;
        static const Enum::YLeaf dst_mac;
        static const Enum::YLeaf dst_mixed_ip_port;
        static const Enum::YLeaf dst_port;
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf src_dst_ip;
        static const Enum::YLeaf src_dst_mac;
        static const Enum::YLeaf src_dst_mixed_ip_port;
        static const Enum::YLeaf src_dst_port;
        static const Enum::YLeaf src_ip;
        static const Enum::YLeaf src_mac;
        static const Enum::YLeaf src_mixed_ip_port;
        static const Enum::YLeaf src_port;

};

class Native::PortChannel::LoadBalance::Extended::ExtendedEnum : public Enum
{
    public:
        static const Enum::YLeaf dst_ip;
        static const Enum::YLeaf dst_mac;
        static const Enum::YLeaf dst_port;
        static const Enum::YLeaf ipv6_label;
        static const Enum::YLeaf l3_proto;
        static const Enum::YLeaf src_ip;
        static const Enum::YLeaf src_mac;
        static const Enum::YLeaf src_port;

};

class Native::Key::Chain::Key_::CryptographicAlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf aes_128_cmac;
        static const Enum::YLeaf aes_256_cmac;
        static const Enum::YLeaf hmac_sha_1;
        static const Enum::YLeaf hmac_sha_256;
        static const Enum::YLeaf hmac_sha_384;
        static const Enum::YLeaf hmac_sha_512;
        static const Enum::YLeaf md5;

};

class Native::Key::Chain::Key_::KeyString::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;
        static const Enum::YLeaf Y_7;

};

class Native::L2::Vfi::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf autodiscovery;
        static const Enum::YLeaf manual;
        static const Enum::YLeaf point_to_point;

};

class Native::L2::Vfi::Neighbor::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf l2tpv3;
        static const Enum::YLeaf mpls;

};

class Native::Monitor::Session::Destination::Interface::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf isl;
        static const Enum::YLeaf replicate;

};

class Native::Monitor::Session::Destination::Interface::IngressEncapEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf isl;
        static const Enum::YLeaf untagged;

};

class Native::Monitor::Session::Filter::PacketType::StatusEnum : public Enum
{
    public:
        static const Enum::YLeaf good;
        static const Enum::YLeaf bad;

};

class Native::Monitor::Session::Filter::PacketType::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf rx;
        static const Enum::YLeaf tx;

};

class Native::Monitor::Session::Source::Interface::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf rx;
        static const Enum::YLeaf tx;

};

class Native::Monitor::Session::Source::Vlan::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf rx;
        static const Enum::YLeaf tx;

};

class Native::RadiusServer::Attribute::SendAttributeEnum : public Enum
{
    public:
        static const Enum::YLeaf on_for_login_auth;
        static const Enum::YLeaf include_in_access_req;
        static const Enum::YLeaf support_multiple;

};

class Native::RadiusServer::Host::KeyEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::RadiusServer::Host::Test::Username::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::RadiusServer::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Radius::Filter::MatchEnum : public Enum
{
    public:
        static const Enum::YLeaf match_all;
        static const Enum::YLeaf match_any;

};

class Native::Radius::Server::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_5;

};

class Native::Radius::Server::Pac::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;
        static const Enum::YLeaf Y_7;

};

class Native::AlarmContact::SeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf major;
        static const Enum::YLeaf minor;

};

class Native::AlarmContact::TriggerEnum : public Enum
{
    public:
        static const Enum::YLeaf open;
        static const Enum::YLeaf closed;

};

class Native::AccessList::Hardware::Capture::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf vlan;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_75_ */

