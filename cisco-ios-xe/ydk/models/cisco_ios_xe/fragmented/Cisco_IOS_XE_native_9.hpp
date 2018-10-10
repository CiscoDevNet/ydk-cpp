#ifndef _CISCO_IOS_XE_NATIVE_9_
#define _CISCO_IOS_XE_NATIVE_9_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_8.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::Ssh::Client::Algorithm::Encryption : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf aes128_ctr; //type: empty
        ydk::YLeaf aes192_ctr; //type: empty
        ydk::YLeaf aes256_ctr; //type: empty

}; // Native::Ip::Ssh::Client::Algorithm::Encryption


class Native::Ip::Ssh::Logging : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf events; //type: empty

}; // Native::Ip::Ssh::Logging


class Native::Ip::Ssh::PubkeyChain : public ydk::Entity
{
    public:
        PubkeyChain();
        ~PubkeyChain();

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

        class Username; //type: Native::Ip::Ssh::PubkeyChain::Username

        ydk::YList username;
        
}; // Native::Ip::Ssh::PubkeyChain


class Native::Ip::Ssh::PubkeyChain::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

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
        class KeyHash; //type: Native::Ip::Ssh::PubkeyChain::Username::KeyHash

        ydk::YList key_hash;
        
}; // Native::Ip::Ssh::PubkeyChain::Username


class Native::Ip::Ssh::PubkeyChain::Username::KeyHash : public ydk::Entity
{
    public:
        KeyHash();
        ~KeyHash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_type; //type: KeyType
        ydk::YLeaf key_hash_value; //type: string
        class KeyType;

}; // Native::Ip::Ssh::PubkeyChain::Username::KeyHash


class Native::Ip::Ssh::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        ydk::YLeaf keypair_name; //type: string

}; // Native::Ip::Ssh::Rsa


class Native::Ip::Ssh::Server : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Algorithm; //type: Native::Ip::Ssh::Server::Algorithm
        class Peruser; //type: Native::Ip::Ssh::Server::Peruser

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Algorithm> algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Peruser> peruser;
        
}; // Native::Ip::Ssh::Server


class Native::Ip::Ssh::Server::Algorithm : public ydk::Entity
{
    public:
        Algorithm();
        ~Algorithm();

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

        class Encryption; //type: Native::Ip::Ssh::Server::Algorithm::Encryption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Algorithm::Encryption> encryption;
        
}; // Native::Ip::Ssh::Server::Algorithm


class Native::Ip::Ssh::Server::Algorithm::Encryption : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf aes128_ctr; //type: empty
        ydk::YLeaf aes192_ctr; //type: empty
        ydk::YLeaf aes256_ctr; //type: empty

}; // Native::Ip::Ssh::Server::Algorithm::Encryption


class Native::Ip::Ssh::Server::Peruser : public ydk::Entity
{
    public:
        Peruser();
        ~Peruser();

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

        class Session; //type: Native::Ip::Ssh::Server::Peruser::Session

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Peruser::Session> session;
        
}; // Native::Ip::Ssh::Server::Peruser


class Native::Ip::Ssh::Server::Peruser::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf limit; //type: uint8

}; // Native::Ip::Ssh::Server::Peruser::Session


class Native::Ip::Ssh::Port : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf port_no; //type: uint16
        ydk::YLeaf low_rotary; //type: uint8
        ydk::YLeaf high_rotary; //type: uint8

}; // Native::Ip::Ssh::Port


class Native::Ip::Tcp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf selective_ack; //type: empty
        ydk::YLeaf synwait_time; //type: uint16
        ydk::YLeaf timestamp; //type: empty
        ydk::YLeaf window_size; //type: uint32
        class PathMtuDiscovery; //type: Native::Ip::Tcp::PathMtuDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tcp::PathMtuDiscovery> path_mtu_discovery; // presence node
        
}; // Native::Ip::Tcp


class Native::Ip::Tcp::PathMtuDiscovery : public ydk::Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

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

        ydk::YLeaf age_timer; //type: one of uint8, enumeration
        class AgeTimer;

}; // Native::Ip::Tcp::PathMtuDiscovery


class Native::Ip::Tftp : public ydk::Entity
{
    public:
        Tftp();
        ~Tftp();

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

        ydk::YLeaf blocksize; //type: uint16
        class BootInterface; //type: Native::Ip::Tftp::BootInterface
        class SourceInterface; //type: Native::Ip::Tftp::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface> boot_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface> source_interface;
        
}; // Native::Ip::Tftp


class Native::Ip::Tftp::BootInterface : public ydk::Entity
{
    public:
        BootInterface();
        ~BootInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Tftp::BootInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Tftp::BootInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Tftp::BootInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tftp::BootInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tftp::BootInterface


class Native::Ip::Tftp::BootInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Tftp::BootInterface::ATMSubinterface


class Native::Ip::Tftp::BootInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Tftp::BootInterface::ATMACRsubinterface


class Native::Ip::Tftp::BootInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Tftp::BootInterface::LISPSubinterface


class Native::Ip::Tftp::BootInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Tftp::BootInterface::PortChannelSubinterface


class Native::Ip::Tftp::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Tftp::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Tftp::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Tftp::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tftp::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tftp::SourceInterface


class Native::Ip::Tftp::SourceInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Tftp::SourceInterface::ATMSubinterface


class Native::Ip::Tftp::SourceInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Tftp::SourceInterface::ATMACRsubinterface


class Native::Ip::Tftp::SourceInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Tftp::SourceInterface::LISPSubinterface


class Native::Ip::Tftp::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Tftp::SourceInterface::PortChannelSubinterface


class Native::Ip::AccessList : public ydk::Entity
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

        ydk::YLeaf match_local_traffic; //type: empty
        ydk::YLeaf persistent; //type: empty
        class Standard; //type: Native::Ip::AccessList::Standard
        class RoleBased; //type: Native::Ip::AccessList::RoleBased
        class Extended; //type: Native::Ip::AccessList::Extended
        class Helper; //type: Native::Ip::AccessList::Helper
        class LogUpdate; //type: Native::Ip::AccessList::LogUpdate
        class Logging; //type: Native::Ip::AccessList::Logging
        class Resequence; //type: Native::Ip::AccessList::Resequence

        ydk::YList standard;
        ydk::YList role_based;
        ydk::YList extended;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Helper> helper;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::LogUpdate> log_update;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Resequence> resequence;
        
}; // Native::Ip::AccessList


class Native::Ip::AccessList::Standard : public ydk::Entity
{
    public:
        Standard();
        ~Standard();

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

        ydk::YLeaf name; //type: one of uint16, string
        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::AccessListSeqRule
        class Default; //type: Native::Ip::AccessList::Standard::Default

        ydk::YList access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default> default_;
        
}; // Native::Ip::AccessList::Standard


class Native::Ip::AccessList::Standard::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class Deny; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule


class Native::Ip::AccessList::Standard::AccessListSeqRule::Deny : public ydk::Entity
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

        class StdAce; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::AccessListSeqRule::Permit : public ydk::Entity
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

        class StdAce; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce


class Native::Ip::AccessList::Standard::Default : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule

        ydk::YList access_list_seq_rule;
        
}; // Native::Ip::AccessList::Standard::Default


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class Deny; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny : public ydk::Entity
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

        class StdAce; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit : public ydk::Entity
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

        class StdAce; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce


class Native::Ip::AccessList::RoleBased : public ydk::Entity
{
    public:
        RoleBased();
        ~RoleBased();

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
        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule
        class Default; //type: Native::Ip::AccessList::RoleBased::Default

        ydk::YList access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default> default_;
        
}; // Native::Ip::AccessList::RoleBased


class Native::Ip::AccessList::RoleBased::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny
        class Src; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src
        class Dst; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src> src;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst> dst;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src : public ydk::Entity
{
    public:
        Src();
        ~Src();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        class Dst; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst> dst;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst : public ydk::Entity
{
    public:
        Dst();
        ~Dst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst : public ydk::Entity
{
    public:
        Dst();
        ~Dst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst


class Native::Ip::AccessList::RoleBased::Default : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule

        ydk::YList access_list_seq_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny
        class Src; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src
        class Dst; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src> src;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst> dst;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src : public ydk::Entity
{
    public:
        Src();
        ~Src();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        class Dst; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst> dst;
        
}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst : public ydk::Entity
{
    public:
        Dst();
        ~Dst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst : public ydk::Entity
{
    public:
        Dst();
        ~Dst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst


class Native::Ip::AccessList::Extended : public ydk::Entity
{
    public:
        Extended();
        ~Extended();

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

        ydk::YLeaf name; //type: one of uint16, string
        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::AccessListSeqRule
        class Default; //type: Native::Ip::AccessList::Extended::Default

        ydk::YList access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default> default_;
        
}; // Native::Ip::AccessList::Extended


class Native::Ip::AccessList::Extended::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::AccessListSeqRule


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf object_group; //type: string
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf dest_ipv4_address; //type: string
        ydk::YLeaf dest_mask; //type: string
        ydk::YLeaf dst_any; //type: empty
        ydk::YLeaf dst_host; //type: string
        ydk::YLeaf dst_object_group; //type: string
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny> match_any;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Extended::Default : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule

        ydk::YList access_list_seq_rule;
        
}; // Native::Ip::AccessList::Extended::Default


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf object_group; //type: string
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf dest_ipv4_address; //type: string
        ydk::YLeaf dest_mask; //type: string
        ydk::YLeaf dst_any; //type: empty
        ydk::YLeaf dst_host; //type: string
        ydk::YLeaf dst_object_group; //type: string
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny> match_any;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Helper : public ydk::Entity
{
    public:
        Helper();
        ~Helper();

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

        ydk::YLeaf egress; //type: empty
        ydk::YLeaf check; //type: empty

}; // Native::Ip::AccessList::Helper


class Native::Ip::AccessList::LogUpdate : public ydk::Entity
{
    public:
        LogUpdate();
        ~LogUpdate();

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

        ydk::YLeaf threshold; //type: uint64

}; // Native::Ip::AccessList::LogUpdate


class Native::Ip::AccessList::Logging : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf hash_generation; //type: empty
        ydk::YLeaf interval; //type: uint64

}; // Native::Ip::AccessList::Logging


class Native::Ip::AccessList::Resequence : public ydk::Entity
{
    public:
        Resequence();
        ~Resequence();

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

        ydk::YLeaf numbers; //type: union
        ydk::YLeaf start_seq_no; //type: uint64
        ydk::YLeaf step_seq_no; //type: uint64

}; // Native::Ip::AccessList::Resequence


class Native::Ip::Device : public ydk::Entity
{
    public:
        Device();
        ~Device();

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

        class Tracking; //type: Native::Ip::Device::Tracking

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking> tracking; // presence node
        
}; // Native::Ip::Device


class Native::Ip::Device::Tracking : public ydk::Entity
{
    public:
        Tracking();
        ~Tracking();

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

        ydk::YLeaf trace_buffer; //type: empty
        class Probe; //type: Native::Ip::Device::Tracking::Probe

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe> probe;
        
}; // Native::Ip::Device::Tracking


class Native::Ip::Device::Tracking::Probe : public ydk::Entity
{
    public:
        Probe();
        ~Probe();

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

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf delay; //type: uint8
        ydk::YLeaf interval; //type: uint32
        class AutoSource; //type: Native::Ip::Device::Tracking::Probe::AutoSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe::AutoSource> auto_source; // presence node
        
}; // Native::Ip::Device::Tracking::Probe


class Native::Ip::Device::Tracking::Probe::AutoSource : public ydk::Entity
{
    public:
        AutoSource();
        ~AutoSource();

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

        ydk::YLeaf override; //type: empty
        class Fallback; //type: Native::Ip::Device::Tracking::Probe::AutoSource::Fallback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe::AutoSource::Fallback> fallback;
        
}; // Native::Ip::Device::Tracking::Probe::AutoSource


class Native::Ip::Device::Tracking::Probe::AutoSource::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

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

        ydk::YLeaf src_ip; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Ip::Device::Tracking::Probe::AutoSource::Fallback


class Native::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

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

        class SnoopingConf; //type: Native::Ip::Igmp::SnoopingConf
        class Snooping; //type: Native::Ip::Igmp::Snooping
        class SsmMap; //type: Native::Ip::Igmp::SsmMap
        class Vrf; //type: Native::Ip::Igmp::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::SnoopingConf> snooping_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping> snooping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap> ssm_map;
        ydk::YList vrf;
        
}; // Native::Ip::Igmp


class Native::Ip::Igmp::SnoopingConf : public ydk::Entity
{
    public:
        SnoopingConf();
        ~SnoopingConf();

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

        ydk::YLeaf snooping; //type: boolean

}; // Native::Ip::Igmp::SnoopingConf


class Native::Ip::Igmp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

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

        ydk::YLeaf l2_entry_limit; //type: uint32
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf report_suppression; //type: empty
        ydk::YLeaf robustness_variable; //type: uint8
        class Check; //type: Native::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::Ip::Igmp::Snooping::ExplicitTracking
        class Querier; //type: Native::Ip::Igmp::Snooping::Querier
        class Tcn; //type: Native::Ip::Igmp::Snooping::Tcn
        class Vlan; //type: Native::Ip::Igmp::Snooping::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier> querier; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn> tcn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan> vlan;
        
}; // Native::Ip::Igmp::Snooping


class Native::Ip::Igmp::Snooping::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

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

        ydk::YLeaf rtr_alert_option; //type: empty
        ydk::YLeaf ttl; //type: empty

}; // Native::Ip::Igmp::Snooping::Check


class Native::Ip::Igmp::Snooping::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

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

        ydk::YLeaf limit; //type: uint32

}; // Native::Ip::Igmp::Snooping::ExplicitTracking


class Native::Ip::Igmp::Snooping::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf max_response_time; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf version; //type: uint8
        class Tcn; //type: Native::Ip::Igmp::Snooping::Querier::Tcn
        class Timer; //type: Native::Ip::Igmp::Snooping::Querier::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Tcn> tcn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Timer> timer;
        
}; // Native::Ip::Igmp::Snooping::Querier


class Native::Ip::Igmp::Snooping::Querier::Tcn : public ydk::Entity
{
    public:
        Tcn();
        ~Tcn();

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

        class Query; //type: Native::Ip::Igmp::Snooping::Querier::Tcn::Query

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Querier::Tcn


class Native::Ip::Igmp::Snooping::Querier::Tcn::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf interval; //type: uint8

}; // Native::Ip::Igmp::Snooping::Querier::Tcn::Query


class Native::Ip::Igmp::Snooping::Querier::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

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

        ydk::YLeaf expiry; //type: uint16

}; // Native::Ip::Igmp::Snooping::Querier::Timer


class Native::Ip::Igmp::Snooping::Tcn : public ydk::Entity
{
    public:
        Tcn();
        ~Tcn();

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

        class Flood; //type: Native::Ip::Igmp::Snooping::Tcn::Flood
        class Query; //type: Native::Ip::Igmp::Snooping::Tcn::Query

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Flood> flood;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Tcn


class Native::Ip::Igmp::Snooping::Tcn::Flood : public ydk::Entity
{
    public:
        Flood();
        ~Flood();

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

        class Query; //type: Native::Ip::Igmp::Snooping::Tcn::Flood::Query

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Flood::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Tcn::Flood


class Native::Ip::Igmp::Snooping::Tcn::Flood::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf count; //type: uint8

}; // Native::Ip::Igmp::Snooping::Tcn::Flood::Query


class Native::Ip::Igmp::Snooping::Tcn::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf solicit; //type: empty

}; // Native::Ip::Igmp::Snooping::Tcn::Query


class Native::Ip::Igmp::Snooping::Vlan : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Range; //type: Native::Ip::Igmp::Snooping::Vlan::Range

        ydk::YList range;
        
}; // Native::Ip::Igmp::Snooping::Vlan


class Native::Ip::Igmp::Snooping::Vlan::Range : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf immediate_leave; //type: empty
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf robustness_variable; //type: uint8
        class Mrouter; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter
        class Querier; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier
        class Static; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier> querier; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Static> static_;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range


class Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter : public ydk::Entity
{
    public:
        Mrouter();
        ~Mrouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        class Learn; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn> learn;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter


class Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn : public ydk::Entity
{
    public:
        Learn();
        ~Learn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cgmp; //type: empty
        ydk::YLeaf pim_dvmrp; //type: empty

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

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
        ydk::YLeaf max_response_time; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf version; //type: uint8
        class Tcn; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn
        class Timer; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn> tcn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer> timer;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn : public ydk::Entity
{
    public:
        Tcn();
        ~Tcn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Query; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf interval; //type: uint8

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expiry; //type: uint16

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer


class Native::Ip::Igmp::Snooping::Vlan::Range::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4

        ydk::YList ipv4;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Static


class Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf interface; //type: string

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4


class Native::Ip::Igmp::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

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

        ydk::YLeaf enable; //type: empty
        class Query; //type: Native::Ip::Igmp::SsmMap::Query
        class Static; //type: Native::Ip::Igmp::SsmMap::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap::Query> query;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap::Static> static_;
        
}; // Native::Ip::Igmp::SsmMap


class Native::Ip::Igmp::SsmMap::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf dns; //type: empty

}; // Native::Ip::Igmp::SsmMap::Query


class Native::Ip::Igmp::SsmMap::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf source_ip; //type: string

}; // Native::Ip::Igmp::SsmMap::Static


class Native::Ip::Igmp::Vrf : public ydk::Entity
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
        class SsmMap; //type: Native::Ip::Igmp::Vrf::SsmMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Vrf::SsmMap> ssm_map;
        
}; // Native::Ip::Igmp::Vrf


class Native::Ip::Igmp::Vrf::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Static; //type: Native::Ip::Igmp::Vrf::SsmMap::Static

        ydk::YList static_;
        
}; // Native::Ip::Igmp::Vrf::SsmMap


class Native::Ip::Igmp::Vrf::SsmMap::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddress; //type: string
        ydk::YLeaf aclname; //type: string

}; // Native::Ip::Igmp::Vrf::SsmMap::Static


class Native::Ip::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

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

        class SourceInterface; //type: Native::Ip::Radius::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface> source_interface;
        
}; // Native::Ip::Radius


class Native::Ip::Radius::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Radius::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Radius::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Radius::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Radius::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Radius::SourceInterface


class Native::Ip::Radius::SourceInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Radius::SourceInterface::ATMSubinterface


class Native::Ip::Radius::SourceInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Radius::SourceInterface::ATMACRsubinterface


class Native::Ip::Radius::SourceInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Radius::SourceInterface::LISPSubinterface


class Native::Ip::Radius::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Radius::SourceInterface::PortChannelSubinterface


class Native::Ip::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

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

        class SourceInterface; //type: Native::Ip::Tacacs::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface> source_interface;
        
}; // Native::Ip::Tacacs


class Native::Ip::Tacacs::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Tacacs::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Tacacs::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tacacs::SourceInterface


class Native::Ip::Tacacs::SourceInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Tacacs::SourceInterface::ATMSubinterface


class Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface


class Native::Ip::Tacacs::SourceInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Tacacs::SourceInterface::LISPSubinterface


class Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface


class Native::Ip::Nbar : public ydk::Entity
{
    public:
        Nbar();
        ~Nbar();

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

        ydk::YLeaf http_services; //type: empty
        class Attribute; //type: Native::Ip::Nbar::Attribute
        class AttributeMap; //type: Native::Ip::Nbar::AttributeMap
        class AttributeSet; //type: Native::Ip::Nbar::AttributeSet
        class Classification; //type: Native::Ip::Nbar::Classification
        class Custom; //type: Native::Ip::Nbar::Custom
        class ProtocolPack; //type: Native::Ip::Nbar::ProtocolPack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute> attribute;
        ydk::YList attribute_map;
        ydk::YList attribute_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification> classification;
        ydk::YList custom;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::ProtocolPack> protocol_pack;
        
}; // Native::Ip::Nbar


class Native::Ip::Nbar::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

        class ApplicationGroup; //type: Native::Ip::Nbar::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Ip::Nbar::Attribute::ApplicationSet
        class Category; //type: Native::Ip::Nbar::Attribute::Category
        class SubCategory; //type: Native::Ip::Nbar::Attribute::SubCategory

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationSet> application_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::Category> category;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::SubCategory> sub_category;
        
}; // Native::Ip::Nbar::Attribute


class Native::Ip::Nbar::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

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

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationGroup::Custom

        ydk::YList custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationGroup


class Native::Ip::Nbar::Attribute::ApplicationGroup::Custom : public ydk::Entity
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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationGroup::Custom


class Native::Ip::Nbar::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

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

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationSet::Custom

        ydk::YList custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationSet


class Native::Ip::Nbar::Attribute::ApplicationSet::Custom : public ydk::Entity
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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationSet::Custom


class Native::Ip::Nbar::Attribute::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

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

        class Custom; //type: Native::Ip::Nbar::Attribute::Category::Custom

        ydk::YList custom;
        
}; // Native::Ip::Nbar::Attribute::Category


class Native::Ip::Nbar::Attribute::Category::Custom : public ydk::Entity
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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::Category::Custom


class Native::Ip::Nbar::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

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

        class Custom; //type: Native::Ip::Nbar::Attribute::SubCategory::Custom

        ydk::YList custom;
        
}; // Native::Ip::Nbar::Attribute::SubCategory


class Native::Ip::Nbar::Attribute::SubCategory::Custom : public ydk::Entity
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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::SubCategory::Custom


class Native::Ip::Nbar::AttributeMap : public ydk::Entity
{
    public:
        AttributeMap();
        ~AttributeMap();

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
        class Attribute; //type: Native::Ip::Nbar::AttributeMap::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeMap::Attribute> attribute;
        
}; // Native::Ip::Nbar::AttributeMap


class Native::Ip::Nbar::AttributeMap::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_group; //type: string
        ydk::YLeaf application_set; //type: string
        ydk::YLeaf business_relevance; //type: string
        ydk::YLeaf category; //type: string
        ydk::YLeaf encrypted; //type: string
        ydk::YLeaf sub_category; //type: string
        ydk::YLeaf traffic_class; //type: string
        ydk::YLeaf tunnel; //type: string

}; // Native::Ip::Nbar::AttributeMap::Attribute


class Native::Ip::Nbar::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

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

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf profile_name; //type: string

}; // Native::Ip::Nbar::AttributeSet


class Native::Ip::Nbar::Classification : public ydk::Entity
{
    public:
        Classification();
        ~Classification();

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

        class AutoLearn; //type: Native::Ip::Nbar::Classification::AutoLearn
        class Dns; //type: Native::Ip::Nbar::Classification::Dns
        class Granularity; //type: Native::Ip::Nbar::Classification::Granularity
        class TunneledTraffic; //type: Native::Ip::Nbar::Classification::TunneledTraffic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn> auto_learn; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity> granularity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::TunneledTraffic> tunneled_traffic;
        
}; // Native::Ip::Nbar::Classification


class Native::Ip::Nbar::Classification::AutoLearn : public ydk::Entity
{
    public:
        AutoLearn();
        ~AutoLearn();

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

        ydk::YLeaf top_asymmetric_socket; //type: empty
        class TopHosts; //type: Native::Ip::Nbar::Classification::AutoLearn::TopHosts
        class TopPorts; //type: Native::Ip::Nbar::Classification::AutoLearn::TopPorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn::TopHosts> top_hosts; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn::TopPorts> top_ports; // presence node
        
}; // Native::Ip::Nbar::Classification::AutoLearn


class Native::Ip::Nbar::Classification::AutoLearn::TopHosts : public ydk::Entity
{
    public:
        TopHosts();
        ~TopHosts();

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

        ydk::YLeaf sample_rate; //type: uint16

}; // Native::Ip::Nbar::Classification::AutoLearn::TopHosts


class Native::Ip::Nbar::Classification::AutoLearn::TopPorts : public ydk::Entity
{
    public:
        TopPorts();
        ~TopPorts();

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

        ydk::YLeaf sample_rate; //type: uint16

}; // Native::Ip::Nbar::Classification::AutoLearn::TopPorts


class Native::Ip::Nbar::Classification::Dns : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf classify_by_domain; //type: empty
        class Learning; //type: Native::Ip::Nbar::Classification::Dns::Learning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Dns::Learning> learning; // presence node
        
}; // Native::Ip::Nbar::Classification::Dns


class Native::Ip::Nbar::Classification::Dns::Learning : public ydk::Entity
{
    public:
        Learning();
        ~Learning();

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

        ydk::YLeaf guard; //type: empty

}; // Native::Ip::Nbar::Classification::Dns::Learning


class Native::Ip::Nbar::Classification::Granularity : public ydk::Entity
{
    public:
        Granularity();
        ~Granularity();

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

        ydk::YLeaf coarse_grain; //type: empty
        class FineGrain; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain> fine_grain; // presence node
        
}; // Native::Ip::Nbar::Classification::Granularity


class Native::Ip::Nbar::Classification::Granularity::FineGrain : public ydk::Entity
{
    public:
        FineGrain();
        ~FineGrain();

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

        class Attribute; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute
        class Protocol; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute> attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol> protocol;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

        class ApplicationGroup; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet
        class BusinessRelevance; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance
        class Category; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category
        class Encrypted; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted
        class SubCategory; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory
        class TrafficClass; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass
        class Tunnel; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel

        ydk::YList application_group;
        ydk::YList application_set;
        ydk::YList business_relevance;
        ydk::YList category;
        ydk::YList encrypted;
        ydk::YList sub_category;
        ydk::YList traffic_class;
        ydk::YList tunnel;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance : public ydk::Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory

class Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ssh_rsa;

};

class Native::Ip::Tcp::PathMtuDiscovery::AgeTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinite;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_9_ */

