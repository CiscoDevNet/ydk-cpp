#ifndef _CISCO_IOS_XE_NATIVE_78_
#define _CISCO_IOS_XE_NATIVE_78_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Software : public ydk::Entity
{
    public:
        Software();
        ~Software();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoUpgrade; //type: Native::Software::AutoUpgrade

        std::shared_ptr<Cisco_IOS_XE_native::Native::Software::AutoUpgrade> auto_upgrade;
        
}; // Native::Software


class Native::Software::AutoUpgrade : public ydk::Entity
{
    public:
        AutoUpgrade();
        ~AutoUpgrade();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Software::AutoUpgrade


class Native::Upgrade : public ydk::Entity
{
    public:
        Upgrade();
        ~Upgrade();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fpd; //type: Native::Upgrade::Fpd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Upgrade::Fpd> fpd;
        
}; // Native::Upgrade


class Native::Upgrade::Fpd : public ydk::Entity
{
    public:
        Fpd();
        ~Fpd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty
        ydk::YLeaf path; //type: string

}; // Native::Upgrade::Fpd


class Native::Vtp : public ydk::Entity
{
    public:
        Vtp();
        ~Vtp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: string
        ydk::YLeaf pruning; //type: empty
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf domain; //type: string
        class Interface; //type: Native::Vtp::Interface
        class Password; //type: Native::Vtp::Password
        class Mode; //type: Native::Vtp::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Password> password;
        
}; // Native::Vtp


class Native::Vtp::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf only; //type: empty

}; // Native::Vtp::Interface


class Native::Vtp::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string
        ydk::YLeaf hidden; //type: empty
        ydk::YLeaf secret; //type: empty

}; // Native::Vtp::Password


class Native::Vtp::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Native::Vtp::Mode::Client
        class Off; //type: Native::Vtp::Mode::Off
        class Server; //type: Native::Vtp::Mode::Server
        class Transparent; //type: Native::Vtp::Mode::Transparent

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode::Client> client; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode::Off> off; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode::Server> server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vtp::Mode::Transparent> transparent; // presence node
        
}; // Native::Vtp::Mode


class Native::Vtp::Mode::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mst; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Client


class Native::Vtp::Mode::Off : public ydk::Entity
{
    public:
        Off();
        ~Off();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mst; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Off


class Native::Vtp::Mode::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mst; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Server


class Native::Vtp::Mode::Transparent : public ydk::Entity
{
    public:
        Transparent();
        ~Transparent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mst; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Transparent


class Native::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Logging; //type: Native::Xconnect::Logging

        std::shared_ptr<Cisco_IOS_XE_native::Native::Xconnect::Logging> logging;
        
}; // Native::Xconnect


class Native::Xconnect::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf redundancy; //type: empty
        class Pseudowire; //type: Native::Xconnect::Logging::Pseudowire

        std::shared_ptr<Cisco_IOS_XE_native::Native::Xconnect::Logging::Pseudowire> pseudowire;
        
}; // Native::Xconnect::Logging


class Native::Xconnect::Logging::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: empty

}; // Native::Xconnect::Logging::Pseudowire


class Native::Fabric : public ydk::Entity
{
    public:
        Fabric();
        ~Fabric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SwitchingMode; //type: Native::Fabric::SwitchingMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric::SwitchingMode> switching_mode;
        
}; // Native::Fabric


class Native::Fabric::SwitchingMode : public ydk::Entity
{
    public:
        SwitchingMode();
        ~SwitchingMode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Allow; //type: Native::Fabric::SwitchingMode::Allow
        class Force; //type: Native::Fabric::SwitchingMode::Force

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Allow> allow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Force> force;
        
}; // Native::Fabric::SwitchingMode


class Native::Fabric::SwitchingMode::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bus_mode; //type: empty
        class Truncated; //type: Native::Fabric::SwitchingMode::Allow::Truncated

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Allow::Truncated> truncated; // presence node
        
}; // Native::Fabric::SwitchingMode::Allow


class Native::Fabric::SwitchingMode::Allow::Truncated : public ydk::Entity
{
    public:
        Truncated();
        ~Truncated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint8

}; // Native::Fabric::SwitchingMode::Allow::Truncated


class Native::Fabric::SwitchingMode::Force : public ydk::Entity
{
    public:
        Force();
        ~Force();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bus_mode; //type: empty

}; // Native::Fabric::SwitchingMode::Force


class Native::PortChannel : public ydk::Entity
{
    public:
        PortChannel();
        ~PortChannel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty
        class LoadBalance; //type: Native::PortChannel::LoadBalance
        class LoadBalancing; //type: Native::PortChannel::LoadBalancing

        std::shared_ptr<Cisco_IOS_XE_native::Native::PortChannel::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PortChannel::LoadBalancing> load_balancing;
        
}; // Native::PortChannel


class Native::PortChannel::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_balance; //type: LoadBalance
        class Extended; //type: Native::PortChannel::LoadBalance::Extended

        std::shared_ptr<Cisco_IOS_XE_native::Native::PortChannel::LoadBalance::Extended> extended; // presence node
                class LoadBalance_;

}; // Native::PortChannel::LoadBalance


class Native::PortChannel::LoadBalance::Extended : public ydk::Entity
{
    public:
        Extended();
        ~Extended();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList extended; //type: list of  Extended
        class Extended_;

}; // Native::PortChannel::LoadBalance::Extended


class Native::PortChannel::LoadBalancing : public ydk::Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_manual; //type: empty

}; // Native::PortChannel::LoadBalancing


class Native::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Chain; //type: Native::Key::Chain

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Key::Chain> > chain;
        
}; // Native::Key


class Native::Key::Chain : public ydk::Entity
{
    public:
        Chain();
        ~Chain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf macsec; //type: empty
        class Key_; //type: Native::Key::Chain::Key_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Key::Chain::Key_> > key;
        
}; // Native::Key::Chain


class Native::Key::Chain::Key_ : public ydk::Entity
{
    public:
        Key_();
        ~Key_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cryptographic_algorithm; //type: CryptographicAlgorithm
        class KeyString; //type: Native::Key::Chain::Key_::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Key::Chain::Key_::KeyString> key_string;
                class CryptographicAlgorithm;

}; // Native::Key::Chain::Key_


class Native::Key::Chain::Key_::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Key::Chain::Key_::KeyString


class Native::L2 : public ydk::Entity
{
    public:
        L2();
        ~L2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        class Vfi; //type: Native::L2::Vfi

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2::Vfi> > vfi;
        
}; // Native::L2


class Native::L2::Vfi : public ydk::Entity
{
    public:
        Vfi();
        ~Vfi();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf evc; //type: string
        ydk::YLeaf bridge_domain; //type: uint16
        class Vpn; //type: Native::L2::Vfi::Vpn
        class Neighbor; //type: Native::L2::Vfi::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2::Vfi::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2::Vfi::Vpn> vpn;
                class Mode;

}; // Native::L2::Vfi


class Native::L2::Vfi::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint64

}; // Native::L2::Vfi::Vpn


class Native::L2::Vfi::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf vc_id; //type: uint64
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf pw_class; //type: string
        class Encapsulation;

}; // Native::L2::Vfi::Neighbor


class Native::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Native::System::Mode
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
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::ModeButton> mode_button;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Mtu> mtu;
        
}; // Native::System


class Native::System::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Maintenance; //type: Native::System::Mode::Maintenance

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Mode::Maintenance> maintenance; // presence node
        
}; // Native::System::Mode


class Native::System::Mode::Maintenance : public ydk::Entity
{
    public:
        Maintenance();
        ~Maintenance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfigMaintenance; //type: Native::System::Mode::Maintenance::ConfigMaintenance

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Mode::Maintenance::ConfigMaintenance> config_maintenance;
        
}; // Native::System::Mode::Maintenance


class Native::System::Mode::Maintenance::ConfigMaintenance : public ydk::Entity
{
    public:
        ConfigMaintenance();
        ~ConfigMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failsafe; //type: uint8
        ydk::YLeaf template_; //type: string
        ydk::YLeaf timeout; //type: uint8
        class OnReload; //type: Native::System::Mode::Maintenance::ConfigMaintenance::OnReload

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Mode::Maintenance::ConfigMaintenance::OnReload> on_reload;
        
}; // Native::System::Mode::Maintenance::ConfigMaintenance


class Native::System::Mode::Maintenance::ConfigMaintenance::OnReload : public ydk::Entity
{
    public:
        OnReload();
        ~OnReload();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ResetReason; //type: Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason> reset_reason;
        
}; // Native::System::Mode::Maintenance::ConfigMaintenance::OnReload


class Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason : public ydk::Entity
{
    public:
        ResetReason();
        ~ResetReason();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maintenance; //type: empty

}; // Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason


class Native::System::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Shell; //type: Native::System::Debug::Shell

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Debug::Shell> shell;
        
}; // Native::System::Debug


class Native::System::Debug::Shell : public ydk::Entity
{
    public:
        Shell();
        ~Shell();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Switch_; //type: Native::System::Debug::Shell::Switch_

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Debug::Shell::Switch_> switch_;
        
}; // Native::System::Debug::Shell


class Native::System::Debug::Shell::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_number; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::System::Debug::Shell::Switch_


class Native::System::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Password; //type: Native::System::Disable::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Disable::Password> password;
        
}; // Native::System::Disable


class Native::System::Disable::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Recovery; //type: Native::System::Disable::Password::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Disable::Password::Recovery> recovery;
        
}; // Native::System::Disable::Password


class Native::System::Disable::Password::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Switch_; //type: Native::System::Disable::Password::Recovery::Switch_

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Disable::Password::Recovery::Switch_> switch_;
        
}; // Native::System::Disable::Password::Recovery


class Native::System::Disable::Password::Recovery::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::System::Disable::Password::Recovery::Switch_


class Native::System::Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FanFailAction; //type: Native::System::Environment::FanFailAction
        class Temperature; //type: Native::System::Environment::Temperature

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment::FanFailAction> fan_fail_action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment::Temperature> temperature;
        
}; // Native::System::Environment


class Native::System::Environment::FanFailAction : public ydk::Entity
{
    public:
        FanFailAction();
        ~FanFailAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shut; //type: empty

}; // Native::System::Environment::FanFailAction


class Native::System::Environment::Temperature : public ydk::Entity
{
    public:
        Temperature();
        ~Temperature();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::System::Environment::Temperature::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment::Temperature::Threshold> threshold;
        
}; // Native::System::Environment::Temperature


class Native::System::Environment::Temperature::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Yellow; //type: Native::System::Environment::Temperature::Threshold::Yellow

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Environment::Temperature::Threshold::Yellow> yellow;
        
}; // Native::System::Environment::Temperature::Threshold


class Native::System::Environment::Temperature::Threshold::Yellow : public ydk::Entity
{
    public:
        Yellow();
        ~Yellow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delta_value; //type: uint8
        ydk::YLeaf detail; //type: empty

}; // Native::System::Environment::Temperature::Threshold::Yellow


class Native::System::Fnf : public ydk::Entity
{
    public:
        Fnf();
        ~Fnf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BytesCount; //type: Native::System::Fnf::BytesCount

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Fnf::BytesCount> bytes_count;
        
}; // Native::System::Fnf


class Native::System::Fnf::BytesCount : public ydk::Entity
{
    public:
        BytesCount();
        ~BytesCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf layer2; //type: empty

}; // Native::System::Fnf::BytesCount


class Native::System::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Startupconfig; //type: Native::System::Ignore::Startupconfig

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Ignore::Startupconfig> startupconfig;
        
}; // Native::System::Ignore


class Native::System::Ignore::Startupconfig : public ydk::Entity
{
    public:
        Startupconfig();
        ~Startupconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Switch_; //type: Native::System::Ignore::Startupconfig::Switch_

        std::shared_ptr<Cisco_IOS_XE_native::Native::System::Ignore::Startupconfig::Switch_> switch_;
        
}; // Native::System::Ignore::Startupconfig


class Native::System::Ignore::Startupconfig::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::System::Ignore::Startupconfig::Switch_


class Native::System::ModeButton : public ydk::Entity
{
    public:
        ModeButton();
        ~ModeButton();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reset; //type: empty

}; // Native::System::ModeButton


class Native::System::Mtu : public ydk::Entity
{
    public:
        Mtu();
        ~Mtu();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf jumbo; //type: uint16
        ydk::YLeaf routing; //type: uint16

}; // Native::System::Mtu


class Native::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detect; //type: Native::Errdisable::Detect
        class FlapSetting; //type: Native::Errdisable::FlapSetting
        class Recovery; //type: Native::Errdisable::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Detect> detect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting> flap_setting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Recovery> recovery;
        
}; // Native::Errdisable


class Native::Errdisable::Detect : public ydk::Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cause; //type: Native::Errdisable::Detect::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Detect::Cause> cause;
        
}; // Native::Errdisable::Detect


class Native::Errdisable::Detect::Cause : public ydk::Entity
{
    public:
        Cause();
        ~Cause();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf arp_inspection; //type: empty
        ydk::YLeaf bpduguard; //type: empty
        ydk::YLeaf dhcp_rate_limit; //type: empty
        ydk::YLeaf dtp_flap; //type: empty
        ydk::YLeaf gbic_invalid; //type: empty
        ydk::YLeaf inline_power; //type: empty
        ydk::YLeaf l2ptguard; //type: empty
        ydk::YLeaf link_flap; //type: empty
        ydk::YLeaf loopback; //type: empty
        ydk::YLeaf mlacp_minlink; //type: empty
        ydk::YLeaf pagp_flap; //type: empty
        ydk::YLeaf pppoe_ia_rate_limit; //type: empty
        ydk::YLeaf sfp_config_mismatch; //type: empty
        ydk::YLeaf small_frame; //type: empty
        class SecurityViolation; //type: Native::Errdisable::Detect::Cause::SecurityViolation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Detect::Cause::SecurityViolation> security_violation;
        
}; // Native::Errdisable::Detect::Cause


class Native::Errdisable::Detect::Cause::SecurityViolation : public ydk::Entity
{
    public:
        SecurityViolation();
        ~SecurityViolation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Shutdown; //type: Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown> shutdown;
        
}; // Native::Errdisable::Detect::Cause::SecurityViolation


class Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: empty

}; // Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown


class Native::Errdisable::FlapSetting : public ydk::Entity
{
    public:
        FlapSetting();
        ~FlapSetting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cause; //type: Native::Errdisable::FlapSetting::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting::Cause> cause;
        
}; // Native::Errdisable::FlapSetting


class Native::Errdisable::FlapSetting::Cause : public ydk::Entity
{
    public:
        Cause();
        ~Cause();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DtpFlap; //type: Native::Errdisable::FlapSetting::Cause::DtpFlap
        class LinkFlap; //type: Native::Errdisable::FlapSetting::Cause::LinkFlap
        class PagpFlap; //type: Native::Errdisable::FlapSetting::Cause::PagpFlap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting::Cause::DtpFlap> dtp_flap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting::Cause::LinkFlap> link_flap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::FlapSetting::Cause::PagpFlap> pagp_flap;
        
}; // Native::Errdisable::FlapSetting::Cause


class Native::Errdisable::FlapSetting::Cause::DtpFlap : public ydk::Entity
{
    public:
        DtpFlap();
        ~DtpFlap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_flaps; //type: uint8
        ydk::YLeaf time; //type: uint8

}; // Native::Errdisable::FlapSetting::Cause::DtpFlap


class Native::Errdisable::FlapSetting::Cause::LinkFlap : public ydk::Entity
{
    public:
        LinkFlap();
        ~LinkFlap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_flaps; //type: uint8
        ydk::YLeaf time; //type: uint8

}; // Native::Errdisable::FlapSetting::Cause::LinkFlap


class Native::Errdisable::FlapSetting::Cause::PagpFlap : public ydk::Entity
{
    public:
        PagpFlap();
        ~PagpFlap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_flaps; //type: uint8
        ydk::YLeaf time; //type: uint8

}; // Native::Errdisable::FlapSetting::Cause::PagpFlap


class Native::Errdisable::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        class Cause; //type: Native::Errdisable::Recovery::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Recovery::Cause> cause;
        
}; // Native::Errdisable::Recovery


class Native::Errdisable::Recovery::Cause : public ydk::Entity
{
    public:
        Cause();
        ~Cause();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf arp_inspection; //type: empty
        ydk::YLeaf bpduguard; //type: empty
        ydk::YLeaf channel_misconfig; //type: empty
        ydk::YLeaf dhcp_rate_limit; //type: empty
        ydk::YLeaf dtp_flap; //type: empty
        ydk::YLeaf gbic_invalid; //type: empty
        ydk::YLeaf inline_power; //type: empty
        ydk::YLeaf l2ptguard; //type: empty
        ydk::YLeaf link_flap; //type: empty
        ydk::YLeaf link_monitor_failure; //type: empty
        ydk::YLeaf loopback; //type: empty
        ydk::YLeaf mac_limit; //type: empty
        ydk::YLeaf mlacp_minlink; //type: empty
        ydk::YLeaf pagp_flap; //type: empty
        ydk::YLeaf port_mode_failure; //type: empty
        ydk::YLeaf pppoe_ia_rate_limit; //type: empty
        ydk::YLeaf psp; //type: empty
        ydk::YLeaf psecure_violation; //type: empty
        ydk::YLeaf security_violation; //type: empty
        ydk::YLeaf sfp_config_mismatch; //type: empty
        ydk::YLeaf small_frame; //type: empty
        ydk::YLeaf storm_control; //type: empty
        ydk::YLeaf udld; //type: empty
        ydk::YLeaf unicast_flood; //type: empty
        ydk::YLeaf vmps; //type: empty
        class OamRemoteFailure; //type: Native::Errdisable::Recovery::Cause::OamRemoteFailure

        std::shared_ptr<Cisco_IOS_XE_native::Native::Errdisable::Recovery::Cause::OamRemoteFailure> oam_remote_failure; // presence node
        
}; // Native::Errdisable::Recovery::Cause


class Native::Errdisable::Recovery::Cause::OamRemoteFailure : public ydk::Entity
{
    public:
        OamRemoteFailure();
        ~OamRemoteFailure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical_event; //type: empty
        ydk::YLeaf dying_gasp; //type: empty
        ydk::YLeaf link_fault; //type: empty

}; // Native::Errdisable::Recovery::Cause::OamRemoteFailure


class Native::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Native::Identity::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::Identity::Profile> profile;
        
}; // Native::Identity


class Native::Identity::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Identity::Profile


class Native::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventTrace; //type: Native::Monitor::EventTrace
        class Session; //type: Native::Monitor::Session

        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::EventTrace> event_trace;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session> > session;
        
}; // Native::Monitor


class Native::Monitor::EventTrace : public ydk::Entity
{
    public:
        EventTrace();
        ~EventTrace();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Monitor::EventTrace


class Native::Monitor::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class Destination; //type: Native::Monitor::Session::Destination
        class Filter; //type: Native::Monitor::Session::Filter
        class Source; //type: Native::Monitor::Session::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Filter> filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Source> source;
        
}; // Native::Monitor::Session


class Native::Monitor::Session::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Monitor::Session::Destination::Interface
        class Remote; //type: Native::Monitor::Session::Destination::Remote

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Destination::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Destination::Remote> remote;
        
}; // Native::Monitor::Session::Destination


class Native::Monitor::Session::Destination::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf ingress_encap; //type: IngressEncap
        ydk::YLeaf vlan; //type: uint16
        class Encapsulation;
        class IngressEncap;

}; // Native::Monitor::Session::Destination::Interface


class Native::Monitor::Session::Destination::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Monitor::Session::Destination::Remote


class Native::Monitor::Session::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PacketType; //type: Native::Monitor::Session::Filter::PacketType
        class Ip; //type: Native::Monitor::Session::Filter::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Filter::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Filter::PacketType> packet_type;
        
}; // Native::Monitor::Session::Filter


class Native::Monitor::Session::Filter::PacketType : public ydk::Entity
{
    public:
        PacketType();
        ~PacketType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: Status
        ydk::YLeaf direction; //type: Direction
        class Status;
        class Direction;

}; // Native::Monitor::Session::Filter::PacketType


class Native::Monitor::Session::Filter::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessGroup; //type: Native::Monitor::Session::Filter::Ip::AccessGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Filter::Ip::AccessGroup> access_group;
        
}; // Native::Monitor::Session::Filter::Ip


class Native::Monitor::Session::Filter::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string

}; // Native::Monitor::Session::Filter::Ip::AccessGroup


class Native::Monitor::Session::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Monitor::Session::Source::Interface
        class Vlan; //type: Native::Monitor::Session::Source::Vlan
        class Remote; //type: Native::Monitor::Session::Source::Remote

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Source::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Source::Remote> remote;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Monitor::Session::Source::Vlan> vlan;
        
}; // Native::Monitor::Session::Source


class Native::Monitor::Session::Source::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Monitor::Session::Source::Interface


class Native::Monitor::Session::Source::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Monitor::Session::Source::Vlan


class Native::Monitor::Session::Source::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Monitor::Session::Source::Remote


class Native::TftpServer : public ydk::Entity
{
    public:
        TftpServer();
        ~TftpServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::TftpServer


class Native::RadiusServer : public ydk::Entity
{
    public:
        RadiusServer();
        ~RadiusServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf retransmit; //type: uint8
        ydk::YLeaf timeout; //type: uint16
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


class Native::RadiusServer::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeafList send_attribute; //type: list of  SendAttribute
        class AccessRequest; //type: Native::RadiusServer::Attribute::AccessRequest
        class Attri31; //type: Native::RadiusServer::Attribute::Attri31

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Attribute::AccessRequest> access_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31> attri31;
                class SendAttribute;

}; // Native::RadiusServer::Attribute


class Native::RadiusServer::Attribute::AccessRequest : public ydk::Entity
{
    public:
        AccessRequest();
        ~AccessRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include; //type: empty

}; // Native::RadiusServer::Attribute::AccessRequest


class Native::RadiusServer::Attribute::Attri31 : public ydk::Entity
{
    public:
        Attri31();
        ~Attri31();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attri31List; //type: Native::RadiusServer::Attribute::Attri31::Attri31List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List> > attri31_list;
        
}; // Native::RadiusServer::Attribute::Attri31


class Native::RadiusServer::Attribute::Attri31::Attri31List : public ydk::Entity
{
    public:
        Attri31List();
        ~Attri31List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf calling_station_id; //type: CallingStationId
        class IdMac; //type: Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac
        class IdSend; //type: Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac> id_mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend> id_send;
                class CallingStationId;

}; // Native::RadiusServer::Attribute::Attri31::Attri31List


class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac : public ydk::Entity
{
    public:
        IdMac();
        ~IdMac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: Format
        ydk::YLeaf lu_case; //type: LuCase
        class Format;
        class LuCase;

}; // Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac


class Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend : public ydk::Entity
{
    public:
        IdSend();
        ~IdSend();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nas_port_detail; //type: empty
        ydk::YLeaf mac_only; //type: empty

}; // Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend


class Native::RadiusServer::DeadCriteria : public ydk::Entity
{
    public:
        DeadCriteria();
        ~DeadCriteria();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint8
        ydk::YLeaf tries; //type: uint8

}; // Native::RadiusServer::DeadCriteria


class Native::RadiusServer::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16
        ydk::YLeaf retransmit; //type: uint8
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf key; //type: one of string, enumeration
        ydk::YLeaf clear_key; //type: string
        class Test; //type: Native::RadiusServer::Host::Test

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Host::Test> test;
                class Key;

}; // Native::RadiusServer::Host


class Native::RadiusServer::Host::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Username; //type: Native::RadiusServer::Host::Test::Username

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Host::Test::Username> > username;
        
}; // Native::RadiusServer::Host::Test


class Native::RadiusServer::Host::Test::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Key; //type: Native::RadiusServer::Host::Test::Username::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Host::Test::Username::Key> key;
        
}; // Native::RadiusServer::Host::Test::Username


class Native::RadiusServer::Host::Test::Username::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::RadiusServer::Host::Test::Username::Key


class Native::RadiusServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::RadiusServer::Key


class Native::RadiusServer::SourcePorts : public ydk::Entity
{
    public:
        SourcePorts();
        ~SourcePorts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended; //type: empty

}; // Native::RadiusServer::SourcePorts


class Native::RadiusServer::Vsa : public ydk::Entity
{
    public:
        Vsa();
        ~Vsa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Disallow; //type: Native::RadiusServer::Vsa::Disallow
        class Send; //type: Native::RadiusServer::Vsa::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Disallow> disallow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send> send; // presence node
        
}; // Native::RadiusServer::Vsa


class Native::RadiusServer::Vsa::Disallow : public ydk::Entity
{
    public:
        Disallow();
        ~Disallow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown; //type: empty

}; // Native::RadiusServer::Vsa::Disallow


class Native::RadiusServer::Vsa::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accounting; //type: Native::RadiusServer::Vsa::Send::Accounting
        class Authentication; //type: Native::RadiusServer::Vsa::Send::Authentication
        class CiscoNasPort; //type: Native::RadiusServer::Vsa::Send::CiscoNasPort

        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::Accounting> accounting; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::CiscoNasPort> cisco_nas_port; // presence node
        
}; // Native::RadiusServer::Vsa::Send


class Native::RadiusServer::Vsa::Send::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::Accounting


class Native::RadiusServer::Vsa::Send::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::Authentication


class Native::RadiusServer::Vsa::Send::CiscoNasPort : public ydk::Entity
{
    public:
        CiscoNasPort();
        ~CiscoNasPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::CiscoNasPort


class Native::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Radius::Filter
        class Server; //type: Native::Radius::Server

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Filter> > filter;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server> > server;
        
}; // Native::Radius


class Native::Radius::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf match; //type: Match
        class Match;

}; // Native::Radius::Filter


class Native::Radius::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf retransmit; //type: uint8
        class Address; //type: Native::Radius::Server::Address
        class AutomateTester; //type: Native::Radius::Server::AutomateTester
        class Backoff; //type: Native::Radius::Server::Backoff
        class Key; //type: Native::Radius::Server::Key
        class Pac; //type: Native::Radius::Server::Pac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::AutomateTester> automate_tester;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Backoff> backoff;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Key> key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Pac> pac;
        
}; // Native::Radius::Server


class Native::Radius::Server::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Radius::Server::Address::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Address::Ipv4> ipv4;
        
}; // Native::Radius::Server::Address


class Native::Radius::Server::Address::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16

}; // Native::Radius::Server::Address::Ipv4


class Native::Radius::Server::AutomateTester : public ydk::Entity
{
    public:
        AutomateTester();
        ~AutomateTester();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf at_option; //type: AtOption
        class AtOption;

}; // Native::Radius::Server::AutomateTester


class Native::Radius::Server::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exponential; //type: Native::Radius::Server::Backoff::Exponential

        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Backoff::Exponential> exponential; // presence node
        
}; // Native::Radius::Server::Backoff


class Native::Radius::Server::Backoff::Exponential : public ydk::Entity
{
    public:
        Exponential();
        ~Exponential();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_delay; //type: uint8
        ydk::YLeaf backoff_retry; //type: uint8

}; // Native::Radius::Server::Backoff::Exponential


class Native::Radius::Server::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Radius::Server::Key


class Native::Radius::Server::Pac : public ydk::Entity
{
    public:
        Pac();
        ~Pac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Native::Radius::Server::Pac::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Radius::Server::Pac::Key> key;
        
}; // Native::Radius::Server::Pac


class Native::Radius::Server::Pac::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Radius::Server::Pac::Key


class Native::Zone : public ydk::Entity
{
    public:
        Zone();
        ~Zone();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Security; //type: Native::Zone::Security

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Zone::Security> > security;
        
}; // Native::Zone


class Native::Zone::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf protection; //type: string

}; // Native::Zone::Security


class Native::ZonePair : public ydk::Entity
{
    public:
        ZonePair();
        ~ZonePair();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Security; //type: Native::ZonePair::Security

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ZonePair::Security> > security;
        
}; // Native::ZonePair


class Native::ZonePair::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf destination; //type: string
        ydk::YLeaf description; //type: string
        class ServicePolicy; //type: Native::ZonePair::Security::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::ZonePair::Security::ServicePolicy> service_policy;
        
}; // Native::ZonePair::Security


class Native::ZonePair::Security::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Type; //type: Native::ZonePair::Security::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::ZonePair::Security::ServicePolicy::Type> type;
        
}; // Native::ZonePair::Security::ServicePolicy


class Native::ZonePair::Security::ServicePolicy::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inspect; //type: string

}; // Native::ZonePair::Security::ServicePolicy::Type


class Native::AlarmContact : public ydk::Entity
{
    public:
        AlarmContact();
        ~AlarmContact();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf severity; //type: Severity
        ydk::YLeaf trigger; //type: Trigger
        class Severity;
        class Trigger;

}; // Native::AlarmContact


class Native::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Evc; //type: Native::Ethernet::Evc
        class Lmi; //type: Native::Ethernet::Lmi
        class Cfm; //type: Native::Ethernet::Cfm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm> cfm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Evc> > evc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Lmi> lmi;
        
}; // Native::Ethernet


class Native::Ethernet::Evc : public ydk::Entity
{
    public:
        Evc();
        ~Evc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Ethernet::Evc


class Native::Ethernet::Lmi : public ydk::Entity
{
    public:
        Lmi();
        ~Lmi();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ce; //type: empty
        ydk::YLeaf global; //type: empty

}; // Native::Ethernet::Lmi


class Native::Ethernet::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ieee; //type: empty
        ydk::YLeaf global; //type: empty
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


class Native::Ethernet::Cfm::Ais : public ydk::Entity
{
    public:
        Ais();
        ~Ais();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkStatus; //type: Native::Ethernet::Cfm::Ais::LinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus> link_status;
        
}; // Native::Ethernet::Cfm::Ais


class Native::Ethernet::Cfm::Ais::LinkStatus : public ydk::Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Global; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global> global; // presence node
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus


class Native::Ethernet::Cfm::Ais::LinkStatus::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CfmMode__ConfigAisLinkCfm; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm> cfm_mode__config_ais_link_cfm;
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global


class Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm : public ydk::Entity
{
    public:
        CfmMode__ConfigAisLinkCfm();
        ~CfmMode__ConfigAisLinkCfm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf level; //type: uint8
        class Period; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period> period;
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm


class Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period : public ydk::Entity
{
    public:
        Period();
        ~Period();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tp_1; //type: empty
        ydk::YLeaf tp_60; //type: empty

}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period


class Native::Ethernet::Cfm::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint16
        ydk::YLeaf packet; //type: uint16
        ydk::YLeaf reset; //type: uint16
        class Notification; //type: Native::Ethernet::Cfm::Alarm::Notification

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Alarm::Notification> notification;
        
}; // Native::Ethernet::Cfm::Alarm


class Native::Ethernet::Cfm::Alarm::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf error_xcon; //type: empty
        ydk::YLeaf mac_remote_error_xcon; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remote_error_xcon; //type: empty
        ydk::YLeaf xcon; //type: empty

}; // Native::Ethernet::Cfm::Alarm::Notification


class Native::Ethernet::Cfm::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf level; //type: uint8
        class Service; //type: Native::Ethernet::Cfm::Domain::Service

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain::Service> > service;
        
}; // Native::Ethernet::Cfm::Domain


class Native::Ethernet::Cfm::Domain::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf evc; //type: string
        ydk::YLeaf vlan; //type: uint16
        class ContinuityCheck; //type: Native::Ethernet::Cfm::Domain::Service::ContinuityCheck

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain::Service::ContinuityCheck> continuity_check; // presence node
        
}; // Native::Ethernet::Cfm::Domain::Service


class Native::Ethernet::Cfm::Domain::Service::ContinuityCheck : public ydk::Entity
{
    public:
        ContinuityCheck();
        ~ContinuityCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Ethernet::Cfm::Domain::Service::ContinuityCheck


class Native::Ethernet::Cfm::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ais; //type: empty
        class Alarm; //type: Native::Ethernet::Cfm::Logging::Alarm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Logging::Alarm> alarm;
        
}; // Native::Ethernet::Cfm::Logging


class Native::Ethernet::Cfm::Logging::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf ieee; //type: empty

}; // Native::Ethernet::Cfm::Logging::Alarm


class Native::Ethernet::Cfm::Mep : public ydk::Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crosscheck; //type: Native::Ethernet::Cfm::Mep::Crosscheck

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mep::Crosscheck> crosscheck;
        
}; // Native::Ethernet::Cfm::Mep


class Native::Ethernet::Cfm::Mep::Crosscheck : public ydk::Entity
{
    public:
        Crosscheck();
        ~Crosscheck();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_delay; //type: uint16

}; // Native::Ethernet::Cfm::Mep::Crosscheck


class Native::Ethernet::Cfm::Mip : public ydk::Entity
{
    public:
        Mip();
        ~Mip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter; //type: empty
        class AutoCreate; //type: Native::Ethernet::Cfm::Mip::AutoCreate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate> auto_create;
        
}; // Native::Ethernet::Cfm::Mip


class Native::Ethernet::Cfm::Mip::AutoCreate : public ydk::Entity
{
    public:
        AutoCreate();
        ~AutoCreate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Ethernet::Cfm::Mip::AutoCreate::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate::Level> level;
        
}; // Native::Ethernet::Cfm::Mip::AutoCreate


class Native::Ethernet::Cfm::Mip::AutoCreate::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MefNum; //type: Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum> > mef_num;
        
}; // Native::Ethernet::Cfm::Mip::AutoCreate::Level


class Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum : public ydk::Entity
{
    public:
        MefNum();
        ~MefNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mef_num; //type: uint8
        ydk::YLeaf evc; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum


class Native::Ethernet::Cfm::Traceroute : public ydk::Entity
{
    public:
        Traceroute();
        ~Traceroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cache; //type: Native::Ethernet::Cfm::Traceroute::Cache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ethernet::Cfm::Traceroute::Cache> cache; // presence node
        
}; // Native::Ethernet::Cfm::Traceroute


class Native::Ethernet::Cfm::Traceroute::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf size; //type: uint16

}; // Native::Ethernet::Cfm::Traceroute::Cache


class Native::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::AccessList

class Native::PortChannel::LoadBalance::LoadBalance_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_ip;
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf dst_mixed_ip_port;
        static const ydk::Enum::YLeaf dst_port;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf src_dst_ip;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_dst_mixed_ip_port;
        static const ydk::Enum::YLeaf src_dst_port;
        static const ydk::Enum::YLeaf src_ip;
        static const ydk::Enum::YLeaf src_mac;
        static const ydk::Enum::YLeaf src_mixed_ip_port;
        static const ydk::Enum::YLeaf src_port;

};

class Native::PortChannel::LoadBalance::Extended::Extended_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_ip;
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf dst_port;
        static const ydk::Enum::YLeaf ipv6_label;
        static const ydk::Enum::YLeaf l3_proto;
        static const ydk::Enum::YLeaf src_ip;
        static const ydk::Enum::YLeaf src_mac;
        static const ydk::Enum::YLeaf src_port;

};

class Native::Key::Chain::Key_::CryptographicAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aes_128_cmac;
        static const ydk::Enum::YLeaf aes_256_cmac;
        static const ydk::Enum::YLeaf hmac_sha_1;
        static const ydk::Enum::YLeaf hmac_sha_256;
        static const ydk::Enum::YLeaf hmac_sha_384;
        static const ydk::Enum::YLeaf hmac_sha_512;
        static const ydk::Enum::YLeaf md5;

};

class Native::Key::Chain::Key_::KeyString::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::L2::Vfi::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf autodiscovery;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::L2::Vfi::Neighbor::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf mpls;

};

class Native::Monitor::Session::Destination::Interface::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf replicate;

};

class Native::Monitor::Session::Destination::Interface::IngressEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf untagged;

};

class Native::Monitor::Session::Filter::PacketType::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf good;
        static const ydk::Enum::YLeaf bad;

};

class Native::Monitor::Session::Filter::PacketType::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf tx;

};

class Native::Monitor::Session::Source::Interface::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf tx;

};

class Native::Monitor::Session::Source::Vlan::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf tx;

};

class Native::RadiusServer::Attribute::SendAttribute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_for_login_auth;
        static const ydk::Enum::YLeaf include_in_access_req;
        static const ydk::Enum::YLeaf support_multiple;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf send;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::Format : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ietf;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::RadiusServer::Host::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::RadiusServer::Host::Test::Username::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::RadiusServer::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Radius::Filter::Match : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any;

};

class Native::Radius::Server::AutomateTester::AtOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf probe_on;

};

class Native::Radius::Server::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_5;

};

class Native::Radius::Server::Pac::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::AlarmContact::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;

};

class Native::AlarmContact::Trigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closed;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_78_ */

