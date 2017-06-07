#ifndef _CISCO_IOS_XE_NATIVE_66_
#define _CISCO_IOS_XE_NATIVE_66_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_64.hpp"
#include "Cisco_IOS_XE_native_65.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::VirtualTemplate::Service::Instance::Mac : public Entity
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

        class Security; //type: Native::Interface::VirtualTemplate::Service::Instance::Mac::Security

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Mac::Security> security; // presence node
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Mac


class Native::Interface::VirtualTemplate::Service::Instance::Mac::Security : public Entity
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
        class Maximum; //type: Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::VirtualTemplate::Service::Instance::Mac::Security


class Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum


class Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy : public Entity
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

        class Input; //type: Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input
        class Output; //type: Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input> > input;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output> > output;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy


class Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input


class Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output


class Native::Interface::VirtualTemplate::Service::Instance::Cfm : public Entity
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

        class Encapsulation; //type: Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation
        class Mep; //type: Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep
        class Mip; //type: Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep> mep;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip> mip;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Cfm


class Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation : public Entity
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

        class Dot1Ad; //type: Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q> dot1q;
        
}; // Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation


class Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad


class Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q


class Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep


class Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip


class Native::Interface::VirtualTemplate::Service::Instance::L2Protocol : public Entity
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

        class Peer; //type: Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer
        class Forward; //type: Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward
        class Tunnel; //type: Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward> forward; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer> peer; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel> tunnel; // presence node
        
}; // Native::Interface::VirtualTemplate::Service::Instance::L2Protocol


class Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer


class Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward


class Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel : public Entity
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

}; // Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel


class Native::Interface::VirtualTemplate::Cdp : public Entity
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
        class Tlv; //type: Native::Interface::VirtualTemplate::Cdp::Tlv

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cdp::Tlv> tlv;
        
}; // Native::Interface::VirtualTemplate::Cdp


class Native::Interface::VirtualTemplate::Cdp::Tlv : public Entity
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
        class App; //type: Native::Interface::VirtualTemplate::Cdp::Tlv::App

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cdp::Tlv::App> app; // presence node
        
}; // Native::Interface::VirtualTemplate::Cdp::Tlv


class Native::Interface::VirtualTemplate::Cdp::Tlv::App : public Entity
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

}; // Native::Interface::VirtualTemplate::Cdp::Tlv::App


class Native::Interface::VirtualTemplate::Nhrp : public Entity
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
        class EventPublisher; //type: Native::Interface::VirtualTemplate::Nhrp::EventPublisher
        class Map; //type: Native::Interface::VirtualTemplate::Nhrp::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Nhrp::EventPublisher> event_publisher;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Nhrp::Map> map;
        
}; // Native::Interface::VirtualTemplate::Nhrp


class Native::Interface::VirtualTemplate::Nhrp::EventPublisher : public Entity
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

}; // Native::Interface::VirtualTemplate::Nhrp::EventPublisher


class Native::Interface::VirtualTemplate::Nhrp::Map : public Entity
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

        class Group; //type: Native::Interface::VirtualTemplate::Nhrp::Map::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Nhrp::Map::Group> group;
        
}; // Native::Interface::VirtualTemplate::Nhrp::Map


class Native::Interface::VirtualTemplate::Nhrp::Map::Group : public Entity
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

        class NhrpName; //type: Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName> > nhrp_name;
        
}; // Native::Interface::VirtualTemplate::Nhrp::Map::Group


class Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName : public Entity
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
        class ServicePolicy; //type: Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy> service_policy;
        
}; // Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName


class Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy : public Entity
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

}; // Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy


class Native::Interface::VirtualTemplate::Tunnel : public Entity
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
        class Tun6Rd; //type: Native::Interface::VirtualTemplate::Tunnel::Tun6Rd
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Bandwidth
        class DstPort; //type: Native::Interface::VirtualTemplate::Tunnel::DstPort
        class Endpoint; //type: Native::Interface::VirtualTemplate::Tunnel::Endpoint
        class Fixup; //type: Native::Interface::VirtualTemplate::Tunnel::Fixup
        class Flow; //type: Native::Interface::VirtualTemplate::Tunnel::Flow
        class Mode; //type: Native::Interface::VirtualTemplate::Tunnel::Mode
        class NetworkId; //type: Native::Interface::VirtualTemplate::Tunnel::NetworkId
        class PathMtuDiscovery; //type: Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery
        class Protection; //type: Native::Interface::VirtualTemplate::Tunnel::Protection
        class Mpls; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls
        class Rbscp; //type: Native::Interface::VirtualTemplate::Tunnel::Rbscp
        class SrcPort; //type: Native::Interface::VirtualTemplate::Tunnel::SrcPort
        class Udlr; //type: Native::Interface::VirtualTemplate::Tunnel::Udlr
        class Vlan; //type: Native::Interface::VirtualTemplate::Tunnel::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::DstPort> dst_port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Endpoint> endpoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Fixup> fixup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::NetworkId> network_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Protection> protection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Rbscp> rbscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::SrcPort> src_port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Tun6Rd> tun_6rd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Udlr> udlr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Vlan> vlan;
                class SnoopingEnum;

}; // Native::Interface::VirtualTemplate::Tunnel


class Native::Interface::VirtualTemplate::Tunnel::Tun6Rd : public Entity
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
        class Ipv4; //type: Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4> ipv4;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Tun6Rd


class Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4 : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4


class Native::Interface::VirtualTemplate::Tunnel::Bandwidth : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::DstPort : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::DstPort


class Native::Interface::VirtualTemplate::Tunnel::Endpoint : public Entity
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

        class ServicePolicy; //type: Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy> service_policy;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Endpoint


class Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy


class Native::Interface::VirtualTemplate::Tunnel::Fixup : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Fixup


class Native::Interface::VirtualTemplate::Tunnel::Flow : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Flow


class Native::Interface::VirtualTemplate::Tunnel::Mode : public Entity
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
        class Ipsec; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec
        class Mpls; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls
        class Ethernet; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet
        class Gre; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Gre
        class Ipip; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip
        class Ipv6Ip; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Gre> gre;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip> ipip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip> ipv6ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls> mpls;
                class UdpEnum;

}; // Native::Interface::VirtualTemplate::Tunnel::Mode


class Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec : public Entity
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

        class Ipv4; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4
        class Ipv6; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6> ipv6; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec


class Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4 : public Entity
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


}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4


class Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6 : public Entity
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


}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6


class Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls : public Entity
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

        class TrafficEng; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng> traffic_eng; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls


class Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng


class Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet


class Native::Interface::VirtualTemplate::Tunnel::Mode::Gre : public Entity
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
        class Multipoint; //type: Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint> multipoint; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Gre


class Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint


class Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip


class Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip


class Native::Interface::VirtualTemplate::Tunnel::NetworkId : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::NetworkId


class Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery : public Entity
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


}; // Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery


class Native::Interface::VirtualTemplate::Tunnel::Protection : public Entity
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


}; // Native::Interface::VirtualTemplate::Tunnel::Protection


class Native::Interface::VirtualTemplate::Tunnel::Mpls : public Entity
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

        class TrafficEng; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng : public Entity
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
        class Affinity; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity
        class AutoBw; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw
        class Autoroute; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute
        class Priority; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority
        class PathOption; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption
        class FastReroute; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute
        class PathSelection; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw> auto_bw;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption> path_option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority> priority;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute : public Entity
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
        class Metric; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric> metric;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption : public Entity
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

        class Working; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working
        class Protect; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect> > protect;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working> > working;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working : public Entity
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
        class Dynamic; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic
        class Explicit_; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_
        class Lockdown; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic> dynamic; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_> explicit_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown> lockdown; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic : public Entity
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

        class Pce; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce
        class SegmentRouting; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce> pce; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting> segment_routing; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting : public Entity
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

        class Pce; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce> pce; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce : public Entity
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

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_ : public Entity
{
    public:
        Explicit_();
        ~Explicit_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identifier; //type: uint32
        class Name; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name> name;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exp_name; //type: string
        YLeaf segment_routing; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown : public Entity
{
    public:
        Lockdown();
        ~Lockdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect : public Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::id)
        YLeaf id;
        class Explicit_; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_
        class Lockdown; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_> explicit_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown> lockdown; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_ : public Entity
{
    public:
        Explicit_();
        ~Explicit_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf identifier; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown : public Entity
{
    public:
        Lockdown();
        ~Lockdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection : public Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: MetricEnum
        class Invalidation; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation
        class SegmentRouting; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation> invalidation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting> segment_routing;
                class MetricEnum;

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation : public Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: int32
        YLeaf drop; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting : public Entity
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

        class Adjacency; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency> adjacency;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency : public Entity
{
    public:
        Adjacency();
        ~Adjacency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protected_; //type: empty
        YLeaf unprotected; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency


class Native::Interface::VirtualTemplate::Tunnel::Rbscp : public Entity
{
    public:
        Rbscp();
        ~Rbscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ack_split; //type: uint8
        YLeaf delay; //type: empty
        YLeaf input_drop; //type: uint8
        YLeaf long_drop; //type: empty
        YLeaf report; //type: empty
        YLeaf window_stuff; //type: uint8

}; // Native::Interface::VirtualTemplate::Tunnel::Rbscp


class Native::Interface::VirtualTemplate::Tunnel::SrcPort : public Entity
{
    public:
        SrcPort();
        ~SrcPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_num; //type: uint16
        YLeaf dynamic; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::SrcPort


class Native::Interface::VirtualTemplate::Tunnel::Udlr : public Entity
{
    public:
        Udlr();
        ~Udlr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_resolution; //type: empty
        YLeaf receive_only; //type: string
        YLeaf send_only; //type: string

}; // Native::Interface::VirtualTemplate::Tunnel::Udlr


class Native::Interface::VirtualTemplate::Tunnel::Vlan : public Entity
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

        YLeaf id1; //type: uint16
        YLeaf hyphen; //type: empty
        YLeaf id2; //type: uint16

}; // Native::Interface::VirtualTemplate::Tunnel::Vlan


class Native::Interface::VirtualTemplate::Crypto : public Entity
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

        class Map; //type: Native::Interface::VirtualTemplate::Crypto::Map
        class Ipsec; //type: Native::Interface::VirtualTemplate::Crypto::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Crypto::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Crypto::Map> map;
        
}; // Native::Interface::VirtualTemplate::Crypto


class Native::Interface::VirtualTemplate::Crypto::Map : public Entity
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

}; // Native::Interface::VirtualTemplate::Crypto::Map


class Native::Interface::VirtualTemplate::Crypto::Ipsec : public Entity
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

}; // Native::Interface::VirtualTemplate::Crypto::Ipsec


class Native::Interface::VirtualTemplate::Cts : public Entity
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

        class Manual; //type: Native::Interface::VirtualTemplate::Cts::Manual

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual> manual; // presence node
        
}; // Native::Interface::VirtualTemplate::Cts


class Native::Interface::VirtualTemplate::Cts::Manual : public Entity
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

        class Policy; //type: Native::Interface::VirtualTemplate::Cts::Manual::Policy
        class Sap; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::VirtualTemplate::Cts::Manual::Propagate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Propagate> propagate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap> sap;
        
}; // Native::Interface::VirtualTemplate::Cts::Manual


class Native::Interface::VirtualTemplate::Cts::Manual::Policy : public Entity
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

        class Static_; //type: Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_> static_;
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Policy


class Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_ : public Entity
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

}; // Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_


class Native::Interface::VirtualTemplate::Cts::Manual::Sap : public Entity
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

        class Pmk; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk : public Entity
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
        class ModeList; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList : public Entity
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

        class GcmEncrypt; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public Entity
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

        class Gmac; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public Entity
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

}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public Entity
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

        class Gmac; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public Entity
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

}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::VirtualTemplate::Cts::Manual::Propagate : public Entity
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

}; // Native::Interface::VirtualTemplate::Cts::Manual::Propagate


class Native::Interface::VirtualTemplate::ServicePolicy : public Entity
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
        class Type; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type> type;
        
}; // Native::Interface::VirtualTemplate::ServicePolicy


class Native::Interface::VirtualTemplate::ServicePolicy::Type : public Entity
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

        class Control; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::Control> control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::VirtualTemplate::ServicePolicy::Type


class Native::Interface::VirtualTemplate::ServicePolicy::Type::Control : public Entity
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

}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::Control


class Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor : public Entity
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

}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain : public Entity
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

        class Input; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain


class Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input : public Entity
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

}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output : public Entity
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

}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::VirtualTemplate::Snmp : public Entity
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

        class Ifindex; //type: Native::Interface::VirtualTemplate::Snmp::Ifindex
        class Trap; //type: Native::Interface::VirtualTemplate::Snmp::Trap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Snmp::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Snmp::Trap> trap;
        
}; // Native::Interface::VirtualTemplate::Snmp


class Native::Interface::VirtualTemplate::Snmp::Ifindex : public Entity
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

}; // Native::Interface::VirtualTemplate::Snmp::Ifindex


class Native::Interface::VirtualTemplate::Snmp::Trap : public Entity
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
        class LinkStatusCapas; //type: Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas> link_status_capas;
        
}; // Native::Interface::VirtualTemplate::Snmp::Trap


class Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas : public Entity
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

        class LinkStatus; //type: Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus> link_status;
        
}; // Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas


class Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus : public Entity
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

        class Permit; //type: Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit> permit;
        
}; // Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus


class Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit : public Entity
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

}; // Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit


class Native::Interface::VirtualTemplate::Ppp : public Entity
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

        YLeaf accounting; //type: one of string, enumeration
        YLeaf authorization; //type: one of string, enumeration
        class Chap; //type: Native::Interface::VirtualTemplate::Ppp::Chap
        class Authentication; //type: Native::Interface::VirtualTemplate::Ppp::Authentication
        class Ipcp; //type: Native::Interface::VirtualTemplate::Ppp::Ipcp
        class Multilink; //type: Native::Interface::VirtualTemplate::Ppp::Multilink

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Chap> chap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Ipcp> ipcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink> multilink; // presence node
                class AccountingEnum;
        class AuthorizationEnum;

}; // Native::Interface::VirtualTemplate::Ppp


class Native::Interface::VirtualTemplate::Ppp::Chap : public Entity
{
    public:
        Chap();
        ~Chap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostname; //type: string
        YLeaf challenge_length; //type: uint8

}; // Native::Interface::VirtualTemplate::Ppp::Chap


class Native::Interface::VirtualTemplate::Ppp::Authentication : public Entity
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

        YLeaf method; //type: MethodEnum
        YLeaf list_name; //type: string
        YLeaf chap; //type: empty
        YLeaf callback; //type: empty
        YLeaf callin; //type: empty
        YLeaf callout; //type: empty
        YLeaf default_; //type: empty
        YLeaf eap; //type: empty
        YLeaf ms_chap; //type: empty
        YLeaf ms_chap_v2; //type: empty
        YLeaf one_time; //type: empty
        YLeaf optional; //type: empty
        YLeaf pap; //type: empty
        class MethodEnum;

}; // Native::Interface::VirtualTemplate::Ppp::Authentication


class Native::Interface::VirtualTemplate::Ppp::Ipcp : public Entity
{
    public:
        Ipcp();
        ~Ipcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dns; //type: Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns> dns;
        
}; // Native::Interface::VirtualTemplate::Ppp::Ipcp


class Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns : public Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary; //type: string

}; // Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns


class Native::Interface::VirtualTemplate::Ppp::Multilink : public Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: uint32
        class Links; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Links
        class Endpoint; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint
        class Fragment; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint> endpoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment> fragment;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Links> links;
        
}; // Native::Interface::VirtualTemplate::Ppp::Multilink


class Native::Interface::VirtualTemplate::Ppp::Multilink::Links : public Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Minimum; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum> minimum;
        
}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Links


class Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum : public Entity
{
    public:
        Minimum();
        ~Minimum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum_value; //type: uint8
        YLeaf mandatory; //type: empty

}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum


class Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint : public Entity
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

        YLeaf string; //type: string

}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint


class Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment : public Entity
{
    public:
        Fragment();
        ~Fragment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay> delay;
        
}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment


class Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay : public Entity
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

        YLeaf delay_value; //type: uint16
        YLeaf additional_delay_value; //type: uint16

}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay


class Native::Interface::VirtualTemplate::Mab : public Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eap; //type: empty

}; // Native::Interface::VirtualTemplate::Mab


class Native::Interface::VirtualTemplate::ZoneMember : public Entity
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

}; // Native::Interface::VirtualTemplate::ZoneMember


class Native::Interface::Virtualportgroup : public Entity
{
    public:
        Virtualportgroup();
        ~Virtualportgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        YLeaf channel_protocol; //type: ChannelProtocolEnum
        YLeaf duplex; //type: DuplexEnum
        class SwitchportConf; //type: Native::Interface::Virtualportgroup::SwitchportConf
        class Switchport; //type: Native::Interface::Virtualportgroup::Switchport
        class Arp; //type: Native::Interface::Virtualportgroup::Arp
        class Backup; //type: Native::Interface::Virtualportgroup::Backup
        class Cemoudp; //type: Native::Interface::Virtualportgroup::Cemoudp
        class CwsTunnel; //type: Native::Interface::Virtualportgroup::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Virtualportgroup::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Virtualportgroup::Encapsulation
        class FairQueueConf; //type: Native::Interface::Virtualportgroup::FairQueueConf
        class FairQueue; //type: Native::Interface::Virtualportgroup::FairQueue
        class Flowcontrol; //type: Native::Interface::Virtualportgroup::Flowcontrol
        class Isis; //type: Native::Interface::Virtualportgroup::Isis
        class KeepaliveSettings; //type: Native::Interface::Virtualportgroup::KeepaliveSettings
        class Bfd; //type: Native::Interface::Virtualportgroup::Bfd
        class Bandwidth; //type: Native::Interface::Virtualportgroup::Bandwidth
        class Dampening; //type: Native::Interface::Virtualportgroup::Dampening
        class Domain; //type: Native::Interface::Virtualportgroup::Domain
        class HoldQueue; //type: Native::Interface::Virtualportgroup::HoldQueue
        class Mpls; //type: Native::Interface::Virtualportgroup::Mpls
        class IpVrf; //type: Native::Interface::Virtualportgroup::IpVrf
        class Vrf; //type: Native::Interface::Virtualportgroup::Vrf
        class Ip; //type: Native::Interface::Virtualportgroup::Ip
        class Ipv6; //type: Native::Interface::Virtualportgroup::Ipv6
        class Logging; //type: Native::Interface::Virtualportgroup::Logging
        class Mdix; //type: Native::Interface::Virtualportgroup::Mdix
        class Mop; //type: Native::Interface::Virtualportgroup::Mop
        class Interface_Qos; //type: Native::Interface::Virtualportgroup::Interface_Qos
        class Standby; //type: Native::Interface::Virtualportgroup::Standby
        class AccessSession; //type: Native::Interface::Virtualportgroup::AccessSession
        class StormControl; //type: Native::Interface::Virtualportgroup::StormControl
        class Trust; //type: Native::Interface::Virtualportgroup::Trust
        class Utd; //type: Native::Interface::Virtualportgroup::Utd
        class PriorityQueue; //type: Native::Interface::Virtualportgroup::PriorityQueue
        class RcvQueue; //type: Native::Interface::Virtualportgroup::RcvQueue
        class Peer; //type: Native::Interface::Virtualportgroup::Peer
        class PmPath; //type: Native::Interface::Virtualportgroup::PmPath
        class CarrierDelay; //type: Native::Interface::Virtualportgroup::CarrierDelay
        class ChannelGroup; //type: Native::Interface::Virtualportgroup::ChannelGroup
        class Ethernet; //type: Native::Interface::Virtualportgroup::Ethernet
        class Negotiation; //type: Native::Interface::Virtualportgroup::Negotiation
        class Synchronous; //type: Native::Interface::Virtualportgroup::Synchronous
        class Speed; //type: Native::Interface::Virtualportgroup::Speed
        class Plim; //type: Native::Interface::Virtualportgroup::Plim
        class Pppoe; //type: Native::Interface::Virtualportgroup::Pppoe
        class Service; //type: Native::Interface::Virtualportgroup::Service
        class Cts; //type: Native::Interface::Virtualportgroup::Cts
        class ServicePolicy; //type: Native::Interface::Virtualportgroup::ServicePolicy
        class Snmp; //type: Native::Interface::Virtualportgroup::Snmp
        class Mab; //type: Native::Interface::Virtualportgroup::Mab

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Mab> mab; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;
        class ChannelProtocolEnum;
        class DuplexEnum;

}; // Native::Interface::Virtualportgroup


class Native::Interface::Virtualportgroup::SwitchportConf : public Entity
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

}; // Native::Interface::Virtualportgroup::SwitchportConf


class Native::Interface::Virtualportgroup::Switchport : public Entity
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


}; // Native::Interface::Virtualportgroup::Switchport


class Native::Interface::Virtualportgroup::Arp : public Entity
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

}; // Native::Interface::Virtualportgroup::Arp


class Native::Interface::Virtualportgroup::Backup : public Entity
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

        class Delay; //type: Native::Interface::Virtualportgroup::Backup::Delay
        class Interface_; //type: Native::Interface::Virtualportgroup::Backup::Interface_
        class Load; //type: Native::Interface::Virtualportgroup::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Load> load;
        
}; // Native::Interface::Virtualportgroup::Backup


class Native::Interface::Virtualportgroup::Backup::Delay : public Entity
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

        YLeaf failure; //type: one of uint32, enumeration
        YLeaf secondary_disable; //type: one of uint32, enumeration
        class FailureEnum;
        class SecondaryDisableEnum;

}; // Native::Interface::Virtualportgroup::Backup::Delay


class Native::Interface::Virtualportgroup::Backup::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Virtualportgroup::Backup::Interface_


class Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface


class Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface


class Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Virtualportgroup::Backup::Load : public Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kickin; //type: one of uint32, enumeration
        YLeaf kickout; //type: one of uint32, enumeration
        class KickinEnum;
        class KickoutEnum;

}; // Native::Interface::Virtualportgroup::Backup::Load


class Native::Interface::Virtualportgroup::Cemoudp : public Entity
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

        class Reserve; //type: Native::Interface::Virtualportgroup::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Virtualportgroup::Cemoudp


class Native::Interface::Virtualportgroup::Cemoudp::Reserve : public Entity
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

}; // Native::Interface::Virtualportgroup::Cemoudp::Reserve


class Native::Interface::Virtualportgroup::CwsTunnel : public Entity
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
        class Out; //type: Native::Interface::Virtualportgroup::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::CwsTunnel::Out> out;
        
}; // Native::Interface::Virtualportgroup::CwsTunnel


class Native::Interface::Virtualportgroup::CwsTunnel::Out : public Entity
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

}; // Native::Interface::Virtualportgroup::CwsTunnel::Out


class Native::Interface::Virtualportgroup::L2ProtocolTunnel : public Entity
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
        class DropThreshold; //type: Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Virtualportgroup::L2ProtocolTunnel


class Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold : public Entity
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

}; // Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold


class Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold : public Entity
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

}; // Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Virtualportgroup::Encapsulation : public Entity
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

        class Dot1Q; //type: Native::Interface::Virtualportgroup::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Virtualportgroup::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Virtualportgroup::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Virtualportgroup::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Virtualportgroup::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Virtualportgroup::Encapsulation


class Native::Interface::Virtualportgroup::Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::Virtualportgroup::Encapsulation::Dot1Q


class Native::Interface::Virtualportgroup::Encapsulation::Isl : public Entity
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

}; // Native::Interface::Virtualportgroup::Encapsulation::Isl


class Native::Interface::Virtualportgroup::Encapsulation::Ppp : public Entity
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


}; // Native::Interface::Virtualportgroup::Encapsulation::Ppp


class Native::Interface::Virtualportgroup::Encapsulation::Slip : public Entity
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


}; // Native::Interface::Virtualportgroup::Encapsulation::Slip


class Native::Interface::Virtualportgroup::Encapsulation::FrameRelay : public Entity
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

}; // Native::Interface::Virtualportgroup::Encapsulation::FrameRelay


class Native::Interface::Virtualportgroup::FairQueueConf : public Entity
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

}; // Native::Interface::Virtualportgroup::FairQueueConf


class Native::Interface::Virtualportgroup::FairQueue : public Entity
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

}; // Native::Interface::Virtualportgroup::FairQueue


class Native::Interface::Virtualportgroup::Flowcontrol : public Entity
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

}; // Native::Interface::Virtualportgroup::Flowcontrol


class Native::Interface::Virtualportgroup::Isis : public Entity
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


}; // Native::Interface::Virtualportgroup::Isis


class Native::Interface::Virtualportgroup::KeepaliveSettings : public Entity
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

        class Keepalive; //type: Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Virtualportgroup::KeepaliveSettings


class Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive : public Entity
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

}; // Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive


class Native::Interface::Virtualportgroup::Bfd : public Entity
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

        YLeaf template_; //type: string
        YLeaf echo; //type: boolean
        class Interval; //type: Native::Interface::Virtualportgroup::Bfd::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Bfd::Interval> interval;
        
}; // Native::Interface::Virtualportgroup::Bfd


class Native::Interface::Virtualportgroup::Bfd::Interval : public Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msecs; //type: uint16
        YLeaf min_rx; //type: uint16
        YLeaf multiplier; //type: uint8

}; // Native::Interface::Virtualportgroup::Bfd::Interval

class Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;

};

class Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum : public Enum
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

class Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum : public Enum
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

class Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum : public Enum
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

class Native::Interface::VirtualTemplate::Tunnel::SnoopingEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;

};

class Native::Interface::VirtualTemplate::Tunnel::Mode::UdpEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf multipoint;

};

class Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::GreEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf te;

};

class Native::Interface::VirtualTemplate::Crypto::Ipsec::DfBitEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf copy;
        static const Enum::YLeaf set;

};

class Native::Interface::VirtualTemplate::Crypto::Ipsec::FragmentationEnum : public Enum
{
    public:
        static const Enum::YLeaf after_encryption;
        static const Enum::YLeaf before_encryption;

};

class Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::VirtualTemplate::Ppp::AccountingEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Interface::VirtualTemplate::Ppp::AuthorizationEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Interface::VirtualTemplate::Ppp::Authentication::MethodEnum : public Enum
{
    public:
        static const Enum::YLeaf chap;
        static const Enum::YLeaf eap;
        static const Enum::YLeaf ms_chap;
        static const Enum::YLeaf ms_chap_v2;
        static const Enum::YLeaf pap;

};

class Native::Interface::Virtualportgroup::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Virtualportgroup::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Virtualportgroup::ChannelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf pagp;

};

class Native::Interface::Virtualportgroup::DuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class Native::Interface::Virtualportgroup::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Virtualportgroup::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Virtualportgroup::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Virtualportgroup::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Virtualportgroup::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Virtualportgroup::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_66_ */

