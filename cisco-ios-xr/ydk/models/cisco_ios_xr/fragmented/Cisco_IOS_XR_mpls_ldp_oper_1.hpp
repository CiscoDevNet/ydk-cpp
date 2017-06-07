#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_1_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        class ProtocolInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation> tcp_information;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation : public Entity
{
    public:
        ProtocolInformation();
        ~ProtocolInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ta_holdtime; //type: uint32
        YLeaf ta_state; //type: string
        YLeaf ta_pies_sent; //type: uint32
        YLeaf ta_pies_rcvd; //type: uint32
        YLeaf ta_up_time_seconds; //type: uint32
        YLeaf downstream_on_demand; //type: boolean
        class TaGracefulRestartAdjacency; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public Entity
{
    public:
        TaGracefulRestartAdjacency();
        ~TaGracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_graceful_restartable; //type: boolean
        YLeaf reconnect_timeout; //type: uint32
        YLeaf recovery_time; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation : public Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf foreign_port; //type: uint16
        YLeaf local_port; //type: uint16
        YLeaf is_md5_on; //type: boolean
        class ForeignHost; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public Entity
{
    public:
        ForeignHost();
        ~ForeignHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost : public Entity
{
    public:
        LocalHost();
        ~LocalHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation : public Entity
{
    public:
        DetailedInformation();
        ~DetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_holdtime; //type: uint32
        YLeaf keep_alive_interval; //type: uint32
        YLeaf peer_state; //type: string
        YLeaf has_ipv4_inbound; //type: boolean
        YLeaf inbound_ipv4acl; //type: string
        YLeaf has_ipv6_inbound; //type: boolean
        YLeaf inbound_ipv6acl; //type: string
        YLeaf has_ipv4_outbound; //type: boolean
        YLeaf outbound_ipv4acl; //type: string
        YLeaf has_ipv6_outbound; //type: boolean
        YLeaf outbound_ipv6acl; //type: string
        YLeaf has_sp; //type: boolean
        YLeaf sp_state; //type: string
        YLeaf sp_has_acl; //type: boolean
        YLeaf spacl; //type: string
        YLeaf sp_has_duration; //type: boolean
        YLeaf sp_duration; //type: uint32
        YLeaf spht_running; //type: boolean
        YLeaf spht_remaining; //type: uint32
        YLeaf nsr_sync_state; //type: MgmtLdpNsrPeerSyncStateEnum
        YLeaf nsr_last_sync_error; //type: MgmtLdpNsrPeerSyncErrEnum
        YLeaf nsr_last_sync_nack_reason; //type: MgmtLdpNsrPeerLdpSyncNackRsnEnum
        YLeaf bgp_advertisement_state; //type: MgmtLdpNbrBgpAdvtStateEnum
        YLeaf advertise_bgp_prefixes; //type: boolean
        class Capabilities; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sent; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public Entity
{
    public:
        Ipv4DuplicateAddress();
        ~Ipv4DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public Entity
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

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public Entity
{
    public:
        Ipv6DuplicateAddress();
        ~Ipv6DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public Entity
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

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv4AddressInfo();
        ~LdpNbrBoundIpv4AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public Entity
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

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv6AddressInfo();
        ~LdpNbrBoundIpv6AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public Entity
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

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public Entity
{
    public:
        LdpNbrIpv4AdjInfo();
        ~LdpNbrIpv4AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_type; //type: LdpAdjUnionDiscrimEnum
        class LinkHelloData; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf interface_name; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: DhcbStateEnum
        class LocalAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public Entity
{
    public:
        LdpNbrIpv6AdjInfo();
        ~LdpNbrIpv6AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_type; //type: LdpAdjUnionDiscrimEnum
        class LinkHelloData; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf interface_name; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: DhcbStateEnum
        class LocalAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Standby::DefaultVrf::LdpId : public Entity
{
    public:
        LdpId();
        ~LdpId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::LdpId


class MplsLdp::Global::Standby::DefaultVrf::Statistics : public Entity
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

        class Statistic; //type: MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic> > statistic;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Statistics


class MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic : public Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf iccp_enabled; //type: boolean
        class MessageOut; //type: MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut
        class MessageIn; //type: MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn> message_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut> message_out;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic


class MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut : public Entity
{
    public:
        MessageOut();
        ~MessageOut();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf init_count; //type: uint32
        YLeaf address_count; //type: uint32
        YLeaf address_withdraw_count; //type: uint32
        YLeaf label_map_count; //type: uint32
        YLeaf label_withdraw_count; //type: uint32
        YLeaf label_release_count; //type: uint32
        YLeaf label_request_count; //type: uint32
        YLeaf label_abort_request_count; //type: uint32
        YLeaf notification_count; //type: uint32
        YLeaf keep_alive_count; //type: uint32
        YLeaf iccp_rg_conn_count; //type: uint32
        YLeaf iccp_rg_disconn_count; //type: uint32
        YLeaf iccp_rg_notif_count; //type: uint32
        YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut


class MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn : public Entity
{
    public:
        MessageIn();
        ~MessageIn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf init_count; //type: uint32
        YLeaf address_count; //type: uint32
        YLeaf address_withdraw_count; //type: uint32
        YLeaf label_map_count; //type: uint32
        YLeaf label_withdraw_count; //type: uint32
        YLeaf label_release_count; //type: uint32
        YLeaf label_request_count; //type: uint32
        YLeaf label_abort_request_count; //type: uint32
        YLeaf notification_count; //type: uint32
        YLeaf keep_alive_count; //type: uint32
        YLeaf iccp_rg_conn_count; //type: uint32
        YLeaf iccp_rg_disconn_count; //type: uint32
        YLeaf iccp_rg_notif_count; //type: uint32
        YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn


class MplsLdp::Global::Standby::ForwardingSummaryAll : public Entity
{
    public:
        ForwardingSummaryAll();
        ~ForwardingSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_lsd_bound; //type: boolean
        YLeaf fsht; //type: uint16
        YLeaf intfs; //type: uint16
        YLeaf lbls; //type: uint16
        class Vrf; //type: MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf
        class Rws; //type: MplsLdp::Global::Standby::ForwardingSummaryAll::Rws

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll::Rws> rws;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::ForwardingSummaryAll


class MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf


class MplsLdp::Global::Standby::ForwardingSummaryAll::Rws : public Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pfxs; //type: MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs
        class Nhs; //type: MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs> pfxs;
        
}; // MplsLdp::Global::Standby::ForwardingSummaryAll::Rws


class MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs : public Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_pfxs; //type: uint16
        YLeaf ecmp_pfxs; //type: uint16
        YLeaf protected_pfxs; //type: uint16
        class LabeledPfxsAggr; //type: MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        
}; // MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs


class MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr : public Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary : public Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup : public Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_paths; //type: uint32
        YLeaf protected_paths; //type: uint32
        YLeaf backup_paths; //type: uint32
        YLeaf remote_backup_paths; //type: uint32
        YLeaf labeled_paths; //type: uint32
        YLeaf labeled_backup_paths; //type: uint32

}; // MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs


class MplsLdp::Global::Standby::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Global::Standby::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Global::Standby::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::BindingsSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::BindingsSummaryAll


class MplsLdp::Global::Standby::BindingsSummaryAll::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::BindingsSummaryAll::Vrf


class MplsLdp::Global::Standby::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32

}; // MplsLdp::Global::Standby::BindingsSummaryAll::BindAf


class MplsLdp::Global::Standby::AtoMdbTableEntries : public Entity
{
    public:
        AtoMdbTableEntries();
        ~AtoMdbTableEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AtoMdbTableEntry; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry> > ato_mdb_table_entry;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry : public Entity
{
    public:
        AtoMdbTableEntry();
        ~AtoMdbTableEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_id; //type: string
        YLeaf fe_ctype; //type: int32
        YLeaf pw_id; //type: int32
        YLeaf agi_type; //type: int32
        YLeaf agi; //type: int32
        YLeaf saii_type; //type: int32
        YLeaf saii_local_id; //type: string
        YLeaf saii_global_id; //type: int32
        YLeaf saii_prefix; //type: string
        YLeaf saii_ac_id; //type: int32
        YLeaf taii_type; //type: int32
        YLeaf taii_local_id; //type: string
        YLeaf taii_global_id; //type: int32
        YLeaf taii_prefix; //type: string
        YLeaf taii_ac_id; //type: int32
        YLeaf peer_id_xr; //type: string
        YLeaf mapping_tlv_count; //type: uint32
        YLeaf notification_tlv_count; //type: uint32
        class FecInfo; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo> fec_info;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo : public Entity
{
    public:
        FecInfo();
        ~FecInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fe_ctype; //type: L2VpnLdpPwFecEnum
        class Fec128; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128
        class Fec129; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129
        class Fec130; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128> fec128;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129> fec129;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130> fec130;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128 : public Entity
{
    public:
        Fec128();
        ~Fec128();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pseudowire_id; //type: uint32

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129 : public Entity
{
    public:
        Fec129();
        ~Fec129();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Agi; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi
        class Saii; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii
        class Taii; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi> agi;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii> saii;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii> taii;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi : public Entity
{
    public:
        Agi();
        ~Agi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf agi_type; //type: L2VpnLdpPwAgiEnum
        class Agi1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1> agi1;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1 : public Entity
{
    public:
        Agi1();
        ~Agi1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rd; //type: uint64

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii : public Entity
{
    public:
        Saii();
        ~Saii();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum
        class Aii1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1
        class Aii2; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2> aii2;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_id; //type: string

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii : public Entity
{
    public:
        Taii();
        ~Taii();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum
        class Aii1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1
        class Aii2; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2> aii2;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_id; //type: string

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130 : public Entity
{
    public:
        Fec130();
        ~Fec130();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Agi; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi
        class Saii; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi> agi;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii> saii;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi : public Entity
{
    public:
        Agi();
        ~Agi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf agi_type; //type: L2VpnLdpPwAgiEnum
        class Agi1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1> agi1;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1 : public Entity
{
    public:
        Agi1();
        ~Agi1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rd; //type: uint64

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii : public Entity
{
    public:
        Saii();
        ~Saii();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum
        class Aii1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1
        class Aii2; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2> aii2;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_id; //type: string

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2


class MplsLdp::Global::Standby::NsrSummaryAll : public Entity
{
    public:
        NsrSummaryAll();
        ~NsrSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: MplsLdp::Global::Standby::NsrSummaryAll::Vrf
        class Sessions; //type: MplsLdp::Global::Standby::NsrSummaryAll::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::NsrSummaryAll::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::NsrSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::NsrSummaryAll


class MplsLdp::Global::Standby::NsrSummaryAll::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::NsrSummaryAll::Vrf


class MplsLdp::Global::Standby::NsrSummaryAll::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32

}; // MplsLdp::Global::Standby::NsrSummaryAll::Sessions


class MplsLdp::Global::Standby::Summary : public Entity
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

        YLeaf number_of_vrf; //type: uint32
        YLeaf number_of_vrf_oper; //type: uint32
        YLeaf number_of_interfaces; //type: uint32
        YLeaf number_of_fwd_ref_interfaces; //type: uint32
        YLeaf number_of_autocfg_interfaces; //type: uint32
        YLeaf is_bound_with_sysdb; //type: boolean
        YLeaf is_registered_with_sysdb; //type: boolean
        YLeaf is_bound_with_rsi; //type: boolean
        YLeaf is_bound_with_interface_manager; //type: boolean
        YLeaf is_registered_with_interface_manager; //type: boolean
        YLeaf is_bound_with_ip_arm; //type: boolean
        YLeaf is_bound_with_lsd; //type: boolean
        YLeaf is_registered_with_lsd; //type: boolean
        YLeaf is_bound_with_ipv4_rib; //type: boolean
        YLeaf is_registered_with_ipv4_rib; //type: boolean
        YLeaf number_of_ipv4rib_tables; //type: uint32
        YLeaf number_of_registered_ipv4rib_tables; //type: uint32
        YLeaf is_bound_with_ipv6_rib; //type: boolean
        YLeaf is_registered_with_ipv6_rib; //type: boolean
        YLeaf number_of_ipv6rib_tables; //type: uint32
        YLeaf number_of_registered_ipv6rib_tables; //type: uint32
        YLeaf is_bound_with_atom; //type: boolean
        YLeaf is_bound_with_nsr_mate; //type: boolean
        YLeaf is_nsr_configured; //type: boolean
        YLeaf is_mldp_registered; //type: boolean
        class Common; //type: MplsLdp::Global::Standby::Summary::Common

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Summary::Common> common;
        
}; // MplsLdp::Global::Standby::Summary


class MplsLdp::Global::Standby::Summary::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_families; //type: LdpAfEnum
        YLeaf number_of_ipv4af; //type: uint32
        YLeaf number_of_ipv6af; //type: uint32
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_nsr_synced_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf number_of_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv6_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv6_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ipv6_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        YLeaf number_of_bindings_ipv4; //type: uint32
        YLeaf number_of_bindings_ipv6; //type: uint32
        YLeaf number_of_local_bindings_ipv4; //type: uint32
        YLeaf number_of_local_bindings_ipv6; //type: uint32
        YLeaf number_of_remote_bindings_ipv4; //type: uint32
        YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Global::Standby::Summary::Common


class MplsLdp::Global::Standby::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: MplsLdp::Global::Standby::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf> > vrf;
        
}; // MplsLdp::Global::Standby::Vrfs


class MplsLdp::Global::Standby::Vrfs::Vrf : public Entity
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

        YLeaf vrf_name; //type: string
        class GracefulRestart; //type: MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities
        class Summary; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Summary
        class Afs; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs
        class NeighborBriefs; //type: MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs
        class Nsr; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Nsr
        class Parameters; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Parameters
        class Issu; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors
        class LdpId; //type: MplsLdp::Global::Standby::Vrfs::Vrf::LdpId
        class Statistics; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs> backoffs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities> capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::LdpId> ldp_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Parameters> parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Summary> summary;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf


class MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_
        class GracefulRestartableNeighbor; //type: MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor> > graceful_restartable_neighbor;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart


class MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor : public Entity
{
    public:
        GracefulRestartableNeighbor();
        ~GracefulRestartableNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf connect_count; //type: uint32
        YLeaf is_neighbor_up; //type: boolean
        YLeaf is_liveness_timer_running; //type: boolean
        YLeaf liveness_timer_remaining_seconds; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf recovery_timer_remaining_seconds; //type: uint32
        YLeaf down_nbr_flap_count; //type: uint8
        YLeaf down_nbr_flags; //type: uint32
        YLeaf down_nbr_down_reason; //type: uint32
        class GrPeer; //type: MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress> > down_nbr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface> > down_nbr_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public Entity
{
    public:
        GrPeer();
        ~GrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public Entity
{
    public:
        DownNbrInterface();
        ~DownNbrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfIdEnum
        YLeaf interface_handle; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public Entity
{
    public:
        DownNbrAddress();
        ~DownNbrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Capability; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability> > capability;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities


class MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf capability_type; //type: int32
        YLeaf capability_owner; //type: string
        class Capability_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_> capability;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability


class MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_ : public Entity
{
    public:
        Capability_();
        ~Capability_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_


class MplsLdp::Global::Standby::Vrfs::Vrf::Summary : public Entity
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

        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_
        class Common; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common> common;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Summary


class MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_families; //type: LdpAfEnum
        YLeaf number_of_ipv4af; //type: uint32
        YLeaf number_of_ipv6af; //type: uint32
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_nsr_synced_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf number_of_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv6_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv6_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ipv6_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        YLeaf number_of_bindings_ipv4; //type: uint32
        YLeaf number_of_bindings_ipv6; //type: uint32
        YLeaf number_of_local_bindings_ipv4; //type: uint32
        YLeaf number_of_local_bindings_ipv6; //type: uint32
        YLeaf number_of_remote_bindings_ipv4; //type: uint32
        YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Af; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af> > af;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: MplsLdpOperAfNameEnum
        class InterfaceSummary; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery
        class BindingsSummaryAll; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll
        class Forwardings; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary> forwarding_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp> igp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces> interfaces;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary : public Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf known_ip_interface_count; //type: uint32
        YLeaf known_ip_interface_ldp_enabled; //type: uint32
        YLeaf ldp_configured_attached_interface; //type: uint32
        YLeaf ldp_configured_te_interface; //type: uint32
        YLeaf forward_references; //type: uint32
        YLeaf auto_config_disabled; //type: uint32
        YLeaf auto_config; //type: uint32
        YLeaf auto_config_forward_reference_interfaces; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings : public Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Binding; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding> > binding;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf local_label; //type: uint32
        YLeaf le_local_binding_revision; //type: uint32
        YLeaf le_local_label_state; //type: LocalLabelStateEnum
        YLeaf is_no_route; //type: boolean
        YLeaf label_oor; //type: boolean
        YLeaf advertise_prefix_acl; //type: string
        YLeaf advertise_tsr_acl; //type: string
        YLeaf config_enforced_local_label_value; //type: boolean
        YLeaf is_elc; //type: boolean
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_
        class PrefixXr; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked> > peers_acked;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding> > remote_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding : public Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_label; //type: uint32
        YLeaf is_stale; //type: boolean
        YLeaf is_elc; //type: boolean
        class AssigningPeerLdpIdent; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked : public Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Syncs; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs> syncs;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs : public Entity
{
    public:
        Syncs();
        ~Syncs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sync; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync> > sync;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync : public Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf igp_sync_state; //type: LdpIgpSyncStateEnum
        YLeaf igp_sync_delay; //type: uint32
        YLeaf is_delay_timer_running; //type: boolean
        YLeaf delay_timer_remaining; //type: uint32
        YLeaf igp_sync_down_reason; //type: LdpIgpSyncDownReasonEnum
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_
        class Peers; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer> > gr_only_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers> > peers;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_id; //type: string
        YLeaf is_gr_enabled; //type: boolean

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public Entity
{
    public:
        GrOnlyPeer();
        ~GrOnlyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_id; //type: string
        YLeaf is_chkpt_created; //type: boolean

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart : public Entity
{
    public:
        SyncDelayRestart();
        ~SyncDelayRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured; //type: boolean
        YLeaf delay_secs; //type: uint32
        YLeaf timer_running; //type: boolean
        YLeaf remaining_secs; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary : public Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_
        class BindAf; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces : public Entity
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

        class Interface; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface> > interface;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface : public Entity
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
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf ldp_enabled; //type: boolean
        YLeaf is_im_stale; //type: boolean
        YLeaf ldp_config_mode; //type: boolean
        YLeaf ldp_autoconfig_disable; //type: boolean
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_
        class TeMeshGrp; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig> > auto_config;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp> > te_mesh_grp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public Entity
{
    public:
        TeMeshGrp();
        ~TeMeshGrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ldp_te_mesh_group_all_cfgd; //type: boolean
        YLeaf ldp_mesh_group_enabled; //type: boolean
        YLeaf te_mesh_group_id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig : public Entity
{
    public:
        AutoConfig();
        ~AutoConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tuple; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHellos; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos
        class Summary; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary
        class TargetedHellos; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos
        class Brief; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief
        class Stats; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos> link_hellos;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats> stats;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos> targeted_hellos;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos : public Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHello; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello> > link_hello;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello : public Entity
{
    public:
        LinkHello();
        ~LinkHello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf next_hello; //type: uint32
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf quick_start_disabled; //type: boolean
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_
        class HelloInformation; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation
        class DiscoveryLinkAf; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf> > discovery_link_af;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf is_no_route; //type: boolean
        YLeaf hold_time; //type: uint32
        YLeaf local_hold_time; //type: uint32
        YLeaf neighbor_hold_time; //type: uint32
        YLeaf disc_expiry; //type: uint32
        YLeaf is_targeted; //type: boolean
        YLeaf session_up; //type: boolean
        YLeaf established_time; //type: uint64
        YLeaf established_age; //type: uint64
        YLeaf session_bringup_failure_reason; //type: string
        class NeighborSrcAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo> > last_session_down_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public Entity
{
    public:
        NeighborSrcAddress();
        ~NeighborSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public Entity
{
    public:
        NeighborTransportAddress();
        ~NeighborTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public Entity
{
    public:
        DiscoveryLinkAf();
        ~DiscoveryLinkAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        class LocalSrcAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public Entity
{
    public:
        LocalSrcAddress();
        ~LocalSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public Entity
{
    public:
        LocalTransportAddress();
        ~LocalTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary : public Entity
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

        YLeaf local_ldp_id; //type: string
        YLeaf num_of_ldp_interfaces; //type: uint32
        YLeaf num_of_active_ldp_interfaces; //type: uint32
        YLeaf num_of_lnk_disc_xmit; //type: uint32
        YLeaf num_of_tgt_disc_xmit; //type: uint32
        YLeaf num_of_lnk_disc_recv; //type: uint32
        YLeaf num_of_tgt_disc_recv; //type: uint32
        YLeaf num_of_disc_with_bad_addr_recv; //type: uint32
        YLeaf num_of_disc_with_bad_hello_pdu; //type: uint32
        YLeaf num_of_disc_with_bad_xport_addr; //type: uint32
        YLeaf num_of_disc_with_same_router_id; //type: uint32
        YLeaf num_of_disc_with_wrong_router_id; //type: uint32
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos : public Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TargetedHello; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello> > targeted_hello;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf state; //type: DhcbStateEnum
        YLeaf adjacency_ldp_identifier; //type: string
        YLeaf interval; //type: uint32
        YLeaf next_hello; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf local_hold_time; //type: uint32
        YLeaf neighbor_hold_time; //type: uint32
        YLeaf disc_expiry; //type: uint32
        YLeaf quick_start_disabled; //type: boolean
        YLeaf established_time; //type: uint64
        YLeaf established_age; //type: uint64
        YLeaf session_up; //type: boolean
        YLeaf session_bringup_failure_reason; //type: string
        class DhcbLocalAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo> > last_session_down_info;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public Entity
{
    public:
        DhcbLocalAddress();
        ~DhcbLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHelloBriefs; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public Entity
{
    public:
        LinkHelloBriefs();
        ~LinkHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHelloBrief; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief> > link_hello_brief;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public Entity
{
    public:
        LinkHelloBrief();
        ~LinkHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf address_family; //type: LdpAfEnum
        YLeaf address_family_set; //type: LdpAfEnum
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_
        class HelloInformation; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public Entity
{
    public:
        TargetedHelloBriefs();
        ~TargetedHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TargetedHelloBrief; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief> > targeted_hello_brief;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public Entity
{
    public:
        TargetedHelloBrief();
        ~TargetedHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf address_family; //type: LdpAfEnum
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_
        class DhcbTargetAddress; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stat; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat> > stat;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat : public Entity
{
    public:
        Stat();
        ~Stat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf adjacency_group_up_time; //type: uint32
        YLeaf tcp_open_count; //type: uint32
        YLeaf tcp_arb_chg_count; //type: uint32
        YLeaf tcp_role; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_
        class BindAf; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings : public Entity
{
    public:
        Forwardings();
        ~Forwardings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Forwarding; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding> > forwarding;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding : public Entity
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

        YLeaf prefix; //type: string
        YLeaf table_id; //type: uint32
        YLeaf prefix_length; //type: uint8
        class Vrf_; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_
        class PrefixXr; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths> > paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route> route;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_> vrf;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Routing; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;
        
}; // MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_1_ */

