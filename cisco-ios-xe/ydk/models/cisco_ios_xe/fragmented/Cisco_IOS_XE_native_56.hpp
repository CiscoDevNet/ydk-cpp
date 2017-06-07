#ifndef _CISCO_IOS_XE_NATIVE_56_
#define _CISCO_IOS_XE_NATIVE_56_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_54.hpp"
#include "Cisco_IOS_XE_native_55.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve


class Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel : public Entity
{
    public:
        CiscoIosXeInterfaces_CwsTunnel();
        ~CiscoIosXeInterfaces_CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out> out;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel


class Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel : public Entity
{
    public:
        CiscoIosXeInterfaces_L2ProtocolTunnel();
        ~CiscoIosXeInterfaces_L2ProtocolTunnel();

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
        class DropThreshold; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation : public Entity
{
    public:
        CiscoIosXeInterfaces_Encapsulation();
        ~CiscoIosXeInterfaces_Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Q; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl
        class Ppp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp
        class Slip; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay


class Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf : public Entity
{
    public:
        CiscoIosXeInterfaces_FairQueueConf();
        ~CiscoIosXeInterfaces_FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf


class Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue : public Entity
{
    public:
        CiscoIosXeInterfaces_FairQueue();
        ~CiscoIosXeInterfaces_FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol : public Entity
{
    public:
        CiscoIosXeInterfaces_Flowcontrol();
        ~CiscoIosXeInterfaces_Flowcontrol();

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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis : public Entity
{
    public:
        CiscoIosXeInterfaces_Isis();
        ~CiscoIosXeInterfaces_Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis


class Native::Interface::Vlan::KeepaliveSettings : public Entity
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

        class Keepalive; //type: Native::Interface::Vlan::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Vlan::KeepaliveSettings


class Native::Interface::Vlan::KeepaliveSettings::Keepalive : public Entity
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

}; // Native::Interface::Vlan::KeepaliveSettings::Keepalive


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd : public Entity
{
    public:
        CiscoIosXeInterfaces_Bfd();
        ~CiscoIosXeInterfaces_Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth : public Entity
{
    public:
        CiscoIosXeInterfaces_Bandwidth();
        ~CiscoIosXeInterfaces_Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_reference; //type: uint32
        YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive
        class Inherit; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive> receive;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit


class Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening : public Entity
{
    public:
        CiscoIosXeInterfaces_Dampening();
        ~CiscoIosXeInterfaces_Dampening();

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
        class Restart; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart> restart;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening


class Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart


class Native::Interface::Vlan::CiscoIosXeInterfaces_Domain : public Entity
{
    public:
        CiscoIosXeInterfaces_Domain();
        ~CiscoIosXeInterfaces_Domain();

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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Domain


class Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue : public Entity
{
    public:
        CiscoIosXeInterfaces_HoldQueue();
        ~CiscoIosXeInterfaces_HoldQueue();

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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls : public Entity
{
    public:
        CiscoIosXeInterfaces_Mpls();
        ~CiscoIosXeInterfaces_Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls


class Native::Interface::Vlan::IpVrf : public Entity
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

        class Ip; //type: Native::Interface::Vlan::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip> ip;
        
}; // Native::Interface::Vlan::IpVrf


class Native::Interface::Vlan::IpVrf::Ip : public Entity
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

        class Vrf; //type: Native::Interface::Vlan::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::IpVrf::Ip


class Native::Interface::Vlan::IpVrf::Ip::Vrf : public Entity
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

}; // Native::Interface::Vlan::IpVrf::Ip::Vrf


class Native::Interface::Vlan::Vrf : public Entity
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

}; // Native::Interface::Vlan::Vrf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip : public Entity
{
    public:
        CiscoIosXeInterfaces_Ip();
        ~CiscoIosXeInterfaces_Ip();

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
        class AccessGroup; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup
        class Arp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp
        class Vrf; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf
        class NoAddress; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress
        class Address; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address
        class HelloInterval; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval
        class Authentication; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication
        class HoldTime; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress
        class Pim; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim
        class Policy; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy
        class RouteCacheConf; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache
        class Router; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router
        class Tcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress
        class Verify; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup : public Entity
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

        class In; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In
        class Out; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In : public Entity
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

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out : public Entity
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

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp : public Entity
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

        class Inspection; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection : public Entity
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
        class Limit; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf : public Entity
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
        class Forwarding; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address : public Entity
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
        class Primary; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary
        class Secondary; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp : public Entity
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
        class ClientId; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication : public Entity
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

        class KeyChain; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router : public Entity
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

        class Isis; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress : public Entity
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

        class Eigrp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source
        class Unicast; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source : public Entity
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

        class Vlan_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_> vlan;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_ : public Entity
{
    public:
        Vlan_();
        ~Vlan_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DhcpSnooping; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6 : public Entity
{
    public:
        CiscoIosXeInterfaces_Ipv6();
        ~CiscoIosXeInterfaces_Ipv6();

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
        class DestinationGuard; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp
        class Address; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address
        class Nd; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter


class Native::Interface::Vlan::CiscoIosXeInterfaces_Logging : public Entity
{
    public:
        CiscoIosXeInterfaces_Logging();
        ~CiscoIosXeInterfaces_Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Event; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event> event;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Logging


class Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event : public Entity
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
        class SpanningTree; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event


class Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree


class Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus


class Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix : public Entity
{
    public:
        CiscoIosXeInterfaces_Mdix();
        ~CiscoIosXeInterfaces_Mdix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix


class Native::Interface::Vlan::CiscoIosXeInterfaces_Mop : public Entity
{
    public:
        CiscoIosXeInterfaces_Mop();
        ~CiscoIosXeInterfaces_Mop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Mop


class Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos : public Entity
{
    public:
        CiscoIosXeInterfaces_Interface_Qos();
        ~CiscoIosXeInterfaces_Interface_Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trust; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust> trust;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos


class Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby : public Entity
{
    public:
        CiscoIosXeInterfaces_Standby();
        ~CiscoIosXeInterfaces_Standby();

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
        class Delay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay
        class UseBia; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia
        class StandbyList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia : public Entity
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

        class Scope; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope> scope;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList : public Entity
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
        class Authentication; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers
        class Track; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication : public Entity
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
        class Md5; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt : public Entity
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

        class Delay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect : public Entity
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
        class Advertisement; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement : public Entity
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

        class Authentication; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers : public Entity
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

        class HelloInterval; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track


class Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession : public Entity
{
    public:
        CiscoIosXeInterfaces_AccessSession();
        ~CiscoIosXeInterfaces_AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf closed; //type: empty
        YLeaf host_mode; //type: HostModeEnum
        class PortControl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession


class Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl : public Entity
{
    public:
        CiscoIosXeInterfaces_StormControl();
        ~CiscoIosXeInterfaces_StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action
        class Broadcast; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast
        class Multicast; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast
        class Unicast; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast> unicast;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast : public Entity
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

        class Include; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include
        class Level; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level : public Entity
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
        class Bps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast : public Entity
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

        class Level; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level : public Entity
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
        class Bps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast : public Entity
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

        class Level; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level : public Entity
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

        class Threshold; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps


class Native::Interface::Vlan::CiscoIosXeInterfaces_Trust : public Entity
{
    public:
        CiscoIosXeInterfaces_Trust();
        ~CiscoIosXeInterfaces_Trust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device; //type: DeviceEnum
        class DeviceEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Trust


class Native::Interface::Vlan::CiscoIosXeInterfaces_Utd : public Entity
{
    public:
        CiscoIosXeInterfaces_Utd();
        ~CiscoIosXeInterfaces_Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Utd


class Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue : public Entity
{
    public:
        CiscoIosXeInterfaces_PriorityQueue();
        ~CiscoIosXeInterfaces_PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap


class Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue : public Entity
{
    public:
        CiscoIosXeInterfaces_RcvQueue();
        ~CiscoIosXeInterfaces_RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CosMap; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer : public Entity
{
    public:
        CiscoIosXeInterfaces_Peer();
        ~CiscoIosXeInterfaces_Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_> default_;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_ : public Entity
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

        class Ip; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip> ip;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address : public Entity
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
        class DhcpPool; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool


class Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath : public Entity
{
    public:
        CiscoIosXeInterfaces_PmPath();
        ~CiscoIosXeInterfaces_PmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf interface_id; //type: uint8

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath


class Native::Interface::Vlan::ZoneMember : public Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf security; //type: string

}; // Native::Interface::Vlan::ZoneMember


class Native::Interface::GroupAsync : public Entity
{
    public:
        GroupAsync();
        ~GroupAsync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        YLeaf physical_layer; //type: PhysicalLayerEnum
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        class SwitchportConf; //type: Native::Interface::GroupAsync::SwitchportConf
        class Switchport; //type: Native::Interface::GroupAsync::Switchport
        class Arp; //type: Native::Interface::GroupAsync::Arp
        class Backup; //type: Native::Interface::GroupAsync::Backup
        class Cemoudp; //type: Native::Interface::GroupAsync::Cemoudp
        class CwsTunnel; //type: Native::Interface::GroupAsync::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::GroupAsync::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::GroupAsync::Encapsulation
        class FairQueueConf; //type: Native::Interface::GroupAsync::FairQueueConf
        class FairQueue; //type: Native::Interface::GroupAsync::FairQueue
        class Flowcontrol; //type: Native::Interface::GroupAsync::Flowcontrol
        class Isis; //type: Native::Interface::GroupAsync::Isis
        class KeepaliveSettings; //type: Native::Interface::GroupAsync::KeepaliveSettings
        class Bfd; //type: Native::Interface::GroupAsync::Bfd
        class Bandwidth; //type: Native::Interface::GroupAsync::Bandwidth
        class Dampening; //type: Native::Interface::GroupAsync::Dampening
        class Domain; //type: Native::Interface::GroupAsync::Domain
        class HoldQueue; //type: Native::Interface::GroupAsync::HoldQueue
        class Mpls; //type: Native::Interface::GroupAsync::Mpls
        class IpVrf; //type: Native::Interface::GroupAsync::IpVrf
        class Vrf; //type: Native::Interface::GroupAsync::Vrf
        class Ip; //type: Native::Interface::GroupAsync::Ip
        class Ipv6; //type: Native::Interface::GroupAsync::Ipv6
        class Logging; //type: Native::Interface::GroupAsync::Logging
        class Mdix; //type: Native::Interface::GroupAsync::Mdix
        class Mop; //type: Native::Interface::GroupAsync::Mop
        class Interface_Qos; //type: Native::Interface::GroupAsync::Interface_Qos
        class Standby; //type: Native::Interface::GroupAsync::Standby
        class AccessSession; //type: Native::Interface::GroupAsync::AccessSession
        class StormControl; //type: Native::Interface::GroupAsync::StormControl
        class Trust; //type: Native::Interface::GroupAsync::Trust
        class Utd; //type: Native::Interface::GroupAsync::Utd
        class PriorityQueue; //type: Native::Interface::GroupAsync::PriorityQueue
        class RcvQueue; //type: Native::Interface::GroupAsync::RcvQueue
        class Peer; //type: Native::Interface::GroupAsync::Peer
        class PmPath; //type: Native::Interface::GroupAsync::PmPath

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Vrf> vrf;
                class PhysicalLayerEnum;
        class IfStateEnum;
        class ServiceInsertionEnum;

}; // Native::Interface::GroupAsync


class Native::Interface::GroupAsync::SwitchportConf : public Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::GroupAsync::SwitchportConf


class Native::Interface::GroupAsync::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::GroupAsync::Switchport


class Native::Interface::GroupAsync::Arp : public Entity
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

        YLeaf timeout; //type: uint32

}; // Native::Interface::GroupAsync::Arp


class Native::Interface::GroupAsync::Backup : public Entity
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

        class Delay; //type: Native::Interface::GroupAsync::Backup::Delay
        class Interface_; //type: Native::Interface::GroupAsync::Backup::Interface_
        class Load; //type: Native::Interface::GroupAsync::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::GroupAsync::Backup::Load> load;
        
}; // Native::Interface::GroupAsync::Backup

class Native::Interface::GroupAsync::PhysicalLayerEnum : public Enum
{
    public:
        static const Enum::YLeaf async;
        static const Enum::YLeaf sync;

};

class Native::Interface::GroupAsync::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::GroupAsync::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_56_ */

