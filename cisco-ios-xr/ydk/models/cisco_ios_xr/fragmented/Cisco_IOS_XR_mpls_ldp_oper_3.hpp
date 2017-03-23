#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_3_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class NeighborSrcAddress; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo> > last_session_down_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public Entity
{
    public:
        NeighborSrcAddress();
        ~NeighborSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public Entity
{
    public:
        NeighborTransportAddress();
        ~NeighborTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public Entity
{
    public:
        DiscoveryLinkAf();
        ~DiscoveryLinkAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32

        class LocalSrcAddress; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public Entity
{
    public:
        LocalSrcAddress();
        ~LocalSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public Entity
{
    public:
        LocalTransportAddress();
        ~LocalTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary::Vrf

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary::Vrf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos : public Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetedHello; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello> > targeted_hello;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class DhcbLocalAddress; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo> > last_session_down_info;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public Entity
{
    public:
        DhcbLocalAddress();
        ~DhcbLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHelloBriefs; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public Entity
{
    public:
        LinkHelloBriefs();
        ~LinkHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHelloBrief; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief> > link_hello_brief;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public Entity
{
    public:
        LinkHelloBrief();
        ~LinkHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf address_family; //type: LdpAfEnum
        YLeaf address_family_set; //type: LdpAfEnum
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string

        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf
        class HelloInformation; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public Entity
{
    public:
        TargetedHelloBriefs();
        ~TargetedHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetedHelloBrief; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief> > targeted_hello_brief;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public Entity
{
    public:
        TargetedHelloBrief();
        ~TargetedHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf address_family; //type: LdpAfEnum

        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf
        class DhcbTargetAddress; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Stat; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats::Stat

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats::Stat> > stat;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats::Stat : public Entity
{
    public:
        Stat();
        ~Stat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf adjacency_group_up_time; //type: uint32
        YLeaf tcp_open_count; //type: uint32
        YLeaf tcp_arb_chg_count; //type: uint32
        YLeaf tcp_role; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings : public Entity
{
    public:
        Forwardings();
        ~Forwardings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Forwarding; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding> > forwarding;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf table_id; //type: uint32
        YLeaf prefix_length; //type: uint8

        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf
        class PrefixXr; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths> > paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route> route;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Routing; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf version; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf source; //type: uint16
        YLeaf type; //type: uint16
        YLeaf flags; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf is_local_vrf_leaked; //type: boolean
        YLeaf routing_update_count; //type: uint32
        YLeaf routing_update_timestamp; //type: uint64
        YLeaf routing_update_age; //type: uint64
        YLeaf sr_local_label; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32
        YLeaf forwarding_update_count; //type: uint32
        YLeaf forwarding_update_timestamp; //type: uint64
        YLeaf forwarding_update_age; //type: uint64



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Routing; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing
        class Mpls; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing> routing;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string
        YLeaf nh_is_overriden; //type: boolean
        YLeaf nexthop_id; //type: uint32
        YLeaf next_hop_table_id; //type: uint32
        YLeaf flags; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf path_id; //type: uint8
        YLeaf bkup_path_id; //type: uint8
        YLeaf path_flags; //type: LdpRoutePathFlagsEnum

        class NextHop; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop
        class RemoteLfa; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa> remote_lfa;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_remote_lfa_bkup; //type: boolean
        YLeaf needs_tldp; //type: boolean
        YLeaf has_q_node; //type: boolean

        class RemotePNodeId; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId
        class RemoteQNodeId; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId> remote_p_node_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId> remote_q_node_id;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId : public Entity
{
    public:
        RemotePNodeId();
        ~RemotePNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId : public Entity
{
    public:
        RemoteQNodeId();
        ~RemoteQNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MplsOutgoingInfo; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa> remote_lfa;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean

        class NexthopPeerLdpIdent; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_remote_lfa_bkup; //type: boolean

        class MplsOutgoingInfo; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Stack; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack> > stack;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean

        class NexthopPeerLdpIdent; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec : public Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AllocationAcl; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl> > advt_acl;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_acl; //type: boolean
        YLeaf prefix_acl; //type: string
        YLeaf is_host_route_only; //type: boolean



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_acl; //type: string
        YLeaf peer_acl; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary : public Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_lsd_bound; //type: boolean
        YLeaf fsht; //type: uint16
        YLeaf intfs; //type: uint16
        YLeaf lbls; //type: uint16

        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Vrf
        class Rws; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws> rws;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Vrf


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws : public Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pfxs; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs
        class Nhs; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs> pfxs;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs : public Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_pfxs; //type: uint16
        YLeaf ecmp_pfxs; //type: uint16
        YLeaf protected_pfxs; //type: uint16

        class LabeledPfxsAggr; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;


}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr : public Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary : public Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup : public Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf protected_paths; //type: uint32
        YLeaf backup_paths; //type: uint32
        YLeaf remote_backup_paths; //type: uint32
        YLeaf labeled_paths; //type: uint32
        YLeaf labeled_backup_paths; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs


class MplsLdp::Global::Active::DefaultVrf::NeighborBriefs : public Entity
{
    public:
        NeighborBriefs();
        ~NeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborBrief; //type: MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief> > neighbor_brief;


}; // MplsLdp::Global::Active::DefaultVrf::NeighborBriefs


class MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief : public Entity
{
    public:
        NeighborBrief();
        ~NeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf is_graceful_restartable; //type: boolean
        YLeaf nsr_state; //type: ShowNsrStateEnum
        YLeaf up_time_seconds; //type: uint32

        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf
        class NbrBrAfInfo; //type: MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo> > nbr_br_af_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief


class MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf


class MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo : public Entity
{
    public:
        NbrBrAfInfo();
        ~NbrBrAfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf num_of_nbr_discovery; //type: uint32
        YLeaf num_of_nbr_addresses; //type: uint32
        YLeaf num_of_nbr_lbl; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo


class MplsLdp::Global::Active::DefaultVrf::BackoffParameters : public Entity
{
    public:
        BackoffParameters();
        ~BackoffParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initial_seconds; //type: uint32
        YLeaf maximum_seconds; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::BackoffParameters


class MplsLdp::Global::Active::DefaultVrf::Backoffs : public Entity
{
    public:
        Backoffs();
        ~Backoffs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Backoff; //type: MplsLdp::Global::Active::DefaultVrf::Backoffs::Backoff

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Backoffs::Backoff> > backoff;


}; // MplsLdp::Global::Active::DefaultVrf::Backoffs


class MplsLdp::Global::Active::DefaultVrf::Backoffs::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf backoff_seconds; //type: uint32
        YLeaf waiting_seconds; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Backoffs::Backoff


class MplsLdp::Global::Active::DefaultVrf::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NsrPending; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending> nsr_pending;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr


class MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending : public Entity
{
    public:
        NsrPending();
        ~NsrPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbors; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending


class MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary::Vrf


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaSummary::Sessions


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaGlobal; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InitSync; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_cfged; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_peers; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_pfx; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_lcl_addr_wd; //type: uint32
        YLeaf num_lbl_adv; //type: uint32
        YLeaf ipc_msg_tx_cnt; //type: uint32
        YLeaf ipc_msg_tx_bytes; //type: uint32
        YLeaf ipc_msg_rx_cnt; //type: uint32
        YLeaf ipc_msg_rx_bytes; //type: uint32
        YLeaf ipc_max_tx_batch_bytes; //type: uint32
        YLeaf ipc_max_rx_batch_bytes; //type: uint32
        YLeaf ipc_tx_fail_cnt; //type: uint32
        YLeaf total_ipc_tx_fail_cnt; //type: uint32
        YLeaf ipc_restart_cnt; //type: uint32
        YLeaf ipc_default_mtu; //type: uint32
        YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::DefaultVrf::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role_is_active; //type: boolean
        YLeaf global_md5_password_enabled; //type: boolean
        YLeaf protocol_version; //type: uint32
        YLeaf router_id; //type: string
        YLeaf keepalive_interval; //type: uint32
        YLeaf hello_hold_time; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf targeted_hello_hold_time; //type: uint32
        YLeaf targeted_hello_interval; //type: uint32
        YLeaf session_hold_time; //type: uint32
        YLeaf housekeeping_timer_interval; //type: uint32
        YLeaf le_no_route_timeout; //type: uint32
        YLeaf ldp_recovery_timeout; //type: uint32
        YLeaf af_binding_withdraw_delay; //type: uint32
        YLeaf max_intf_attached; //type: uint32
        YLeaf max_intf_te; //type: uint32
        YLeaf max_peer; //type: uint32
        YLeaf ldp_out_of_mem_state; //type: uint32
        YLeaf nsr_enabled; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf igp_sync_delay_time_for_interface; //type: uint32
        YLeaf igp_sync_delay_time_on_restart; //type: uint32
        YLeaf global_discovery_quick_start_disabled; //type: boolean
        YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean

        class GracefulRestartInformation; //type: MplsLdp::Global::Active::DefaultVrf::Parameters::GracefulRestartInformation
        class AddressFamilyParameter; //type: MplsLdp::Global::Active::DefaultVrf::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Parameters::AddressFamilyParameter> > address_family_parameter;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Parameters::GracefulRestartInformation> graceful_restart_information;


}; // MplsLdp::Global::Active::DefaultVrf::Parameters


class MplsLdp::Global::Active::DefaultVrf::Parameters::GracefulRestartInformation : public Entity
{
    public:
        GracefulRestartInformation();
        ~GracefulRestartInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_graceful_restart_configured; //type: boolean
        YLeaf graceful_restart_reconnect_timeout; //type: uint32
        YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Parameters::GracefulRestartInformation


class MplsLdp::Global::Active::DefaultVrf::Parameters::AddressFamilyParameter : public Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf null_label; //type: string
        YLeaf label_imp_null_override_acl; //type: string
        YLeaf is_accepting_targeted_hellos; //type: boolean
        YLeaf targeted_hello_acl; //type: string

        class DiscoveryTransportAddress; //type: MplsLdp::Global::Active::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress> discovery_transport_address;


}; // MplsLdp::Global::Active::DefaultVrf::Parameters::AddressFamilyParameter


class MplsLdp::Global::Active::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress : public Entity
{
    public:
        DiscoveryTransportAddress();
        ~DiscoveryTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress


class MplsLdp::Global::Active::DefaultVrf::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaSummary; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary> ha_summary;


}; // MplsLdp::Global::Active::DefaultVrf::Issu


class MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary::Vrf> vrf;


}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary


class MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary::Vrf


class MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaSummary::Sessions


class MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaGlobal; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics


class MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InitSync; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;


}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_cfged; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_peers; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_pfx; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_lcl_addr_wd; //type: uint32
        YLeaf num_lbl_adv; //type: uint32
        YLeaf ipc_msg_tx_cnt; //type: uint32
        YLeaf ipc_msg_tx_bytes; //type: uint32
        YLeaf ipc_msg_rx_cnt; //type: uint32
        YLeaf ipc_msg_rx_bytes; //type: uint32
        YLeaf ipc_max_tx_batch_bytes; //type: uint32
        YLeaf ipc_max_rx_batch_bytes; //type: uint32
        YLeaf ipc_tx_fail_cnt; //type: uint32
        YLeaf total_ipc_tx_fail_cnt; //type: uint32
        YLeaf ipc_restart_cnt; //type: uint32
        YLeaf ipc_default_mtu; //type: uint32
        YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities : public Entity
{
    public:
        NeighborCapabilities();
        ~NeighborCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborCapability; //type: MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability> > neighbor_capability;


}; // MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities


class MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability : public Entity
{
    public:
        NeighborCapability();
        ~NeighborCapability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32

        class Sent; //type: MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent> > sent;


}; // MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Global::Active::DefaultVrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor> > neighbor;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32

        class ProtocolInformation; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation> tcp_information;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::ProtocolInformation : public Entity
{
    public:
        ProtocolInformation();
        ~ProtocolInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ta_holdtime; //type: uint32
        YLeaf ta_state; //type: string
        YLeaf ta_pies_sent; //type: uint32
        YLeaf ta_pies_rcvd; //type: uint32
        YLeaf ta_up_time_seconds; //type: uint32
        YLeaf downstream_on_demand; //type: boolean

        class TaGracefulRestartAdjacency; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public Entity
{
    public:
        TaGracefulRestartAdjacency();
        ~TaGracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_graceful_restartable; //type: boolean
        YLeaf reconnect_timeout; //type: uint32
        YLeaf recovery_time; //type: uint32



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation : public Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf foreign_port; //type: uint16
        YLeaf local_port; //type: uint16
        YLeaf is_md5_on; //type: boolean

        class ForeignHost; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public Entity
{
    public:
        ForeignHost();
        ~ForeignHost();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost : public Entity
{
    public:
        LocalHost();
        ~LocalHost();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation : public Entity
{
    public:
        DetailedInformation();
        ~DetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class Capabilities; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sent; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public Entity
{
    public:
        Ipv4DuplicateAddress();
        ~Ipv4DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Address; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public Entity
{
    public:
        Ipv6DuplicateAddress();
        ~Ipv6DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Address; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv4AddressInfo();
        ~LdpNbrBoundIpv4AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Address; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv6AddressInfo();
        ~LdpNbrBoundIpv6AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Address; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public Entity
{
    public:
        LdpNbrIpv4AdjInfo();
        ~LdpNbrIpv4AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdjacencyGroup; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hello_type; //type: LdpAdjUnionDiscrimEnum

        class LinkHelloData; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: DhcbStateEnum

        class LocalAddress; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public Entity
{
    public:
        LdpNbrIpv6AdjInfo();
        ~LdpNbrIpv6AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdjacencyGroup; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hello_type; //type: LdpAdjUnionDiscrimEnum

        class LinkHelloData; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: DhcbStateEnum

        class LocalAddress; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;


}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Active::DefaultVrf::LdpId : public Entity
{
    public:
        LdpId();
        ~LdpId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::DefaultVrf::LdpId


class MplsLdp::Global::Active::DefaultVrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Statistic; //type: MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic> > statistic;


}; // MplsLdp::Global::Active::DefaultVrf::Statistics


class MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic : public Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf iccp_enabled; //type: boolean

        class MessageOut; //type: MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic::MessageOut
        class MessageIn; //type: MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic::MessageIn

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic::MessageIn> message_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic::MessageOut> message_out;


}; // MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic


class MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic::MessageOut : public Entity
{
    public:
        MessageOut();
        ~MessageOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic::MessageOut


class MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic::MessageIn : public Entity
{
    public:
        MessageIn();
        ~MessageIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // MplsLdp::Global::Active::DefaultVrf::Statistics::Statistic::MessageIn


class MplsLdp::Global::Active::ForwardingSummaryAll : public Entity
{
    public:
        ForwardingSummaryAll();
        ~ForwardingSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_lsd_bound; //type: boolean
        YLeaf fsht; //type: uint16
        YLeaf intfs; //type: uint16
        YLeaf lbls; //type: uint16

        class Vrf; //type: MplsLdp::Global::Active::ForwardingSummaryAll::Vrf
        class Rws; //type: MplsLdp::Global::Active::ForwardingSummaryAll::Rws

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::ForwardingSummaryAll::Rws> rws;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::ForwardingSummaryAll::Vrf> vrf;


}; // MplsLdp::Global::Active::ForwardingSummaryAll


class MplsLdp::Global::Active::ForwardingSummaryAll::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::ForwardingSummaryAll::Vrf


class MplsLdp::Global::Active::ForwardingSummaryAll::Rws : public Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pfxs; //type: MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs
        class Nhs; //type: MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Nhs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs> pfxs;


}; // MplsLdp::Global::Active::ForwardingSummaryAll::Rws


class MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs : public Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_pfxs; //type: uint16
        YLeaf ecmp_pfxs; //type: uint16
        YLeaf protected_pfxs; //type: uint16

        class LabeledPfxsAggr; //type: MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;


}; // MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs


class MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr : public Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary : public Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup : public Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf protected_paths; //type: uint32
        YLeaf backup_paths; //type: uint32
        YLeaf remote_backup_paths; //type: uint32
        YLeaf labeled_paths; //type: uint32
        YLeaf labeled_backup_paths; //type: uint32



}; // MplsLdp::Global::Active::ForwardingSummaryAll::Rws::Nhs


class MplsLdp::Global::Active::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class Vrf; //type: MplsLdp::Global::Active::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Global::Active::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::BindingsSummaryAll::Vrf> vrf;


}; // MplsLdp::Global::Active::BindingsSummaryAll


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_3_ */

