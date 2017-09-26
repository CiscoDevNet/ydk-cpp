#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_5_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability : public ydk::Entity
{
    public:
        NeighborCapability();
        ~NeighborCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class Sent; //type: MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent> > sent;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors : public ydk::Entity
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

        class Neighbor; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class ProtocolInformation; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation> tcp_information;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation : public ydk::Entity
{
    public:
        DetailedInformation();
        ~DetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_holdtime; //type: uint32
        ydk::YLeaf keep_alive_interval; //type: uint32
        ydk::YLeaf peer_state; //type: string
        ydk::YLeaf has_ipv4_inbound; //type: boolean
        ydk::YLeaf inbound_ipv4acl; //type: string
        ydk::YLeaf has_ipv6_inbound; //type: boolean
        ydk::YLeaf inbound_ipv6acl; //type: string
        ydk::YLeaf has_ipv4_outbound; //type: boolean
        ydk::YLeaf outbound_ipv4acl; //type: string
        ydk::YLeaf has_ipv6_outbound; //type: boolean
        ydk::YLeaf outbound_ipv6acl; //type: string
        ydk::YLeaf has_sp; //type: boolean
        ydk::YLeaf sp_state; //type: string
        ydk::YLeaf sp_has_acl; //type: boolean
        ydk::YLeaf spacl; //type: string
        ydk::YLeaf sp_has_duration; //type: boolean
        ydk::YLeaf sp_duration; //type: uint32
        ydk::YLeaf spht_running; //type: boolean
        ydk::YLeaf spht_remaining; //type: uint32
        ydk::YLeaf nsr_sync_state; //type: MgmtLdpNsrPeerSyncState
        ydk::YLeaf nsr_last_sync_error; //type: MgmtLdpNsrPeerSyncErr
        ydk::YLeaf nsr_last_sync_nack_reason; //type: MgmtLdpNsrPeerLdpSyncNackRsn
        ydk::YLeaf bgp_advertisement_state; //type: MgmtLdpNbrBgpAdvtState
        ydk::YLeaf advertise_bgp_prefixes; //type: boolean
        class Capabilities; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sent; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public ydk::Entity
{
    public:
        Ipv4DuplicateAddress();
        ~Ipv4DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public ydk::Entity
{
    public:
        Ipv6DuplicateAddress();
        ~Ipv6DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public ydk::Entity
{
    public:
        LdpNbrBoundIpv4AddressInfo();
        ~LdpNbrBoundIpv4AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public ydk::Entity
{
    public:
        LdpNbrBoundIpv6AddressInfo();
        ~LdpNbrBoundIpv6AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public ydk::Entity
{
    public:
        LdpNbrIpv4AdjInfo();
        ~LdpNbrIpv4AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public ydk::Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

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
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public ydk::Entity
{
    public:
        LdpNbrIpv6AdjInfo();
        ~LdpNbrIpv6AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public ydk::Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

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
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation : public ydk::Entity
{
    public:
        ProtocolInformation();
        ~ProtocolInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ta_holdtime; //type: uint32
        ydk::YLeaf ta_state; //type: string
        ydk::YLeaf ta_pies_sent; //type: uint32
        ydk::YLeaf ta_pies_rcvd; //type: uint32
        ydk::YLeaf ta_up_time_seconds; //type: uint32
        ydk::YLeaf downstream_on_demand; //type: boolean
        class TaGracefulRestartAdjacency; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public ydk::Entity
{
    public:
        TaGracefulRestartAdjacency();
        ~TaGracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf reconnect_timeout; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation : public ydk::Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf is_md5_on; //type: boolean
        class ForeignHost; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public ydk::Entity
{
    public:
        ForeignHost();
        ~ForeignHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost : public ydk::Entity
{
    public:
        LocalHost();
        ~LocalHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPending; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending> nsr_pending;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics : public ydk::Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaGlobal; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal : public ydk::Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InitSync; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync : public ydk::Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_cfged; //type: boolean
        ydk::YLeaf nsr_synced; //type: boolean
        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_peers; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_pfx; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_lcl_addr_wd; //type: uint32
        ydk::YLeaf num_lbl_adv; //type: uint32
        ydk::YLeaf ipc_msg_tx_cnt; //type: uint32
        ydk::YLeaf ipc_msg_tx_bytes; //type: uint32
        ydk::YLeaf ipc_msg_rx_cnt; //type: uint32
        ydk::YLeaf ipc_msg_rx_bytes; //type: uint32
        ydk::YLeaf ipc_max_tx_batch_bytes; //type: uint32
        ydk::YLeaf ipc_max_rx_batch_bytes; //type: uint32
        ydk::YLeaf ipc_tx_fail_cnt; //type: uint32
        ydk::YLeaf total_ipc_tx_fail_cnt; //type: uint32
        ydk::YLeaf ipc_restart_cnt; //type: uint32
        ydk::YLeaf ipc_default_mtu; //type: uint32
        ydk::YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors : public ydk::Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaNeighbor; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public ydk::Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary : public ydk::Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_
        class Sessions; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf nsr_eligible; //type: uint32
        ydk::YLeaf nsr_state_none; //type: uint32
        ydk::YLeaf nsr_state_wait; //type: uint32
        ydk::YLeaf nsr_state_ready; //type: uint32
        ydk::YLeaf nsr_state_prepare; //type: uint32
        ydk::YLeaf nsr_state_app_wait; //type: uint32
        ydk::YLeaf nsr_state_operational; //type: uint32
        ydk::YLeaf nsr_state_tcp_phase1; //type: uint32
        ydk::YLeaf nsr_state_tcp_phase2; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending : public ydk::Entity
{
    public:
        NsrPending();
        ~NsrPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaNeighbors; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors : public ydk::Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaNeighbor; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public ydk::Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role_is_active; //type: boolean
        ydk::YLeaf global_md5_password_enabled; //type: boolean
        ydk::YLeaf protocol_version; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf hello_hold_time; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf targeted_hello_hold_time; //type: uint32
        ydk::YLeaf targeted_hello_interval; //type: uint32
        ydk::YLeaf session_hold_time; //type: uint32
        ydk::YLeaf housekeeping_timer_interval; //type: uint32
        ydk::YLeaf le_no_route_timeout; //type: uint32
        ydk::YLeaf ldp_recovery_timeout; //type: uint32
        ydk::YLeaf af_binding_withdraw_delay; //type: uint32
        ydk::YLeaf max_intf_attached; //type: uint32
        ydk::YLeaf max_intf_te; //type: uint32
        ydk::YLeaf max_peer; //type: uint32
        ydk::YLeaf ldp_out_of_mem_state; //type: uint32
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_synced; //type: boolean
        ydk::YLeaf igp_sync_delay_time_for_interface; //type: uint32
        ydk::YLeaf igp_sync_delay_time_on_restart; //type: uint32
        ydk::YLeaf global_discovery_quick_start_disabled; //type: boolean
        ydk::YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean
        class GracefulRestartInformation; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation
        class AddressFamilyParameter; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter> > address_family_parameter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation> graceful_restart_information;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Parameters


class MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter : public ydk::Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf null_label; //type: string
        ydk::YLeaf label_imp_null_override_acl; //type: string
        ydk::YLeaf is_accepting_targeted_hellos; //type: boolean
        ydk::YLeaf targeted_hello_acl; //type: string
        class DiscoveryTransportAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress> discovery_transport_address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter


class MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress : public ydk::Entity
{
    public:
        DiscoveryTransportAddress();
        ~DiscoveryTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation : public ydk::Entity
{
    public:
        GracefulRestartInformation();
        ~GracefulRestartInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_graceful_restart_configured; //type: boolean
        ydk::YLeaf graceful_restart_reconnect_timeout; //type: uint32
        ydk::YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation


class MplsLdp::Global::Standby::Vrfs::Vrf::Statistics : public ydk::Entity
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

        class Statistic; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic> > statistic;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Statistics


class MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf iccp_enabled; //type: boolean
        class MessageOut; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut
        class MessageIn; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn> message_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut> message_out;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic


class MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn : public ydk::Entity
{
    public:
        MessageIn();
        ~MessageIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn


class MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut : public ydk::Entity
{
    public:
        MessageOut();
        ~MessageOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut


class MplsLdp::Global::Standby::Vrfs::Vrf::Summary : public ydk::Entity
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

        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_
        class Common; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Summary


class MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_families; //type: LdpAf
        ydk::YLeaf number_of_ipv4af; //type: uint32
        ydk::YLeaf number_of_ipv6af; //type: uint32
        ydk::YLeaf number_of_neighbors; //type: uint32
        ydk::YLeaf number_of_nsr_synced_neighbors; //type: uint32
        ydk::YLeaf number_of_graceful_restart_neighbors; //type: uint32
        ydk::YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        ydk::YLeaf number_of_ipv4_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv6_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv4_routes; //type: uint32
        ydk::YLeaf number_of_ipv6_routes; //type: uint32
        ydk::YLeaf number_of_ipv4_local_addresses; //type: uint32
        ydk::YLeaf number_of_ipv6_local_addresses; //type: uint32
        ydk::YLeaf number_of_ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common


class MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_


class MplsLdp::Nodes : public ydk::Entity
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

        class Node; //type: MplsLdp::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node> > node;
        
}; // MplsLdp::Nodes


class MplsLdp::Nodes::Node : public ydk::Entity
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
        class DefaultVrf; //type: MplsLdp::Nodes::Node::DefaultVrf
        class ForwardingSummaryAll; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll
        class BindingsSummaryAll; //type: MplsLdp::Nodes::Node::BindingsSummaryAll
        class AtoMdbTableEntries; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries
        class NsrSummaryAll; //type: MplsLdp::Nodes::Node::NsrSummaryAll
        class Summary; //type: MplsLdp::Nodes::Node::Summary
        class Vrfs; //type: MplsLdp::Nodes::Node::Vrfs
        class DiscoverySummaryAll; //type: MplsLdp::Nodes::Node::DiscoverySummaryAll

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries> ato_mdb_table_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DiscoverySummaryAll> discovery_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll> forwarding_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::NsrSummaryAll> nsr_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs> vrfs;
        
}; // MplsLdp::Nodes::Node


class MplsLdp::Nodes::Node::AtoMdbTableEntries : public ydk::Entity
{
    public:
        AtoMdbTableEntries();
        ~AtoMdbTableEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AtoMdbTableEntry; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry> > ato_mdb_table_entry;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry : public ydk::Entity
{
    public:
        AtoMdbTableEntry();
        ~AtoMdbTableEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf fe_ctype; //type: int32
        ydk::YLeaf pw_id; //type: int32
        ydk::YLeaf agi_type; //type: int32
        ydk::YLeaf agi; //type: int32
        ydk::YLeaf saii_type; //type: int32
        ydk::YLeaf saii_local_id; //type: string
        ydk::YLeaf saii_global_id; //type: int32
        ydk::YLeaf saii_prefix; //type: string
        ydk::YLeaf saii_ac_id; //type: int32
        ydk::YLeaf taii_type; //type: int32
        ydk::YLeaf taii_local_id; //type: string
        ydk::YLeaf taii_global_id; //type: int32
        ydk::YLeaf taii_prefix; //type: string
        ydk::YLeaf taii_ac_id; //type: int32
        ydk::YLeaf peer_id_xr; //type: string
        ydk::YLeaf mapping_tlv_count; //type: uint32
        ydk::YLeaf notification_tlv_count; //type: uint32
        class FecInfo; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo> fec_info;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo : public ydk::Entity
{
    public:
        FecInfo();
        ~FecInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fe_ctype; //type: L2vpnLdpPwFec
        class Fec128; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128
        class Fec129; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129
        class Fec130; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128> fec128;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129> fec129;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130> fec130;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128 : public ydk::Entity
{
    public:
        Fec128();
        ~Fec128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_id; //type: uint32

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129 : public ydk::Entity
{
    public:
        Fec129();
        ~Fec129();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Agi; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi
        class Saii; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii
        class Taii; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi> agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii> saii;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii> taii;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi : public ydk::Entity
{
    public:
        Agi();
        ~Agi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf agi_type; //type: L2vpnLdpPwAgi
        class Agi1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1> agi1;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1 : public ydk::Entity
{
    public:
        Agi1();
        ~Agi1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: uint64

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii : public ydk::Entity
{
    public:
        Saii();
        ~Saii();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aii_type; //type: L2vpnLdpPwAii
        class Aii1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1
        class Aii2; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1> aii1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2> aii2;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1 : public ydk::Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_id; //type: string

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2 : public ydk::Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gobal_id; //type: uint32
        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf ac_id; //type: uint32

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii : public ydk::Entity
{
    public:
        Taii();
        ~Taii();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aii_type; //type: L2vpnLdpPwAii
        class Aii1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1
        class Aii2; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1> aii1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2> aii2;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1 : public ydk::Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_id; //type: string

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2 : public ydk::Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gobal_id; //type: uint32
        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf ac_id; //type: uint32

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130 : public ydk::Entity
{
    public:
        Fec130();
        ~Fec130();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Agi; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi
        class Saii; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi> agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii> saii;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi : public ydk::Entity
{
    public:
        Agi();
        ~Agi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf agi_type; //type: L2vpnLdpPwAgi
        class Agi1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1> agi1;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1 : public ydk::Entity
{
    public:
        Agi1();
        ~Agi1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: uint64

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii : public ydk::Entity
{
    public:
        Saii();
        ~Saii();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aii_type; //type: L2vpnLdpPwAii
        class Aii1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1
        class Aii2; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1> aii1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2> aii2;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1 : public ydk::Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_id; //type: string

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2 : public ydk::Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gobal_id; //type: uint32
        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf ac_id; //type: uint32

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2


class MplsLdp::Nodes::Node::BindingsSummaryAll : public ydk::Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Nodes::Node::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::BindingsSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::BindingsSummaryAll


class MplsLdp::Nodes::Node::BindingsSummaryAll::BindAf : public ydk::Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf last_lib_update; //type: uint32
        ydk::YLeaf lib_minimum_revision_sent_all; //type: uint32
        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::Nodes::Node::BindingsSummaryAll::BindAf


class MplsLdp::Nodes::Node::BindingsSummaryAll::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::BindingsSummaryAll::Vrf


class MplsLdp::Nodes::Node::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GracefulRestart; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities
        class Summary; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary
        class Afs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs
        class NeighborBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Nodes::Node::DefaultVrf::Backoffs
        class Nsr; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr
        class Parameters; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters
        class Issu; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors
        class LdpId; //type: MplsLdp::Nodes::Node::DefaultVrf::LdpId
        class Statistics; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Backoffs> backoffs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Capabilities> capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::LdpId> ldp_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters> parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary> summary;
        
}; // MplsLdp::Nodes::Node::DefaultVrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af> > af;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MplsLdpOperAfName
        class InterfaceSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery
        class BindingsSummaryAll; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll
        class Forwardings; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary> forwarding_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp> igp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces> interfaces;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings : public ydk::Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding> > binding;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf le_local_binding_revision; //type: uint32
        ydk::YLeaf le_local_label_state; //type: LocalLabelState
        ydk::YLeaf is_no_route; //type: boolean
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf advertise_prefix_acl; //type: string
        ydk::YLeaf advertise_tsr_acl; //type: string
        ydk::YLeaf config_enforced_local_label_value; //type: boolean
        ydk::YLeaf is_elc; //type: boolean
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf
        class PrefixXr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked> > peers_acked;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding> > remote_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked : public ydk::Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public ydk::Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr : public ydk::Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding : public ydk::Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf is_elc; //type: boolean
        class AssigningPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public ydk::Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec : public ydk::Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllocationAcl; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl> > advt_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public ydk::Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_acl; //type: string
        ydk::YLeaf peer_acl; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public ydk::Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_acl; //type: boolean
        ydk::YLeaf prefix_acl; //type: string
        ydk::YLeaf is_host_route_only; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary : public ydk::Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf
        class BindAf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf> > bind_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf : public ydk::Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf last_lib_update; //type: uint32
        ydk::YLeaf lib_minimum_revision_sent_all; //type: uint32
        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll : public ydk::Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf : public ydk::Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf last_lib_update; //type: uint32
        ydk::YLeaf lib_minimum_revision_sent_all; //type: uint32
        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkHellos; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos
        class Summary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary
        class TargetedHellos; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos
        class Brief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief
        class Stats; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos> link_hellos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats> stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos> targeted_hellos;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkHelloBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public ydk::Entity
{
    public:
        LinkHelloBriefs();
        ~LinkHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkHelloBrief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief> > link_hello_brief;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public ydk::Entity
{
    public:
        LinkHelloBrief();
        ~LinkHelloBrief();

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
        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf address_family_set; //type: LdpAf
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public ydk::Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ldp_identifier; //type: string
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf session_up; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public ydk::Entity
{
    public:
        TargetedHelloBriefs();
        ~TargetedHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetedHelloBrief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief> > targeted_hello_brief;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public ydk::Entity
{
    public:
        TargetedHelloBrief();
        ~TargetedHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf target_address; //type: string
        ydk::YLeaf address_family; //type: LdpAf
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf
        class DhcbTargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public ydk::Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public ydk::Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ldp_identifier; //type: string
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf session_up; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos : public ydk::Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkHello; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello> > link_hello;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello : public ydk::Entity
{
    public:
        LinkHello();
        ~LinkHello();

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
        ydk::YLeaf next_hello; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf quick_start_disabled; //type: boolean
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation
        class DiscoveryLinkAf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf> > discovery_link_af;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation> > hello_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public ydk::Entity
{
    public:
        DiscoveryLinkAf();
        ~DiscoveryLinkAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        class LocalSrcAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public ydk::Entity
{
    public:
        LocalSrcAddress();
        ~LocalSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public ydk::Entity
{
    public:
        LocalTransportAddress();
        ~LocalTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public ydk::Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ldp_identifier; //type: string
        ydk::YLeaf is_no_route; //type: boolean
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf local_hold_time; //type: uint32
        ydk::YLeaf neighbor_hold_time; //type: uint32
        ydk::YLeaf disc_expiry; //type: uint32
        ydk::YLeaf is_targeted; //type: boolean
        ydk::YLeaf session_up; //type: boolean
        ydk::YLeaf established_time; //type: uint64
        ydk::YLeaf established_age; //type: uint64
        ydk::YLeaf session_bringup_failure_reason; //type: string
        class NeighborSrcAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo> > last_session_down_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public ydk::Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_session_down_reason; //type: string
        ydk::YLeaf last_session_down_time; //type: uint64
        ydk::YLeaf last_session_up_time; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public ydk::Entity
{
    public:
        NeighborSrcAddress();
        ~NeighborSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public ydk::Entity
{
    public:
        NeighborTransportAddress();
        ~NeighborTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stat; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat> > stat;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat : public ydk::Entity
{
    public:
        Stat();
        ~Stat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf adjacency_group_up_time; //type: uint32
        ydk::YLeaf tcp_open_count; //type: uint32
        ydk::YLeaf tcp_arb_chg_count; //type: uint32
        ydk::YLeaf tcp_role; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary : public ydk::Entity
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

        ydk::YLeaf local_ldp_id; //type: string
        ydk::YLeaf num_of_ldp_interfaces; //type: uint32
        ydk::YLeaf num_of_active_ldp_interfaces; //type: uint32
        ydk::YLeaf num_of_lnk_disc_xmit; //type: uint32
        ydk::YLeaf num_of_tgt_disc_xmit; //type: uint32
        ydk::YLeaf num_of_lnk_disc_recv; //type: uint32
        ydk::YLeaf num_of_tgt_disc_recv; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_addr_recv; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_hello_pdu; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_xport_addr; //type: uint32
        ydk::YLeaf num_of_disc_with_same_router_id; //type: uint32
        ydk::YLeaf num_of_disc_with_wrong_router_id; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos : public ydk::Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetedHello; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello> > targeted_hello;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public ydk::Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf target_address; //type: string
        ydk::YLeaf state; //type: DhcbState
        ydk::YLeaf adjacency_ldp_identifier; //type: string
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf next_hello; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf local_hold_time; //type: uint32
        ydk::YLeaf neighbor_hold_time; //type: uint32
        ydk::YLeaf disc_expiry; //type: uint32
        ydk::YLeaf quick_start_disabled; //type: boolean
        ydk::YLeaf established_time; //type: uint64
        ydk::YLeaf established_age; //type: uint64
        ydk::YLeaf session_up; //type: boolean
        ydk::YLeaf session_bringup_failure_reason; //type: string
        class DhcbLocalAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo> > last_session_down_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public ydk::Entity
{
    public:
        DhcbLocalAddress();
        ~DhcbLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public ydk::Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public ydk::Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_session_down_reason; //type: string
        ydk::YLeaf last_session_down_time; //type: uint64
        ydk::YLeaf last_session_up_time; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary : public ydk::Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_lsd_bound; //type: boolean
        ydk::YLeaf fsht; //type: uint16
        ydk::YLeaf intfs; //type: uint16
        ydk::YLeaf lbls; //type: uint16
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf
        class Rws; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws> rws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws : public ydk::Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pfxs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs
        class Nhs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs> nhs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs> pfxs;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs : public ydk::Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf protected_paths; //type: uint32
        ydk::YLeaf backup_paths; //type: uint32
        ydk::YLeaf remote_backup_paths; //type: uint32
        ydk::YLeaf labeled_paths; //type: uint32
        ydk::YLeaf labeled_backup_paths; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs : public ydk::Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_pfxs; //type: uint16
        ydk::YLeaf ecmp_pfxs; //type: uint16
        ydk::YLeaf protected_pfxs; //type: uint16
        class LabeledPfxsAggr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr : public ydk::Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup : public ydk::Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary : public ydk::Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings : public ydk::Entity
{
    public:
        Forwardings();
        ~Forwardings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Forwarding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding> > forwarding;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix_length; //type: uint8
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf
        class PrefixXr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths> > paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route> route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routing; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing
        class Mpls; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing> routing;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsOutgoingInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo : public ydk::Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_rsn; //type: LdpFwdUnlblRsn
        ydk::YLeaf out_label_type; //type: LabelValue
        ydk::YLeaf out_label_owner; //type: LdpRoutePathLblOwner
        ydk::YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_5_ */

