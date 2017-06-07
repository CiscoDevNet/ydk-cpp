#ifndef _CISCO_IOS_XE_NATIVE_50_
#define _CISCO_IOS_XE_NATIVE_50_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_49.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp : public Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp


class Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve : public Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acr; //type: uint8

}; // Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve


class Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel : public Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out> out;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel


class Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_number; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out


class Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel : public Entity
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

        YLeaf cdp; //type: empty
        YLeaf stp; //type: empty
        YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel


class Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel::DropThreshold : public Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel::DropThreshold


class Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel::ShutdownThreshold : public Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation : public Entity
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

        class Dot1Q; //type: Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl
        class Ppp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp
        class Slip; //type: Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation


class Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q : public Entity
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
        YLeaf native; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q


class Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl : public Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl


class Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp


class Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip : public Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip


class Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay : public Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay


class Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf : public Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf


class Native::Interface::PortChannelSubinterface::PortChannel::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::FairQueue


class Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: ReceiveEnum
        YLeaf send; //type: SendEnum
        class ReceiveEnum;
        class SendEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol


class Native::Interface::PortChannelSubinterface::PortChannel::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::PortChannelSubinterface::PortChannel::Isis


class Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings : public Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Keepalive; //type: Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings


class Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf period; //type: uint16
        YLeaf retries; //type: uint8

}; // Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive


class Native::Interface::PortChannelSubinterface::PortChannel::Bfd : public Entity
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


}; // Native::Interface::PortChannelSubinterface::PortChannel::Bfd


class Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth : public Entity
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

        YLeaf qos_reference; //type: uint32
        YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive
        class Inherit; //type: Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive> receive;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth


class Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inherit; //type: empty
        YLeaf kilobits; //type: uint32

}; // Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive


class Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit : public Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kilobits; //type: uint32

}; // Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit


class Native::Interface::PortChannelSubinterface::PortChannel::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dampening_time; //type: uint16
        YLeaf start_reusing_time; //type: uint16
        YLeaf start_supressing_time; //type: uint16
        YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart> restart;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Dampening


class Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart : public Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart; //type: empty
        YLeaf restart_penalty; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart


class Native::Interface::PortChannelSubinterface::PortChannel::Domain : public Entity
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
        YLeaf path; //type: string
        YLeaf internet_bound; //type: empty
        YLeaf path_id; //type: uint8
        YLeaf path_last_resort; //type: empty
        YLeaf zero_sla; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Domain


class Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue : public Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_length; //type: uint16
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue


class Native::Interface::PortChannelSubinterface::PortChannel::Mpls : public Entity
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


}; // Native::Interface::PortChannelSubinterface::PortChannel::Mpls


class Native::Interface::PortChannelSubinterface::PortChannel::IpVrf : public Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip> ip;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::IpVrf


class Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip : public Entity
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

        class Vrf; //type: Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip


class Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf


class Native::Interface::PortChannelSubinterface::PortChannel::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Vrf


class Native::Interface::PortChannelSubinterface::PortChannel::Ip : public Entity
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

        YLeaf admission; //type: string
        YLeaf unnumbered; //type: string
        YLeaf directed_broadcast; //type: one of uint16, string
        YLeaf local_proxy_arp; //type: empty
        YLeaf proxy_arp; //type: boolean
        YLeaf redirects; //type: boolean
        YLeaf mtu; //type: uint16
        YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup
        class Arp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp
        class Vrf; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf
        class NoAddress; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress
        class Address; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address
        class HelloInterval; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval
        class Authentication; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication
        class HoldTime; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress
        class Pim; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim
        class Policy; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache
        class Router; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router
        class Tcp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress
        class Verify; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf> vrf;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup : public Entity
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

        class In; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In
        class Out; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl : public Entity
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

        YLeaf acl_name; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl : public Entity
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

        YLeaf acl_name; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inspection; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection : public Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf rate; //type: uint32

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: string
        YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf liin_vrf; //type: empty
        YLeaf mgmtvrf; //type: empty
        YLeaf word; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress : public Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: boolean

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address : public Entity
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

        YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary
        class Secondary; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp : public Entity
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

        YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId : public Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf port_channel; //type: uint32
        YLeaf tengigabitethernet; //type: string
        YLeaf fortygigabitethernet; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication : public Entity
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

        class KeyChain; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf name; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf md5; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf global; //type: empty
        YLeaf vrf; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim : public Entity
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

        YLeaf sparse_mode; //type: SparseModeEnum
        YLeaf nbma_mode; //type: empty
        YLeaf dr_priority; //type: uint32
        YLeaf spt_threshold; //type: SptThresholdEnum
        class AcceptRegister; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval> query_interval;
                class SparseModeEnum;
        class SptThresholdEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister : public Entity
{
    public:
        AcceptRegister();
        ~AcceptRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval : public Entity
{
    public:
        QueryInterval();
        ~QueryInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds_interval; //type: uint16
        YLeaf milliseconds_interval; //type: uint16
        YLeaf msec; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy : public Entity
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

        YLeaf route_map; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf : public Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_cache; //type: boolean

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache : public Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cef; //type: boolean
        YLeaf flow; //type: boolean
        YLeaf policy; //type: boolean
        YLeaf same_interface; //type: boolean

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjust_mss; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly : public Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_reassemblies; //type: uint32
        YLeaf max_fragments; //type: uint32
        YLeaf timeout; //type: uint32
        YLeaf drop_fragments; //type: empty
        YLeaf in; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp : public Entity
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


}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress : public Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eigrp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf metric; //type: uint32

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source
        class Unicast; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source : public Entity
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

        class Vlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan : public Entity
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

        class DhcpSnooping; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
{
    public:
        DhcpSnooping();
        ~DhcpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_security; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath : public Entity
{
    public:
        ReversePath();
        ~ReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath


class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source : public Entity
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

        YLeaf reachable_via; //type: ReachableViaEnum
        YLeaf allow_self_ping; //type: empty
        YLeaf allow_default; //type: empty
        class ReachableViaEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6 : public Entity
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

        YLeaf enable; //type: empty
        YLeaf mtu; //type: uint16
        YLeaf redirects; //type: boolean
        class DestinationGuard; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp
        class Address; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address
        class Nd; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard : public Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp : public Entity
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


}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp : public Entity
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

        YLeaf rapid_commit; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig : public Entity
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

        YLeaf default_; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf anycast; //type: empty
        YLeaf eui_64; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf link_local; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd : public Entity
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


}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd


class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter


class Native::Interface::PortChannelSubinterface::PortChannel::Logging : public Entity
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

        class Event; //type: Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event> event;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Logging


class Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event : public Entity
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
        class SpanningTree; //type: Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event


class Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree


class Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus


class Native::Interface::PortChannelSubinterface::PortChannel::Mdix : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Mdix


class Native::Interface::PortChannelSubinterface::PortChannel::Mop : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Mop


class Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos : public Entity
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

        class Trust; //type: Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos::Trust> trust;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos


class Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos::Trust : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos::Trust


class Native::Interface::PortChannelSubinterface::PortChannel::Standby : public Entity
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
        class Delay; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::Delay
        class UseBia; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::UseBia
        class StandbyList; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::Delay : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::Delay


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::UseBia : public Entity
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

        class Scope; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::UseBia


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::UseBia::Scope : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::UseBia::Scope


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList : public Entity
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
        class Authentication; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication : public Entity
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
        class Md5; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Ip : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Ip


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Preempt : public Entity
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

        class Delay; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Preempt


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Preempt::Delay : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Preempt::Delay


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect : public Entity
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
        class Advertisement; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement : public Entity
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

        class Authentication; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Timers : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Timers


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers : public Entity
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

        class HelloInterval; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers::HelloInterval : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers::HoldTime : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Timers::HoldTime


class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Track : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Track


class Native::Interface::PortChannelSubinterface::PortChannel::AccessSession : public Entity
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
        class PortControl; //type: Native::Interface::PortChannelSubinterface::PortChannel::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::AccessSession


class Native::Interface::PortChannelSubinterface::PortChannel::AccessSession::PortControl : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::AccessSession::PortControl


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl : public Entity
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

        class Action; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Action
        class Broadcast; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast
        class Multicast; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast
        class Unicast; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast> unicast;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Action : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Action


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast : public Entity
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

        class Include; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Include : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Include


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level : public Entity
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
        class Bps; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level::Bps


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Broadcast::Level::Pps


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast : public Entity
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

        class Level; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level> level;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level : public Entity
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
        class Bps; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level::Bps : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level::Bps


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level::Pps : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Multicast::Level::Pps


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast : public Entity
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

        class Level; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level> level;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level : public Entity
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

        class Threshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Threshold : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Threshold


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Bps : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Bps


class Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Pps : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::StormControl::Unicast::Level::Pps


class Native::Interface::PortChannelSubinterface::PortChannel::Trust : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Trust


class Native::Interface::PortChannelSubinterface::PortChannel::Utd : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Utd


class Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue : public Entity
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
        class CosMap; //type: Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue


class Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue::CosMap : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue::CosMap


class Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue : public Entity
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

        class CosMap; //type: Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue


class Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue::CosMap : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue::CosMap


class Native::Interface::PortChannelSubinterface::PortChannel::Peer : public Entity
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

        class Default_; //type: Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_> default_;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Peer


class Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_ : public Entity
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

        class Ip; //type: Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip> ip;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_


class Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip


class Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address : public Entity
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
        class DhcpPool; //type: Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address


class Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address::DhcpPool : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address::Pool : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Peer::Default_::Ip::Address::Pool


class Native::Interface::PortChannelSubinterface::PortChannel::PmPath : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::PmPath


class Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay : public Entity
{
    public:
        CarrierDelay();
        ~CarrierDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16
        class Down; //type: Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay::Down
        class Up; //type: Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay::Up

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay::Down> down;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay::Up> up;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay


class Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay::Down : public Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay::Down


class Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay::Up : public Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf msec; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay::Up

class Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::SparseModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sparse_dense_mode;
        static const Enum::YLeaf sparse_mode;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::SptThresholdEnum : public Enum
{
    public:
        static const Enum::YLeaf infinity;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::PortChannelSubinterface::PortChannel::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_50_ */

