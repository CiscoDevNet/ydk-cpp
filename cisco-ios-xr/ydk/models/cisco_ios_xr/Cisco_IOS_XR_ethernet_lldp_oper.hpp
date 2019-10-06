#ifndef _CISCO_IOS_XR_ETHERNET_LLDP_OPER_
#define _CISCO_IOS_XR_ETHERNET_LLDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_lldp_oper {

class Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class GlobalLldp; //type: Lldp::GlobalLldp
        class Nodes; //type: Lldp::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::GlobalLldp> global_lldp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes> nodes;
        
}; // Lldp


class Lldp::GlobalLldp : public ydk::Entity
{
    public:
        GlobalLldp();
        ~GlobalLldp();

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

        class LldpInfo; //type: Lldp::GlobalLldp::LldpInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::GlobalLldp::LldpInfo> lldp_info;
        
}; // Lldp::GlobalLldp


class Lldp::GlobalLldp::LldpInfo : public ydk::Entity
{
    public:
        LldpInfo();
        ~LldpInfo();

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

        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf chassis_id_sub_type; //type: uint8
        ydk::YLeaf system_name; //type: string
        ydk::YLeaf timer; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf re_init; //type: uint32

}; // Lldp::GlobalLldp::LldpInfo


class Lldp::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Lldp::Nodes::Node

        ydk::YList node;
        
}; // Lldp::Nodes


class Lldp::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class Neighbors; //type: Lldp::Nodes::Node::Neighbors
        class Interfaces; //type: Lldp::Nodes::Node::Interfaces
        class Statistics; //type: Lldp::Nodes::Node::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Statistics> statistics;
        
}; // Lldp::Nodes::Node


class Lldp::Nodes::Node::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Devices; //type: Lldp::Nodes::Node::Neighbors::Devices
        class Details; //type: Lldp::Nodes::Node::Neighbors::Details
        class Summaries; //type: Lldp::Nodes::Node::Neighbors::Summaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices> devices;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details> details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries> summaries;
        
}; // Lldp::Nodes::Node::Neighbors


class Lldp::Nodes::Node::Neighbors::Devices : public ydk::Entity
{
    public:
        Devices();
        ~Devices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Device; //type: Lldp::Nodes::Node::Neighbors::Devices::Device

        ydk::YList device;
        
}; // Lldp::Nodes::Node::Neighbors::Devices


class Lldp::Nodes::Node::Neighbors::Devices::Device : public ydk::Entity
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

        ydk::YLeaf device_id; //type: string
        ydk::YLeaf interface_name; //type: string
        class LldpNeighbor; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor

        ydk::YList lldp_neighbor;
        
}; // Lldp::Nodes::Node::Neighbors::Devices::Device


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor : public ydk::Entity
{
    public:
        LldpNeighbor();
        ~LldpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receiving_interface_name; //type: string
        ydk::YLeaf receiving_parent_interface_name; //type: string
        ydk::YLeaf device_id; //type: string
        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf port_id_detail; //type: string
        ydk::YLeaf header_version; //type: uint8
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf enabled_capabilities; //type: string
        ydk::YLeaf platform; //type: string
        class Detail; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail
        class Mib; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib> mib;
        
}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_mac_address; //type: string
        ydk::YLeaf port_description; //type: string
        ydk::YLeaf system_name; //type: string
        ydk::YLeaf system_description; //type: string
        ydk::YLeaf time_remaining; //type: uint32
        ydk::YLeaf system_capabilities; //type: string
        ydk::YLeaf enabled_capabilities; //type: string
        ydk::YLeaf auto_negotiation; //type: string
        ydk::YLeaf physical_media_capabilities; //type: string
        ydk::YLeaf media_attachment_unit_type; //type: uint32
        ydk::YLeaf port_vlan_id; //type: uint32
        class NetworkAddresses; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses> network_addresses;
        
}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses : public ydk::Entity
{
    public:
        NetworkAddresses();
        ~NetworkAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpAddrEntry; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry

        ydk::YList lldp_addr_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry : public ydk::Entity
{
    public:
        LldpAddrEntry();
        ~LldpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ma_subtype; //type: uint8
        ydk::YLeaf if_num; //type: uint32
        class Address; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address> address;
        
}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: LldpL3AddrProtocol
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rem_time_mark; //type: uint32
        ydk::YLeaf rem_local_port_num; //type: uint32
        ydk::YLeaf rem_index; //type: uint32
        ydk::YLeaf chassis_id_sub_type; //type: uint8
        ydk::YLeaf chassis_id_len; //type: uint16
        ydk::YLeaf port_id_sub_type; //type: uint8
        ydk::YLeaf port_id_len; //type: uint16
        ydk::YLeaf combined_capabilities; //type: uint32
        class UnknownTlvList; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList
        class OrgDefTlvList; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList> unknown_tlv_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList> org_def_tlv_list;
        
}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList : public ydk::Entity
{
    public:
        UnknownTlvList();
        ~UnknownTlvList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpUnknownTlvEntry; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry

        ydk::YList lldp_unknown_tlv_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry : public ydk::Entity
{
    public:
        LldpUnknownTlvEntry();
        ~LldpUnknownTlvEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint8
        ydk::YLeaf tlv_value; //type: string

}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList : public ydk::Entity
{
    public:
        OrgDefTlvList();
        ~OrgDefTlvList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpOrgDefTlvEntry; //type: Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry

        ydk::YList lldp_org_def_tlv_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList


class Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry : public ydk::Entity
{
    public:
        LldpOrgDefTlvEntry();
        ~LldpOrgDefTlvEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: uint32
        ydk::YLeaf tlv_subtype; //type: uint8
        ydk::YLeaf tlv_info_indes; //type: uint32
        ydk::YLeaf tlv_value; //type: string

}; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry


class Lldp::Nodes::Node::Neighbors::Details : public ydk::Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detail; //type: Lldp::Nodes::Node::Neighbors::Details::Detail

        ydk::YList detail;
        
}; // Lldp::Nodes::Node::Neighbors::Details


class Lldp::Nodes::Node::Neighbors::Details::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf device_id; //type: string
        class LldpNeighbor; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor

        ydk::YList lldp_neighbor;
        
}; // Lldp::Nodes::Node::Neighbors::Details::Detail


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor : public ydk::Entity
{
    public:
        LldpNeighbor();
        ~LldpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receiving_interface_name; //type: string
        ydk::YLeaf receiving_parent_interface_name; //type: string
        ydk::YLeaf device_id; //type: string
        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf port_id_detail; //type: string
        ydk::YLeaf header_version; //type: uint8
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf enabled_capabilities; //type: string
        ydk::YLeaf platform; //type: string
        class Detail_; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_
        class Mib; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib> mib;
        
}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_ : public ydk::Entity
{
    public:
        Detail_();
        ~Detail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_mac_address; //type: string
        ydk::YLeaf port_description; //type: string
        ydk::YLeaf system_name; //type: string
        ydk::YLeaf system_description; //type: string
        ydk::YLeaf time_remaining; //type: uint32
        ydk::YLeaf system_capabilities; //type: string
        ydk::YLeaf enabled_capabilities; //type: string
        ydk::YLeaf auto_negotiation; //type: string
        ydk::YLeaf physical_media_capabilities; //type: string
        ydk::YLeaf media_attachment_unit_type; //type: uint32
        ydk::YLeaf port_vlan_id; //type: uint32
        class NetworkAddresses; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses> network_addresses;
        
}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses : public ydk::Entity
{
    public:
        NetworkAddresses();
        ~NetworkAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpAddrEntry; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry

        ydk::YList lldp_addr_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry : public ydk::Entity
{
    public:
        LldpAddrEntry();
        ~LldpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ma_subtype; //type: uint8
        ydk::YLeaf if_num; //type: uint32
        class Address; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address> address;
        
}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: LldpL3AddrProtocol
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rem_time_mark; //type: uint32
        ydk::YLeaf rem_local_port_num; //type: uint32
        ydk::YLeaf rem_index; //type: uint32
        ydk::YLeaf chassis_id_sub_type; //type: uint8
        ydk::YLeaf chassis_id_len; //type: uint16
        ydk::YLeaf port_id_sub_type; //type: uint8
        ydk::YLeaf port_id_len; //type: uint16
        ydk::YLeaf combined_capabilities; //type: uint32
        class UnknownTlvList; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList
        class OrgDefTlvList; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList> unknown_tlv_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList> org_def_tlv_list;
        
}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList : public ydk::Entity
{
    public:
        UnknownTlvList();
        ~UnknownTlvList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpUnknownTlvEntry; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry

        ydk::YList lldp_unknown_tlv_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry : public ydk::Entity
{
    public:
        LldpUnknownTlvEntry();
        ~LldpUnknownTlvEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint8
        ydk::YLeaf tlv_value; //type: string

}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList : public ydk::Entity
{
    public:
        OrgDefTlvList();
        ~OrgDefTlvList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpOrgDefTlvEntry; //type: Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry

        ydk::YList lldp_org_def_tlv_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList


class Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry : public ydk::Entity
{
    public:
        LldpOrgDefTlvEntry();
        ~LldpOrgDefTlvEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: uint32
        ydk::YLeaf tlv_subtype; //type: uint8
        ydk::YLeaf tlv_info_indes; //type: uint32
        ydk::YLeaf tlv_value; //type: string

}; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry


class Lldp::Nodes::Node::Neighbors::Summaries : public ydk::Entity
{
    public:
        Summaries();
        ~Summaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summary; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary

        ydk::YList summary;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries


class Lldp::Nodes::Node::Neighbors::Summaries::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf device_id; //type: string
        class LldpNeighbor; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor

        ydk::YList lldp_neighbor;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor : public ydk::Entity
{
    public:
        LldpNeighbor();
        ~LldpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receiving_interface_name; //type: string
        ydk::YLeaf receiving_parent_interface_name; //type: string
        ydk::YLeaf device_id; //type: string
        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf port_id_detail; //type: string
        ydk::YLeaf header_version; //type: uint8
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf enabled_capabilities; //type: string
        ydk::YLeaf platform; //type: string
        class Detail; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail
        class Mib; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib> mib;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_mac_address; //type: string
        ydk::YLeaf port_description; //type: string
        ydk::YLeaf system_name; //type: string
        ydk::YLeaf system_description; //type: string
        ydk::YLeaf time_remaining; //type: uint32
        ydk::YLeaf system_capabilities; //type: string
        ydk::YLeaf enabled_capabilities; //type: string
        ydk::YLeaf auto_negotiation; //type: string
        ydk::YLeaf physical_media_capabilities; //type: string
        ydk::YLeaf media_attachment_unit_type; //type: uint32
        ydk::YLeaf port_vlan_id; //type: uint32
        class NetworkAddresses; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses> network_addresses;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses : public ydk::Entity
{
    public:
        NetworkAddresses();
        ~NetworkAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpAddrEntry; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry

        ydk::YList lldp_addr_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry : public ydk::Entity
{
    public:
        LldpAddrEntry();
        ~LldpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ma_subtype; //type: uint8
        ydk::YLeaf if_num; //type: uint32
        class Address; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address> address;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: LldpL3AddrProtocol
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rem_time_mark; //type: uint32
        ydk::YLeaf rem_local_port_num; //type: uint32
        ydk::YLeaf rem_index; //type: uint32
        ydk::YLeaf chassis_id_sub_type; //type: uint8
        ydk::YLeaf chassis_id_len; //type: uint16
        ydk::YLeaf port_id_sub_type; //type: uint8
        ydk::YLeaf port_id_len; //type: uint16
        ydk::YLeaf combined_capabilities; //type: uint32
        class UnknownTlvList; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList
        class OrgDefTlvList; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList> unknown_tlv_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList> org_def_tlv_list;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList : public ydk::Entity
{
    public:
        UnknownTlvList();
        ~UnknownTlvList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpUnknownTlvEntry; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry

        ydk::YList lldp_unknown_tlv_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry : public ydk::Entity
{
    public:
        LldpUnknownTlvEntry();
        ~LldpUnknownTlvEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint8
        ydk::YLeaf tlv_value; //type: string

}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList : public ydk::Entity
{
    public:
        OrgDefTlvList();
        ~OrgDefTlvList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpOrgDefTlvEntry; //type: Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry

        ydk::YList lldp_org_def_tlv_entry;
        
}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList


class Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry : public ydk::Entity
{
    public:
        LldpOrgDefTlvEntry();
        ~LldpOrgDefTlvEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: uint32
        ydk::YLeaf tlv_subtype; //type: uint8
        ydk::YLeaf tlv_info_indes; //type: uint32
        ydk::YLeaf tlv_value; //type: string

}; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry


class Lldp::Nodes::Node::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Lldp::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // Lldp::Nodes::Node::Interfaces


class Lldp::Nodes::Node::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf tx_enabled; //type: uint8
        ydk::YLeaf rx_enabled; //type: uint8
        ydk::YLeaf tx_state; //type: string
        ydk::YLeaf rx_state; //type: string
        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf port_id; //type: string
        ydk::YLeaf port_id_sub_type; //type: uint8
        ydk::YLeaf port_description; //type: string
        class LocalNetworkAddresses; //type: Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses> local_network_addresses;
        
}; // Lldp::Nodes::Node::Interfaces::Interface


class Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses : public ydk::Entity
{
    public:
        LocalNetworkAddresses();
        ~LocalNetworkAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LldpAddrEntry; //type: Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry

        ydk::YList lldp_addr_entry;
        
}; // Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses


class Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry : public ydk::Entity
{
    public:
        LldpAddrEntry();
        ~LldpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ma_subtype; //type: uint8
        ydk::YLeaf if_num; //type: uint32
        class Address; //type: Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address> address;
        
}; // Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry


class Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: LldpL3AddrProtocol
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address


class Lldp::Nodes::Node::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmitted_packets; //type: uint32
        ydk::YLeaf aged_out_entries; //type: uint32
        ydk::YLeaf discarded_packets; //type: uint32
        ydk::YLeaf bad_packets; //type: uint32
        ydk::YLeaf received_packets; //type: uint32
        ydk::YLeaf discarded_tl_vs; //type: uint32
        ydk::YLeaf unrecognized_tl_vs; //type: uint32
        ydk::YLeaf out_of_memory_errors; //type: uint32
        ydk::YLeaf encapsulation_errors; //type: uint32
        ydk::YLeaf queue_overflow_errors; //type: uint32
        ydk::YLeaf table_overflow_errors; //type: uint32

}; // Lldp::Nodes::Node::Statistics

class LldpL3AddrProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LLDP_OPER_ */

