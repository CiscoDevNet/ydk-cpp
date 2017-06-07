#ifndef _CISCO_IOS_XR_CDP_OPER_
#define _CISCO_IOS_XR_CDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_cdp_oper {

class Cdp : public Entity
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
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: Cdp::Nodes

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes> nodes;
        
}; // Cdp


class Cdp::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Cdp::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node> > node;
        
}; // Cdp::Nodes


class Cdp::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Neighbors; //type: Cdp::Nodes::Node::Neighbors
        class Statistics; //type: Cdp::Nodes::Node::Statistics
        class Interfaces; //type: Cdp::Nodes::Node::Interfaces

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Statistics> statistics;
        
}; // Cdp::Nodes::Node


class Cdp::Nodes::Node::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Details; //type: Cdp::Nodes::Node::Neighbors::Details
        class Devices; //type: Cdp::Nodes::Node::Neighbors::Devices
        class Summaries; //type: Cdp::Nodes::Node::Neighbors::Summaries

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details> details;
        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices> devices;
        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries> summaries;
        
}; // Cdp::Nodes::Node::Neighbors


class Cdp::Nodes::Node::Neighbors::Details : public Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Detail; //type: Cdp::Nodes::Node::Neighbors::Details::Detail

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail> > detail;
        
}; // Cdp::Nodes::Node::Neighbors::Details


class Cdp::Nodes::Node::Neighbors::Details::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf device_id; //type: string
        class CdpNeighbor; //type: Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor> > cdp_neighbor;
        
}; // Cdp::Nodes::Node::Neighbors::Details::Detail


class Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor : public Entity
{
    public:
        CdpNeighbor();
        ~CdpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receiving_interface_name; //type: string
        YLeaf device_id; //type: string
        YLeaf port_id; //type: string
        YLeaf header_version; //type: uint8
        YLeaf hold_time; //type: uint16
        YLeaf capabilities; //type: string
        YLeaf platform; //type: string
        class Detail_; //type: Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_> detail;
        
}; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor


class Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_ : public Entity
{
    public:
        Detail_();
        ~Detail_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf vtp_domain; //type: string
        YLeaf native_vlan; //type: uint32
        YLeaf duplex; //type: CdpDuplexEnum
        YLeaf system_name; //type: string
        class NetworkAddresses; //type: Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses
        class ProtocolHelloList; //type: Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses> network_addresses;
        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList> protocol_hello_list;
        
}; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_


class Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses : public Entity
{
    public:
        NetworkAddresses();
        ~NetworkAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CdpAddrEntry; //type: Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry> > cdp_addr_entry;
        
}; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses


class Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry : public Entity
{
    public:
        CdpAddrEntry();
        ~CdpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address> address;
        
}; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry


class Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address : public Entity
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

        YLeaf address_type; //type: CdpL3AddrProtocolEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address


class Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList : public Entity
{
    public:
        ProtocolHelloList();
        ~ProtocolHelloList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CdpProtHelloEntry; //type: Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry> > cdp_prot_hello_entry;
        
}; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList


class Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry : public Entity
{
    public:
        CdpProtHelloEntry();
        ~CdpProtHelloEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_message; //type: string

}; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry


class Cdp::Nodes::Node::Neighbors::Devices : public Entity
{
    public:
        Devices();
        ~Devices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Device; //type: Cdp::Nodes::Node::Neighbors::Devices::Device

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device> > device;
        
}; // Cdp::Nodes::Node::Neighbors::Devices


class Cdp::Nodes::Node::Neighbors::Devices::Device : public Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device_id; //type: string
        class CdpNeighbor; //type: Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor> > cdp_neighbor;
        
}; // Cdp::Nodes::Node::Neighbors::Devices::Device


class Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor : public Entity
{
    public:
        CdpNeighbor();
        ~CdpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receiving_interface_name; //type: string
        YLeaf device_id; //type: string
        YLeaf port_id; //type: string
        YLeaf header_version; //type: uint8
        YLeaf hold_time; //type: uint16
        YLeaf capabilities; //type: string
        YLeaf platform; //type: string
        class Detail; //type: Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail> detail;
        
}; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor


class Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf vtp_domain; //type: string
        YLeaf native_vlan; //type: uint32
        YLeaf duplex; //type: CdpDuplexEnum
        YLeaf system_name; //type: string
        class NetworkAddresses; //type: Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses
        class ProtocolHelloList; //type: Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses> network_addresses;
        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList> protocol_hello_list;
        
}; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail


class Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses : public Entity
{
    public:
        NetworkAddresses();
        ~NetworkAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CdpAddrEntry; //type: Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry> > cdp_addr_entry;
        
}; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses


class Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry : public Entity
{
    public:
        CdpAddrEntry();
        ~CdpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address> address;
        
}; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry


class Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address : public Entity
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

        YLeaf address_type; //type: CdpL3AddrProtocolEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address


class Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList : public Entity
{
    public:
        ProtocolHelloList();
        ~ProtocolHelloList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CdpProtHelloEntry; //type: Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry> > cdp_prot_hello_entry;
        
}; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList


class Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry : public Entity
{
    public:
        CdpProtHelloEntry();
        ~CdpProtHelloEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_message; //type: string

}; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry


class Cdp::Nodes::Node::Neighbors::Summaries : public Entity
{
    public:
        Summaries();
        ~Summaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: Cdp::Nodes::Node::Neighbors::Summaries::Summary

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary> > summary;
        
}; // Cdp::Nodes::Node::Neighbors::Summaries


class Cdp::Nodes::Node::Neighbors::Summaries::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf device_id; //type: string
        class CdpNeighbor; //type: Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor> > cdp_neighbor;
        
}; // Cdp::Nodes::Node::Neighbors::Summaries::Summary


class Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor : public Entity
{
    public:
        CdpNeighbor();
        ~CdpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receiving_interface_name; //type: string
        YLeaf device_id; //type: string
        YLeaf port_id; //type: string
        YLeaf header_version; //type: uint8
        YLeaf hold_time; //type: uint16
        YLeaf capabilities; //type: string
        YLeaf platform; //type: string
        class Detail; //type: Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail> detail;
        
}; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor


class Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: string
        YLeaf vtp_domain; //type: string
        YLeaf native_vlan; //type: uint32
        YLeaf duplex; //type: CdpDuplexEnum
        YLeaf system_name; //type: string
        class NetworkAddresses; //type: Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses
        class ProtocolHelloList; //type: Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses> network_addresses;
        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList> protocol_hello_list;
        
}; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail


class Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses : public Entity
{
    public:
        NetworkAddresses();
        ~NetworkAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CdpAddrEntry; //type: Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry> > cdp_addr_entry;
        
}; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses


class Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry : public Entity
{
    public:
        CdpAddrEntry();
        ~CdpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address

        std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address> address;
        
}; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry


class Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address : public Entity
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

        YLeaf address_type; //type: CdpL3AddrProtocolEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address


class Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList : public Entity
{
    public:
        ProtocolHelloList();
        ~ProtocolHelloList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CdpProtHelloEntry; //type: Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry> > cdp_prot_hello_entry;
        
}; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList


class Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry : public Entity
{
    public:
        CdpProtHelloEntry();
        ~CdpProtHelloEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_message; //type: string

}; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry


class Cdp::Nodes::Node::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint32
        YLeaf received_packets_v1; //type: uint32
        YLeaf received_packets_v2; //type: uint32
        YLeaf transmitted_packets; //type: uint32
        YLeaf transmitted_packets_v1; //type: uint32
        YLeaf transmitted_packets_v2; //type: uint32
        YLeaf header_errors; //type: uint32
        YLeaf checksum_errors; //type: uint32
        YLeaf encapsulation_errors; //type: uint32
        YLeaf bad_packet_errors; //type: uint32
        YLeaf out_of_memory_errors; //type: uint32
        YLeaf truncated_packet_errors; //type: uint32
        YLeaf header_version_errors; //type: uint32
        YLeaf open_file_errors; //type: uint32

}; // Cdp::Nodes::Node::Statistics


class Cdp::Nodes::Node::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Cdp::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Interfaces::Interface> > interface;
        
}; // Cdp::Nodes::Node::Interfaces


class Cdp::Nodes::Node::Interfaces::Interface : public Entity
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
        YLeaf interface_handle; //type: string
        YLeaf basecaps_state; //type: uint32
        YLeaf cdp_protocol_state; //type: uint32
        YLeaf interface_encaps; //type: string

}; // Cdp::Nodes::Node::Interfaces::Interface

class CdpDuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf cdp_dplx_none;
        static const Enum::YLeaf cdp_dplx_half;
        static const Enum::YLeaf cdp_dplx_full;

};

class CdpL3AddrProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_CDP_OPER_ */

