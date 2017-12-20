#ifndef _CISCO_IOS_XE_NATIVE_91_
#define _CISCO_IOS_XE_NATIVE_91_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_90.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::PseudowireClass::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::PseudowireClass::LoadBalance::Flow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance::Flow> flow; // presence node
        
}; // Native::PseudowireClass::LoadBalance


class Native::PseudowireClass::LoadBalance::Flow : public ydk::Entity
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

        ydk::YLeaf ethernet; //type: Ethernet
        class Ethernet;

}; // Native::PseudowireClass::LoadBalance::Flow


class Native::PseudowireClass::Monitor : public ydk::Entity
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

        class Peer; //type: Native::PseudowireClass::Monitor::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer> peer;
        
}; // Native::PseudowireClass::Monitor


class Native::PseudowireClass::Monitor::Peer : public ydk::Entity
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

        class Bfd; //type: Native::PseudowireClass::Monitor::Peer::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd> bfd; // presence node
        
}; // Native::PseudowireClass::Monitor::Peer


class Native::PseudowireClass::Monitor::Peer::Bfd : public ydk::Entity
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

        class Local; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local> local;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd


class Native::PseudowireClass::Monitor::Peer::Bfd::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface> interface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::PreferredPath::Interface
        class PeerContainer; //type: Native::PseudowireClass::PreferredPath::PeerContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::PeerContainer> peer_container;
        
}; // Native::PseudowireClass::PreferredPath


class Native::PseudowireClass::PreferredPath::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint64
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::Interface


class Native::PseudowireClass::PreferredPath::PeerContainer : public ydk::Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::PeerContainer


class Native::PseudowireClass::ProtocolMpls : public ydk::Entity
{
    public:
        ProtocolMpls();
        ~ProtocolMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::PseudowireClass::ProtocolMpls


class Native::PseudowireClass::ProtocolL2Tpv2 : public ydk::Entity
{
    public:
        ProtocolL2Tpv2();
        ~ProtocolL2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::PseudowireClass::ProtocolL2Tpv2


class Native::PseudowireClass::ProtocolL2Tpv3 : public ydk::Entity
{
    public:
        ProtocolL2Tpv3();
        ~ProtocolL2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::PseudowireClass::ProtocolL2Tpv3


class Native::PseudowireClass::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf decoupled; //type: empty
        class AdminDown; //type: Native::PseudowireClass::Status::AdminDown
        class ControlPlane; //type: Native::PseudowireClass::Status::ControlPlane
        class Peer; //type: Native::PseudowireClass::Status::Peer
        class Redundancy; //type: Native::PseudowireClass::Status::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::AdminDown> admin_down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::ControlPlane> control_plane;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Redundancy> redundancy;
        
}; // Native::PseudowireClass::Status


class Native::PseudowireClass::Status::AdminDown : public ydk::Entity
{
    public:
        AdminDown();
        ~AdminDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disconnect; //type: empty

}; // Native::PseudowireClass::Status::AdminDown


class Native::PseudowireClass::Status::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_watch; //type: empty

}; // Native::PseudowireClass::Status::ControlPlane


class Native::PseudowireClass::Status::Peer : public ydk::Entity
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

        class Topology; //type: Native::PseudowireClass::Status::Peer::Topology

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer::Topology> topology;
        
}; // Native::PseudowireClass::Status::Peer


class Native::PseudowireClass::Status::Peer::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dual_homed; //type: empty

}; // Native::PseudowireClass::Status::Peer::Topology


class Native::PseudowireClass::Status::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf master; //type: empty

}; // Native::PseudowireClass::Status::Redundancy


class Native::PseudowireClass::Switching : public ydk::Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv; //type: empty

}; // Native::PseudowireClass::Switching


class Native::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

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

        class ServicePolicy; //type: Native::ControlPlane::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlane::ServicePolicy> service_policy;
        
}; // Native::ControlPlane


class Native::ControlPlane::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

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

        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string

}; // Native::ControlPlane::ServicePolicy


class Native::ControlPlaneHost : public ydk::Entity
{
    public:
        ControlPlaneHost();
        ~ControlPlaneHost();

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

        class ControlPlane; //type: Native::ControlPlaneHost::ControlPlane

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane> control_plane;
        
}; // Native::ControlPlaneHost


class Native::ControlPlaneHost::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

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

        class Host; //type: Native::ControlPlaneHost::ControlPlane::Host

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host> host; // presence node
        
}; // Native::ControlPlaneHost::ControlPlane


class Native::ControlPlaneHost::ControlPlane::Host : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ManagementInterface; //type: Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface> > management_interface;
        
}; // Native::ControlPlaneHost::ControlPlane::Host


class Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface : public ydk::Entity
{
    public:
        ManagementInterface();
        ~ManagementInterface();

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

        ydk::YLeaf interface_name; //type: string
        class Allow; //type: Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow> allow;
        
}; // Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface


class Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf beep; //type: empty
        ydk::YLeaf ftp; //type: empty
        ydk::YLeaf http; //type: empty
        ydk::YLeaf https; //type: empty
        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf ssh; //type: empty
        ydk::YLeaf telnet; //type: empty
        ydk::YLeaf tftp; //type: empty
        ydk::YLeaf tl1; //type: empty

}; // Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow


class Native::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

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

        class CalendarValid; //type: Native::Clock_::CalendarValid
        class SummerTime; //type: Native::Clock_::SummerTime
        class Timezone; //type: Native::Clock_::Timezone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock_::CalendarValid> calendar_valid; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock_::SummerTime> summer_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock_::Timezone> timezone;
        
}; // Native::Clock_


class Native::Clock_::CalendarValid : public ydk::Entity
{
    public:
        CalendarValid();
        ~CalendarValid();

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


}; // Native::Clock_::CalendarValid


class Native::Clock_::SummerTime : public ydk::Entity
{
    public:
        SummerTime();
        ~SummerTime();

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

        ydk::YLeaf zone; //type: string
        ydk::YLeaf date; //type: empty
        ydk::YLeaf start_day; //type: uint8
        ydk::YLeaf start_month; //type: MonthType
        ydk::YLeaf start_year; //type: uint32
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf date_end_day; //type: uint8
        ydk::YLeaf date_end_month; //type: MonthType
        ydk::YLeaf date_end_year; //type: uint32
        ydk::YLeaf date_end_time; //type: string
        ydk::YLeaf offset; //type: uint16
        ydk::YLeaf recurring; //type: empty
        ydk::YLeaf recurring_start; //type: one of uint8, enumeration
        ydk::YLeaf recurring_start_day; //type: WeekdayType
        ydk::YLeaf recurring_start_month; //type: MonthType
        ydk::YLeaf recurring_start_time; //type: string
        ydk::YLeaf recurring_end; //type: one of uint8, enumeration
        ydk::YLeaf recurring_end_day; //type: WeekdayType
        ydk::YLeaf recurring_end_month; //type: MonthType
        ydk::YLeaf recurring_end_time; //type: string
        ydk::YLeaf recurring_offset; //type: uint16
        class RecurringStart;
        class RecurringEnd;

}; // Native::Clock_::SummerTime


class Native::Clock_::Timezone : public ydk::Entity
{
    public:
        Timezone();
        ~Timezone();

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

        ydk::YLeaf zone; //type: string
        ydk::YLeaf offset; //type: Offset
        ydk::YLeaf hours; //type: int8
        ydk::YLeaf minutes; //type: int8
        class Offset;

}; // Native::Clock_::Timezone


class Native::Logging : public ydk::Entity
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

        ydk::YLeaf alarm; //type: one of uint8, enumeration
        ydk::YLeaf facility; //type: Facility
        ydk::YLeaf hostip; //type: one of string, union
        ydk::YLeaf snmp_authfail; //type: empty
        ydk::YLeaf buginf; //type: empty
        ydk::YLeaf userinfo; //type: empty
        class Discriminator; //type: Native::Logging::Discriminator
        class Persistent; //type: Native::Logging::Persistent
        class MonitorConf; //type: Native::Logging::MonitorConf
        class Monitor; //type: Native::Logging::Monitor
        class Buffered; //type: Native::Logging::Buffered
        class ConsoleConf; //type: Native::Logging::ConsoleConf
        class Console; //type: Native::Logging::Console
        class Event; //type: Native::Logging::Event
        class Esm; //type: Native::Logging::Esm
        class History; //type: Native::Logging::History
        class Host; //type: Native::Logging::Host
        class OriginId; //type: Native::Logging::OriginId
        class RateLimitConf; //type: Native::Logging::RateLimitConf
        class RateLimit; //type: Native::Logging::RateLimit
        class SourceInterface; //type: Native::Logging::SourceInterface
        class SnmpTrap; //type: Native::Logging::SnmpTrap
        class Trap; //type: Native::Logging::Trap
        class File; //type: Native::Logging::File

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Discriminator> > discriminator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Persistent> persistent; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::MonitorConf> monitor_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Monitor> monitor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Buffered> buffered; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::ConsoleConf> console_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Console> console; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Esm> esm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::History> history;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::OriginId> origin_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimitConf> rate_limit_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit> rate_limit; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::SourceInterface> > source_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::SnmpTrap> snmp_trap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Trap> trap; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::File> file;
                class Alarm;
        class Facility;

}; // Native::Logging


class Native::Logging::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf severity; //type: one of uint16, enumeration
        class MsgBody; //type: Native::Logging::Discriminator::MsgBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Discriminator::MsgBody> msg_body;
        
}; // Native::Logging::Discriminator


class Native::Logging::Discriminator::MsgBody : public ydk::Entity
{
    public:
        MsgBody();
        ~MsgBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drops; //type: string
        ydk::YLeaf includes; //type: string

}; // Native::Logging::Discriminator::MsgBody


class Native::Logging::Persistent : public ydk::Entity
{
    public:
        Persistent();
        ~Persistent();

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

        class File; //type: Native::Logging::Persistent::File

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Persistent::File> file;
        
}; // Native::Logging::Persistent


class Native::Logging::Persistent::File : public ydk::Entity
{
    public:
        File();
        ~File();

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

        ydk::YLeaf url; //type: string
        ydk::YLeaf size; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf protected_; //type: empty

}; // Native::Logging::Persistent::File


class Native::Logging::MonitorConf : public ydk::Entity
{
    public:
        MonitorConf();
        ~MonitorConf();

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

        ydk::YLeaf monitor; //type: boolean

}; // Native::Logging::MonitorConf


class Native::Logging::Monitor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf severity; //type: one of uint16, enumeration
        class Discriminator; //type: Native::Logging::Monitor::Discriminator

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Monitor::Discriminator> > discriminator;
        
}; // Native::Logging::Monitor


class Native::Logging::Monitor::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Monitor::Discriminator


class Native::Logging::Buffered : public ydk::Entity
{
    public:
        Buffered();
        ~Buffered();

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

        ydk::YLeaf severity; //type: one of uint16, enumeration
        ydk::YLeaf xxml; //type: uint32
        class Discriminator; //type: Native::Logging::Buffered::Discriminator
        class Size; //type: Native::Logging::Buffered::Size

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Buffered::Discriminator> > discriminator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Buffered::Size> size;
        
}; // Native::Logging::Buffered


class Native::Logging::Buffered::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf size_value; //type: uint32
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Buffered::Discriminator


class Native::Logging::Buffered::Size : public ydk::Entity
{
    public:
        Size();
        ~Size();

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

        ydk::YLeaf size_value; //type: uint32
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Buffered::Size


class Native::Logging::ConsoleConf : public ydk::Entity
{
    public:
        ConsoleConf();
        ~ConsoleConf();

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

        ydk::YLeaf console; //type: boolean

}; // Native::Logging::ConsoleConf


class Native::Logging::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

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

        ydk::YLeaf filtered; //type: empty
        ydk::YLeaf guaranteed; //type: empty
        ydk::YLeaf xxml; //type: one of uint16, enumeration
        ydk::YLeaf severity; //type: one of uint16, enumeration
        class Discriminator; //type: Native::Logging::Console::Discriminator

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Console::Discriminator> > discriminator;
        
}; // Native::Logging::Console


class Native::Logging::Console::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Console::Discriminator


class Native::Logging::Event : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class LinkStatus; //type: Native::Logging::Event::LinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Event::LinkStatus> link_status;
        
}; // Native::Logging::Event


class Native::Logging::Event::LinkStatus : public ydk::Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

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

        ydk::YLeaf boot; //type: empty
        ydk::YLeaf global; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Logging::Event::LinkStatus


class Native::Logging::Esm : public ydk::Entity
{
    public:
        Esm();
        ~Esm();

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

        ydk::YLeaf config; //type: empty

}; // Native::Logging::Esm


class Native::Logging::History : public ydk::Entity
{
    public:
        History();
        ~History();

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

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf severity_level; //type: one of uint8, enumeration
        class SeverityLevel;

}; // Native::Logging::History


class Native::Logging::Host : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv4HostList; //type: Native::Logging::Host::Ipv4HostList
        class Ipv4HostTransportList; //type: Native::Logging::Host::Ipv4HostTransportList
        class Ipv4HostVrfList; //type: Native::Logging::Host::Ipv4HostVrfList
        class Ipv4HostVrfTransportList; //type: Native::Logging::Host::Ipv4HostVrfTransportList
        class Ipv6; //type: Native::Logging::Host::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostList> > ipv4_host_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList> > ipv4_host_transport_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfList> > ipv4_host_vrf_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList> > ipv4_host_vrf_transport_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6> ipv6;
        
}; // Native::Logging::Host


class Native::Logging::Host::Ipv4HostList : public ydk::Entity
{
    public:
        Ipv4HostList();
        ~Ipv4HostList();

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

        ydk::YLeaf ipv4_host; //type: one of string, union

}; // Native::Logging::Host::Ipv4HostList


class Native::Logging::Host::Ipv4HostTransportList : public ydk::Entity
{
    public:
        Ipv4HostTransportList();
        ~Ipv4HostTransportList();

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

        ydk::YLeaf ipv4_host; //type: one of string, union
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv4HostTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv4HostTransportList


class Native::Logging::Host::Ipv4HostTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv4HostTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp> tcp;
        
}; // Native::Logging::Host::Ipv4HostTransportList::Transport


class Native::Logging::Host::Ipv4HostTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostTransportList::Transport::Udp


class Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp : public ydk::Entity
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

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp


class Native::Logging::Host::Ipv4HostVrfList : public ydk::Entity
{
    public:
        Ipv4HostVrfList();
        ~Ipv4HostVrfList();

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

        ydk::YLeaf ipv4_host; //type: one of string, union
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string

}; // Native::Logging::Host::Ipv4HostVrfList


class Native::Logging::Host::Ipv4HostVrfTransportList : public ydk::Entity
{
    public:
        Ipv4HostVrfTransportList();
        ~Ipv4HostVrfTransportList();

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

        ydk::YLeaf ipv4_host; //type: one of string, union
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv4HostVrfTransportList


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp> tcp;
        
}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp : public ydk::Entity
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

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp


class Native::Logging::Host::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv6HostList; //type: Native::Logging::Host::Ipv6::Ipv6HostList
        class Ipv6HostTransportList; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList
        class Ipv6HostVrfList; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfList
        class Ipv6HostVrfTransportList; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostList> > ipv6_host_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList> > ipv6_host_transport_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfList> > ipv6_host_vrf_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList> > ipv6_host_vrf_transport_list;
        
}; // Native::Logging::Host::Ipv6


class Native::Logging::Host::Ipv6::Ipv6HostList : public ydk::Entity
{
    public:
        Ipv6HostList();
        ~Ipv6HostList();

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

        ydk::YLeaf ipv6_host; //type: string

}; // Native::Logging::Host::Ipv6::Ipv6HostList


class Native::Logging::Host::Ipv6::Ipv6HostTransportList : public ydk::Entity
{
    public:
        Ipv6HostTransportList();
        ~Ipv6HostTransportList();

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

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp> tcp;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp : public ydk::Entity
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

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp


class Native::Logging::Host::Ipv6::Ipv6HostVrfList : public ydk::Entity
{
    public:
        Ipv6HostVrfList();
        ~Ipv6HostVrfList();

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

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfList


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList : public ydk::Entity
{
    public:
        Ipv6HostVrfTransportList();
        ~Ipv6HostVrfTransportList();

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

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp> tcp;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp : public ydk::Entity
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

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp


class Native::Logging::OriginId : public ydk::Entity
{
    public:
        OriginId();
        ~OriginId();

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

        ydk::YLeaf type_value; //type: TypeValue
        ydk::YLeaf string; //type: string
        class TypeValue;

}; // Native::Logging::OriginId


class Native::Logging::RateLimitConf : public ydk::Entity
{
    public:
        RateLimitConf();
        ~RateLimitConf();

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

        ydk::YLeaf rate_limit; //type: boolean

}; // Native::Logging::RateLimitConf


class Native::Logging::RateLimit : public ydk::Entity
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

        class Ranges; //type: Native::Logging::RateLimit::Ranges
        class Console; //type: Native::Logging::RateLimit::Console
        class All; //type: Native::Logging::RateLimit::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Ranges> > ranges;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console> console;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::All> all;
        
}; // Native::Logging::RateLimit


class Native::Logging::RateLimit::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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
        class Except; //type: Native::Logging::RateLimit::Ranges::Except

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Ranges


class Native::Logging::RateLimit::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, enumeration

}; // Native::Logging::RateLimit::Ranges::Except


class Native::Logging::RateLimit::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

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

        class Ranges; //type: Native::Logging::RateLimit::Console::Ranges
        class All; //type: Native::Logging::RateLimit::Console::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::Ranges> > ranges;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All> all;
        
}; // Native::Logging::RateLimit::Console


class Native::Logging::RateLimit::Console::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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
        class Except; //type: Native::Logging::RateLimit::Console::Ranges::Except

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Console::Ranges


class Native::Logging::RateLimit::Console::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, enumeration

}; // Native::Logging::RateLimit::Console::Ranges::Except


class Native::Logging::RateLimit::Console::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

        class Ranges; //type: Native::Logging::RateLimit::Console::All::Ranges

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All::Ranges> > ranges;
        
}; // Native::Logging::RateLimit::Console::All


class Native::Logging::RateLimit::Console::All::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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
        class Except; //type: Native::Logging::RateLimit::Console::All::Ranges::Except

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Console::All::Ranges


class Native::Logging::RateLimit::Console::All::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, enumeration

}; // Native::Logging::RateLimit::Console::All::Ranges::Except


class Native::Logging::RateLimit::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

        class Ranges; //type: Native::Logging::RateLimit::All::Ranges

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::All::Ranges> > ranges;
        
}; // Native::Logging::RateLimit::All


class Native::Logging::RateLimit::All::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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
        class Except; //type: Native::Logging::RateLimit::All::Ranges::Except

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::All::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::All::Ranges


class Native::Logging::RateLimit::All::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, enumeration

}; // Native::Logging::RateLimit::All::Ranges::Except


class Native::Logging::SourceInterface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Logging::SourceInterface


class Native::Logging::SnmpTrap : public ydk::Entity
{
    public:
        SnmpTrap();
        ~SnmpTrap();

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

        ydk::YLeaf alerts; //type: empty
        ydk::YLeaf critical; //type: empty
        ydk::YLeaf debugging; //type: empty
        ydk::YLeaf emergencies; //type: empty
        ydk::YLeaf errors; //type: empty
        ydk::YLeaf informational; //type: empty
        ydk::YLeaf notifications; //type: empty
        ydk::YLeaf warnings; //type: empty

}; // Native::Logging::SnmpTrap


class Native::Logging::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

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

        ydk::YLeaf trap_default; //type: empty
        ydk::YLeaf severity; //type: one of uint8, enumeration
        class Severity;

}; // Native::Logging::Trap


class Native::Logging::File : public ydk::Entity
{
    public:
        File();
        ~File();

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
        ydk::YLeaf max_size; //type: uint32
        ydk::YLeaf min_size; //type: uint32
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::File


class Native::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

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

        ydk::YLeaf new_model; //type: empty
        ydk::YLeaf session_id; //type: SessionId
        ydk::YLeaf max_sessions; //type: uint16
        ydk::YLeaf password; //type: Password
        ydk::YLeaf traceback; //type: Traceback
        class Group; //type: Native::Aaa::Group
        class Authentication; //type: Native::Aaa::Authentication
        class Authorization; //type: Native::Aaa::Authorization
        class Accounting; //type: Native::Aaa::Accounting
        class Server; //type: Native::Aaa::Server
        class Login; //type: Native::Aaa::Login
        class Memory; //type: Native::Aaa::Memory
        class Policy; //type: Native::Aaa::Policy
        class Route; //type: Native::Aaa::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Login> login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Memory> memory;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Route> route;
                class SessionId;
        class Password;
        class Traceback;

}; // Native::Aaa


class Native::Aaa::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        class Server; //type: Native::Aaa::Group::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server> server;
        
}; // Native::Aaa::Group


class Native::Aaa::Group::Server : public ydk::Entity
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

        class Tacacsplus; //type: Native::Aaa::Group::Server::Tacacsplus
        class Tacacs; //type: Native::Aaa::Group::Server::Tacacs
        class Radius; //type: Native::Aaa::Group::Server::Radius

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus> > tacacsplus;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacs> > tacacs;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius> > radius;
        
}; // Native::Aaa::Group::Server


class Native::Aaa::Group::Server::Tacacsplus : public ydk::Entity
{
    public:
        Tacacsplus();
        ~Tacacsplus();

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
        class Server_; //type: Native::Aaa::Group::Server::Tacacsplus::Server_
        class ServerPrivate; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate
        class Ip; //type: Native::Aaa::Group::Server::Tacacsplus::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Server_> server;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate> > server_private;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip> ip;
        
}; // Native::Aaa::Group::Server::Tacacsplus


class Native::Aaa::Group::Server::Tacacsplus::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

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

}; // Native::Aaa::Group::Server::Tacacsplus::Server_


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate : public ydk::Entity
{
    public:
        ServerPrivate();
        ~ServerPrivate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, union
        ydk::YLeaf timeout; //type: uint16
        class Key; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key> key;
        
}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key


class Native::Aaa::Group::Server::Tacacsplus::Ip : public ydk::Entity
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

        class Tacacs; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs
        class Vrf; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs : public ydk::Entity
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

        class SourceInterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface> source_interface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface : public ydk::Entity
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
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf


class Native::Aaa::Group::Server::Tacacs : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Aaa::Group::Server::Tacacs


class Native::Aaa::Group::Server::Radius : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf deadtime; //type: uint16
        class Server_; //type: Native::Aaa::Group::Server::Radius::Server_
        class Ip; //type: Native::Aaa::Group::Server::Radius::Ip
        class LoadBalance; //type: Native::Aaa::Group::Server::Radius::LoadBalance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance> load_balance;
        
}; // Native::Aaa::Group::Server::Radius


class Native::Aaa::Group::Server::Radius::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Aaa::Group::Server::Radius::Server_::Name
        class Direct; //type: Native::Aaa::Group::Server::Radius::Server_::Direct

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_::Name> > name;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_::Direct> > direct;
        
}; // Native::Aaa::Group::Server::Radius::Server_


class Native::Aaa::Group::Server::Radius::Server_::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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

}; // Native::Aaa::Group::Server::Radius::Server_::Name


class Native::Aaa::Group::Server::Radius::Server_::Direct : public ydk::Entity
{
    public:
        Direct();
        ~Direct();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, union
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16

}; // Native::Aaa::Group::Server::Radius::Server_::Direct


class Native::Aaa::Group::Server::Radius::Ip : public ydk::Entity
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

        class Radius_; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_
        class Vrf; //type: Native::Aaa::Group::Server::Radius::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_> radius;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Radius::Ip


class Native::Aaa::Group::Server::Radius::Ip::Radius_ : public ydk::Entity
{
    public:
        Radius_();
        ~Radius_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Radius_


class Native::Aaa::Group::Server::Radius::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Vrf


class Native::Aaa::Group::Server::Radius::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Method; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method> method;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance


class Native::Aaa::Group::Server::Radius::LoadBalance::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LeastOutstanding; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding> least_outstanding;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method


class Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding : public ydk::Entity
{
    public:
        LeastOutstanding();
        ~LeastOutstanding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf batch_size; //type: uint32
        ydk::YLeaf ignore_preferred_server; //type: empty

}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding


class Native::Aaa::Authentication : public ydk::Entity
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

        class Attempts; //type: Native::Aaa::Authentication::Attempts
        class Dot1X; //type: Native::Aaa::Authentication::Dot1X
        class Enable; //type: Native::Aaa::Authentication::Enable
        class Eou; //type: Native::Aaa::Authentication::Eou
        class Login; //type: Native::Aaa::Authentication::Login
        class Onep; //type: Native::Aaa::Authentication::Onep
        class Ppp; //type: Native::Aaa::Authentication::Ppp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Attempts> attempts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou> eou;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login> > login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep> onep;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp> > ppp;
        
}; // Native::Aaa::Authentication


class Native::Aaa::Authentication::Attempts : public ydk::Entity
{
    public:
        Attempts();
        ~Attempts();

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

        ydk::YLeaf login; //type: uint8

}; // Native::Aaa::Authentication::Attempts


class Native::Aaa::Authentication::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

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

        class Dot1XList; //type: Native::Aaa::Authentication::Dot1X::Dot1XList
        class Default_; //type: Native::Aaa::Authentication::Dot1X::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X::Dot1XList> > dot1x_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X::Default_> default_;
        
}; // Native::Aaa::Authentication::Dot1X


class Native::Aaa::Authentication::Dot1X::Dot1XList : public ydk::Entity
{
    public:
        Dot1XList();
        ~Dot1XList();

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
        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Authentication::Dot1X::Dot1XList


class Native::Aaa::Authentication::Dot1X::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Aaa::Authentication::Dot1X::Default_


class Native::Aaa::Authentication::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

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

        class Default_; //type: Native::Aaa::Authentication::Enable::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable::Default_> default_;
        
}; // Native::Aaa::Authentication::Enable


class Native::Aaa::Authentication::Enable::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf none; //type: empty
        class Group;

}; // Native::Aaa::Authentication::Enable::Default_


class Native::Aaa::Authentication::Eou : public ydk::Entity
{
    public:
        Eou();
        ~Eou();

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

        class Default_; //type: Native::Aaa::Authentication::Eou::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default_> default_;
        
}; // Native::Aaa::Authentication::Eou


class Native::Aaa::Authentication::Eou::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Group; //type: Native::Aaa::Authentication::Eou::Default_::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default_::Group> group;
        
}; // Native::Aaa::Authentication::Eou::Default_


class Native::Aaa::Authentication::Eou::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf radius; //type: empty

}; // Native::Aaa::Authentication::Eou::Default_::Group


class Native::Aaa::Authentication::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

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

        ydk::YLeaf name; //type: one of enumeration, string
        class A1; //type: Native::Aaa::Authentication::Login::A1
        class A2; //type: Native::Aaa::Authentication::Login::A2
        class A3; //type: Native::Aaa::Authentication::Login::A3
        class A4; //type: Native::Aaa::Authentication::Login::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A4> a4;
                class Name;

}; // Native::Aaa::Authentication::Login


class Native::Aaa::Authentication::Login::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A1


class Native::Aaa::Authentication::Login::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A2


class Native::Aaa::Authentication::Login::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A3


class Native::Aaa::Authentication::Login::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf krb5_telnet; //type: empty
        ydk::YLeaf line; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Login::A4


class Native::Aaa::Authentication::Onep : public ydk::Entity
{
    public:
        Onep();
        ~Onep();

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

        class Default_; //type: Native::Aaa::Authentication::Onep::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default_> default_;
        
}; // Native::Aaa::Authentication::Onep


class Native::Aaa::Authentication::Onep::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Local; //type: Native::Aaa::Authentication::Onep::Default_::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default_::Local> local; // presence node
        
}; // Native::Aaa::Authentication::Onep::Default_


class Native::Aaa::Authentication::Onep::Default_::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

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


}; // Native::Aaa::Authentication::Onep::Default_::Local


class Native::Aaa::Authentication::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

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

        ydk::YLeaf id; //type: string
        class A1; //type: Native::Aaa::Authentication::Ppp::A1
        class A2; //type: Native::Aaa::Authentication::Ppp::A2
        class A3; //type: Native::Aaa::Authentication::Ppp::A3
        class A4; //type: Native::Aaa::Authentication::Ppp::A4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A1> a1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A2> a2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A3> a3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A4> a4;
        
}; // Native::Aaa::Authentication::Ppp


class Native::Aaa::Authentication::Ppp::A1 : public ydk::Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_needed; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A1


class Native::Aaa::Authentication::Ppp::A2 : public ydk::Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A2


class Native::Aaa::Authentication::Ppp::A3 : public ydk::Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A3


class Native::Aaa::Authentication::Ppp::A4 : public ydk::Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        ydk::YLeaf cache; //type: one of string, enumeration
        ydk::YLeaf none; //type: empty
        ydk::YLeaf krb5; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf local_case; //type: empty
        class Group;
        class Cache;

}; // Native::Aaa::Authentication::Ppp::A4


class Native::Aaa::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

        ydk::YLeaf console; //type: empty
        ydk::YLeaf config_commands; //type: empty
        class AuthType; //type: Native::Aaa::Authorization::AuthType
        class Commands; //type: Native::Aaa::Authorization::Commands
        class Configuration; //type: Native::Aaa::Authorization::Configuration
        class Exec; //type: Native::Aaa::Authorization::Exec
        class Eventmanager; //type: Native::Aaa::Authorization::Eventmanager
        class Network; //type: Native::Aaa::Authorization::Network
        class AuthProxy; //type: Native::Aaa::Authorization::AuthProxy
        class Onep; //type: Native::Aaa::Authorization::Onep

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType> auth_type;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Commands> > commands;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration> configuration;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec> > exec;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Eventmanager> > eventmanager;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy> auth_proxy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep> onep;
        
}; // Native::Aaa::Authorization


class Native::Aaa::Authorization::AuthType : public ydk::Entity
{
    public:
        AuthType();
        ~AuthType();

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

        class Default_; //type: Native::Aaa::Authorization::AuthType::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType::Default_> default_;
        
}; // Native::Aaa::Authorization::AuthType


class Native::Aaa::Authorization::AuthType::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Aaa::Authorization::AuthType::Default_


class Native::Aaa::Authorization::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

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

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf list_name; //type: one of enumeration, string
        ydk::YLeaf group; //type: one of enumeration, string
        ydk::YLeaf if_authenticated; //type: empty
        ydk::YLeaf local; //type: empty
        ydk::YLeaf none; //type: empty
        class ListName;
        class Group;

}; // Native::Aaa::Authorization::Commands


class Native::Aaa::Authorization::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

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

        class Default_; //type: Native::Aaa::Authorization::Configuration::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_> default_;
        
}; // Native::Aaa::Authorization::Configuration


class Native::Aaa::Authorization::Configuration::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Group; //type: Native::Aaa::Authorization::Configuration::Default_::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_::Group> group;
        
}; // Native::Aaa::Authorization::Configuration::Default_


class Native::Aaa::Authorization::Configuration::Default_::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        class GroupName; //type: Native::Aaa::Authorization::Configuration::Default_::Group::GroupName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Authorization::Configuration::Default_::Group::GroupName> > group_name;
        
}; // Native::Aaa::Authorization::Configuration::Default_::Group


class Native::Aaa::Authorization::Configuration::Default_::Group::GroupName : public ydk::Entity
{
    public:
        GroupName();
        ~GroupName();

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

        ydk::YLeaf group_name; //type: string

}; // Native::Aaa::Authorization::Configuration::Default_::Group::GroupName

class Native::PseudowireClass::LoadBalance::Flow::Ethernet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_mac;

};

class Native::PseudowireClass::ProtocolMpls::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2Tpv2::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv2;
        static const ydk::Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2Tpv3::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf l2tpv3ietf;
        static const ydk::Enum::YLeaf none;

};

class Native::Clock_::SummerTime::RecurringStart : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf first;
        static const ydk::Enum::YLeaf last;

};

class Native::Clock_::SummerTime::RecurringEnd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf first;
        static const ydk::Enum::YLeaf last;

};

class Native::Clock_::Timezone::Offset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y__PLUS__;
        static const ydk::Enum::YLeaf Y_;

};

class Native::Logging::Alarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;

};

class Native::Logging::Facility : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf cron;
        static const ydk::Enum::YLeaf daemon;
        static const ydk::Enum::YLeaf kern;
        static const ydk::Enum::YLeaf local0;
        static const ydk::Enum::YLeaf local1;
        static const ydk::Enum::YLeaf local2;
        static const ydk::Enum::YLeaf local3;
        static const ydk::Enum::YLeaf local4;
        static const ydk::Enum::YLeaf local5;
        static const ydk::Enum::YLeaf local6;
        static const ydk::Enum::YLeaf local7;
        static const ydk::Enum::YLeaf lpr;
        static const ydk::Enum::YLeaf mail;
        static const ydk::Enum::YLeaf news;
        static const ydk::Enum::YLeaf sys10;
        static const ydk::Enum::YLeaf sys11;
        static const ydk::Enum::YLeaf sys12;
        static const ydk::Enum::YLeaf sys13;
        static const ydk::Enum::YLeaf sys14;
        static const ydk::Enum::YLeaf sys9;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf uucp;

};

class Native::Logging::History::SeverityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf warnings;

};

class Native::Logging::OriginId::TypeValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hostname;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;

};

class Native::Logging::Trap::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf warnings;

};

class Native::Aaa::SessionId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf common;
        static const ydk::Enum::YLeaf unique;

};

class Native::Aaa::Password : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restriction;

};

class Native::Aaa::Traceback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf recording;

};

class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Authentication::Dot1X::Dot1XList::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Dot1X::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Enable::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authentication::Login::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A1::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A1::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A2::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A2::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A3::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A3::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A4::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A4::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::AuthType::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radius;

};

class Native::Aaa::Authorization::Commands::ListName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Aaa::Authorization::Commands::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs__PLUS__;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_91_ */

