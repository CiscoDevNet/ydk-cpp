#ifndef _CISCO_IOS_XE_NATIVE_8_
#define _CISCO_IOS_XE_NATIVE_8_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_7.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Algorithm> algorithm;
        
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard> > standard;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased> > role_based;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended> > extended;
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
        class Default_; //type: Native::Ip::AccessList::Standard::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_> default_;
        
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


class Native::Ip::AccessList::Standard::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::Standard::Default_


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule : public ydk::Entity
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
        class Deny; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny : public ydk::Entity
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

        class StdAce; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce : public ydk::Entity
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

}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit : public ydk::Entity
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

        class StdAce; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce : public ydk::Entity
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

}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce


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
        class Default_; //type: Native::Ip::AccessList::RoleBased::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_> default_;
        
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny> match_any;
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


class Native::Ip::AccessList::RoleBased::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default_


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule : public ydk::Entity
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
        class AceRule; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule : public ydk::Entity
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
        class Ttl; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny> match_any;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
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
        class Range; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
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

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
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

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny


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
        class Default_; //type: Native::Ip::AccessList::Extended::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_> default_;
        
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


class Native::Ip::AccessList::Extended::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::Extended::Default_


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule : public ydk::Entity
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
        class AceRule; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule : public ydk::Entity
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
        class Ttl; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny> match_any;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
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
        class Range; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
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

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
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

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny


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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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


class Native::Ip::CommunityList : public ydk::Entity
{
    public:
        CommunityList();
        ~CommunityList();

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

        class NumberStandard; //type: Native::Ip::CommunityList::NumberStandard
        class NumberExpanded; //type: Native::Ip::CommunityList::NumberExpanded
        class Expanded; //type: Native::Ip::CommunityList::Expanded
        class Standard; //type: Native::Ip::CommunityList::Standard

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard> > number_standard;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded> > number_expanded;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded> > expanded;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard> > standard;
        
}; // Native::Ip::CommunityList


class Native::Ip::CommunityList::NumberStandard : public ydk::Entity
{
    public:
        NumberStandard();
        ~NumberStandard();

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

        ydk::YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::CommunityList::NumberStandard::Deny
        class Permit; //type: Native::Ip::CommunityList::NumberStandard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard::Permit> permit;
        
}; // Native::Ip::CommunityList::NumberStandard


class Native::Ip::CommunityList::NumberStandard::Deny : public ydk::Entity
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

        ydk::YLeafList deny_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::NumberStandard::Deny


class Native::Ip::CommunityList::NumberStandard::Permit : public ydk::Entity
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

        ydk::YLeafList permit_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::NumberStandard::Permit


class Native::Ip::CommunityList::NumberExpanded : public ydk::Entity
{
    public:
        NumberExpanded();
        ~NumberExpanded();

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

        ydk::YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::CommunityList::NumberExpanded::Deny
        class Permit; //type: Native::Ip::CommunityList::NumberExpanded::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded::Permit> permit;
        
}; // Native::Ip::CommunityList::NumberExpanded


class Native::Ip::CommunityList::NumberExpanded::Deny : public ydk::Entity
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

        ydk::YLeafList deny_list; //type: list of  string

}; // Native::Ip::CommunityList::NumberExpanded::Deny


class Native::Ip::CommunityList::NumberExpanded::Permit : public ydk::Entity
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

        ydk::YLeafList permit_list; //type: list of  string

}; // Native::Ip::CommunityList::NumberExpanded::Permit


class Native::Ip::CommunityList::Expanded : public ydk::Entity
{
    public:
        Expanded();
        ~Expanded();

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
        class Deny; //type: Native::Ip::CommunityList::Expanded::Deny
        class Permit; //type: Native::Ip::CommunityList::Expanded::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded::Permit> permit;
        
}; // Native::Ip::CommunityList::Expanded


class Native::Ip::CommunityList::Expanded::Deny : public ydk::Entity
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

        ydk::YLeafList deny_list; //type: list of  string

}; // Native::Ip::CommunityList::Expanded::Deny


class Native::Ip::CommunityList::Expanded::Permit : public ydk::Entity
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

        ydk::YLeafList permit_list; //type: list of  string

}; // Native::Ip::CommunityList::Expanded::Permit


class Native::Ip::CommunityList::Standard : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Deny; //type: Native::Ip::CommunityList::Standard::Deny
        class Permit; //type: Native::Ip::CommunityList::Standard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard::Permit> permit;
        
}; // Native::Ip::CommunityList::Standard


class Native::Ip::CommunityList::Standard::Deny : public ydk::Entity
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

        ydk::YLeafList deny_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::Standard::Deny


class Native::Ip::CommunityList::Standard::Permit : public ydk::Entity
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

        ydk::YLeafList permit_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::Standard::Permit


class Native::Ip::ExtcommunityList : public ydk::Entity
{
    public:
        ExtcommunityList();
        ~ExtcommunityList();

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

        class NumberStandard; //type: Native::Ip::ExtcommunityList::NumberStandard
        class NumberExpanded; //type: Native::Ip::ExtcommunityList::NumberExpanded
        class Expanded; //type: Native::Ip::ExtcommunityList::Expanded
        class Standard; //type: Native::Ip::ExtcommunityList::Standard

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard> > number_standard;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberExpanded> > number_expanded;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Expanded> > expanded;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard> > standard;
        
}; // Native::Ip::ExtcommunityList


class Native::Ip::ExtcommunityList::NumberStandard : public ydk::Entity
{
    public:
        NumberStandard();
        ~NumberStandard();

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

        ydk::YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::NumberStandard


class Native::Ip::ExtcommunityList::NumberStandard::Deny : public ydk::Entity
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

        class Rt; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt> > rt;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo> > soo;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher> > vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::NumberStandard::Deny


class Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt


class Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo


class Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher


class Native::Ip::ExtcommunityList::NumberStandard::Permit : public ydk::Entity
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

        class Rt; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt> > rt;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo> > soo;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher> > vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::NumberStandard::Permit


class Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt


class Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo


class Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher


class Native::Ip::ExtcommunityList::NumberExpanded : public ydk::Entity
{
    public:
        NumberExpanded();
        ~NumberExpanded();

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

        ydk::YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::ExtcommunityList::NumberExpanded::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::NumberExpanded::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberExpanded::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberExpanded::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::NumberExpanded


class Native::Ip::ExtcommunityList::NumberExpanded::Deny : public ydk::Entity
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

        ydk::YLeafList deny_list; //type: list of  string

}; // Native::Ip::ExtcommunityList::NumberExpanded::Deny


class Native::Ip::ExtcommunityList::NumberExpanded::Permit : public ydk::Entity
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

        ydk::YLeafList permit_list; //type: list of  string

}; // Native::Ip::ExtcommunityList::NumberExpanded::Permit


class Native::Ip::ExtcommunityList::Expanded : public ydk::Entity
{
    public:
        Expanded();
        ~Expanded();

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
        class Deny; //type: Native::Ip::ExtcommunityList::Expanded::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::Expanded::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Expanded::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Expanded::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::Expanded


class Native::Ip::ExtcommunityList::Expanded::Deny : public ydk::Entity
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

        ydk::YLeafList deny_list; //type: list of  string

}; // Native::Ip::ExtcommunityList::Expanded::Deny


class Native::Ip::ExtcommunityList::Expanded::Permit : public ydk::Entity
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

        ydk::YLeafList permit_list; //type: list of  string

}; // Native::Ip::ExtcommunityList::Expanded::Permit


class Native::Ip::ExtcommunityList::Standard : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Deny; //type: Native::Ip::ExtcommunityList::Standard::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::Standard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::Standard


class Native::Ip::ExtcommunityList::Standard::Deny : public ydk::Entity
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

        class Rt; //type: Native::Ip::ExtcommunityList::Standard::Deny::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::Standard::Deny::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny::Rt> > rt;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny::Soo> > soo;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher> > vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::Standard::Deny


class Native::Ip::ExtcommunityList::Standard::Deny::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

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

}; // Native::Ip::ExtcommunityList::Standard::Deny::Rt


class Native::Ip::ExtcommunityList::Standard::Deny::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

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

}; // Native::Ip::ExtcommunityList::Standard::Deny::Soo


class Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

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

}; // Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher


class Native::Ip::ExtcommunityList::Standard::Permit : public ydk::Entity
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

        class Rt; //type: Native::Ip::ExtcommunityList::Standard::Permit::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::Standard::Permit::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit::Rt> > rt;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit::Soo> > soo;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher> > vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::Standard::Permit


class Native::Ip::ExtcommunityList::Standard::Permit::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

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

}; // Native::Ip::ExtcommunityList::Standard::Permit::Rt


class Native::Ip::ExtcommunityList::Standard::Permit::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

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

}; // Native::Ip::ExtcommunityList::Standard::Permit::Soo


class Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

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

}; // Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher


class Native::Ip::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

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

        ydk::YLeaf access_class; //type: uint8
        ydk::YLeaf server; //type: boolean
        ydk::YLeaf secure_server; //type: boolean
        ydk::YLeaf secure_trustpoint; //type: string
        ydk::YLeaf secure_client_auth; //type: empty
        class Authentication; //type: Native::Ip::Http::Authentication
        class TimeoutPolicy; //type: Native::Ip::Http::TimeoutPolicy
        class Client; //type: Native::Ip::Http::Client

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::TimeoutPolicy> timeout_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Client> client;
        
}; // Native::Ip::Http


class Native::Ip::Http::Authentication : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf aaa; //type: empty
        ydk::YLeaf local; //type: empty

}; // Native::Ip::Http::Authentication


class Native::Ip::Http::TimeoutPolicy : public ydk::Entity
{
    public:
        TimeoutPolicy();
        ~TimeoutPolicy();

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

        ydk::YLeaf idle; //type: uint16
        ydk::YLeaf life; //type: uint32
        ydk::YLeaf requests; //type: uint32

}; // Native::Ip::Http::TimeoutPolicy


class Native::Ip::Http::Client : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf secure_trustpoint; //type: string
        ydk::YLeaf source_interface; //type: string
        class ProxyServer; //type: Native::Ip::Http::Client::ProxyServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Client::ProxyServer> proxy_server;
        
}; // Native::Ip::Http::Client


class Native::Ip::Http::Client::ProxyServer : public ydk::Entity
{
    public:
        ProxyServer();
        ~ProxyServer();

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

        ydk::YLeaf proxy_server_name; //type: string
        ydk::YLeaf proxy_port; //type: uint16

}; // Native::Ip::Http::Client::ProxyServer


class Native::Ip::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

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

        class RateLimit; //type: Native::Ip::Icmp::RateLimit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit> rate_limit;
        
}; // Native::Ip::Icmp


class Native::Ip::Icmp::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

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

        ydk::YLeaf redirect; //type: Redirect
        class Unreachable; //type: Native::Ip::Icmp::RateLimit::Unreachable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit::Unreachable> unreachable;
                class Redirect;

}; // Native::Ip::Icmp::RateLimit


class Native::Ip::Icmp::RateLimit::Unreachable : public ydk::Entity
{
    public:
        Unreachable();
        ~Unreachable();

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

        ydk::YLeaf time; //type: uint32
        class DF; //type: Native::Ip::Icmp::RateLimit::Unreachable::DF
        class Log; //type: Native::Ip::Icmp::RateLimit::Unreachable::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit::Unreachable::DF> df;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit::Unreachable::Log> log; // presence node
        
}; // Native::Ip::Icmp::RateLimit::Unreachable


class Native::Ip::Icmp::RateLimit::Unreachable::DF : public ydk::Entity
{
    public:
        DF();
        ~DF();

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

        ydk::YLeaf time; //type: uint32

}; // Native::Ip::Icmp::RateLimit::Unreachable::DF


class Native::Ip::Icmp::RateLimit::Unreachable::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf number_unreachables; //type: uint32
        ydk::YLeaf log_message; //type: uint32

}; // Native::Ip::Icmp::RateLimit::Unreachable::Log


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
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Vrf> > vrf;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range> > range;
        
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
        class Static_; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier> querier; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Static_> static_;
        
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


class Native::Ip::Igmp::Snooping::Vlan::Range::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4> > ipv4;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Static_


class Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4 : public ydk::Entity
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

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4

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

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
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

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option : public ydk::Enum
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

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
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

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
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

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
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

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option : public ydk::Enum
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

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
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

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
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

class Native::Ip::Icmp::RateLimit::Redirect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf host;
        static const ydk::Enum::YLeaf subnet;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_8_ */

