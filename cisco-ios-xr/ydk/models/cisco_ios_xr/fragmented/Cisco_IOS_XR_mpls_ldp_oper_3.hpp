#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_3_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery : public ydk::Entity
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

        class LinkHellos; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos
        class Summary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary
        class TargetedHellos; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos
        class Brief; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief
        class Stats; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos> link_hellos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats> stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos> targeted_hellos;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief : public ydk::Entity
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

        class LinkHelloBriefs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public ydk::Entity
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

        class LinkHelloBrief; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief> > link_hello_brief;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public ydk::Entity
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
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf
        class HelloInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public ydk::Entity
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

        class TargetedHelloBrief; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief> > targeted_hello_brief;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public ydk::Entity
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
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf
        class DhcbTargetAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos : public ydk::Entity
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

        class LinkHello; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello> > link_hello;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello : public ydk::Entity
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
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf
        class HelloInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation
        class DiscoveryLinkAf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf> > discovery_link_af;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation> > hello_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public ydk::Entity
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
        class LocalSrcAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public ydk::Entity
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
        class NeighborSrcAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo> > last_session_down_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats : public ydk::Entity
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

        class Stat; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat> > stat;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary : public ydk::Entity
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
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos : public ydk::Entity
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

        class TargetedHello; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello> > targeted_hello;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public ydk::Entity
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
        class DhcbLocalAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo> > last_session_down_info;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary : public ydk::Entity
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
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf
        class Rws; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws> rws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws : public ydk::Entity
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

        class Pfxs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs
        class Nhs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs> nhs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs> pfxs;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs : public ydk::Entity
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
        class LabeledPfxsAggr; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings : public ydk::Entity
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

        class Forwarding; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding> > forwarding;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding : public ydk::Entity
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
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf
        class PrefixXr; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths> > paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route> route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths : public ydk::Entity
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

        class Routing; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing
        class Mpls; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing> routing;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls : public ydk::Entity
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

        class MplsOutgoingInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo : public ydk::Entity
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
        class NexthopPeerLdpIdent; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public ydk::Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_remote_lfa_bkup; //type: boolean
        class MplsOutgoingInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public ydk::Entity
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

        class Stack; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack> > stack;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

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
        class NexthopPeerLdpIdent; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent : public ydk::Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

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
        ydk::YLeaf nh_is_overriden; //type: boolean
        ydk::YLeaf nexthop_id; //type: uint32
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf bkup_path_id; //type: uint8
        ydk::YLeaf path_flags; //type: LdpRoutePathFlags
        class NextHop; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop
        class RemoteLfa; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_remote_lfa_bkup; //type: boolean
        ydk::YLeaf needs_tldp; //type: boolean
        ydk::YLeaf has_q_node; //type: boolean
        class RemotePNodeId; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId
        class RemoteQNodeId; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId> remote_p_node_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId> remote_q_node_id;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId : public ydk::Entity
{
    public:
        RemotePNodeId();
        ~RemotePNodeId();

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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId : public ydk::Entity
{
    public:
        RemoteQNodeId();
        ~RemoteQNodeId();

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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routing; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public ydk::Entity
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

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf forwarding_update_count; //type: uint32
        ydk::YLeaf forwarding_update_timestamp; //type: uint64
        ydk::YLeaf forwarding_update_age; //type: uint64

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf source; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_local_vrf_leaked; //type: boolean
        ydk::YLeaf routing_update_count; //type: uint32
        ydk::YLeaf routing_update_timestamp; //type: uint64
        ydk::YLeaf routing_update_age; //type: uint64
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Syncs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs> syncs;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart : public ydk::Entity
{
    public:
        SyncDelayRestart();
        ~SyncDelayRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf delay_secs; //type: uint32
        ydk::YLeaf timer_running; //type: boolean
        ydk::YLeaf remaining_secs; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs : public ydk::Entity
{
    public:
        Syncs();
        ~Syncs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync> > sync;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

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
        ydk::YLeaf igp_sync_state; //type: LdpIgpSyncState
        ydk::YLeaf igp_sync_delay; //type: uint32
        ydk::YLeaf is_delay_timer_running; //type: boolean
        ydk::YLeaf delay_timer_remaining; //type: uint32
        ydk::YLeaf igp_sync_down_reason; //type: LdpIgpSyncDownReason
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf
        class Peers; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer> > gr_only_peer;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers> > peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public ydk::Entity
{
    public:
        GrOnlyPeer();
        ~GrOnlyPeer();

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
        ydk::YLeaf is_chkpt_created; //type: boolean

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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
        ydk::YLeaf is_gr_enabled; //type: boolean

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf known_ip_interface_count; //type: uint32
        ydk::YLeaf known_ip_interface_ldp_enabled; //type: uint32
        ydk::YLeaf ldp_configured_attached_interface; //type: uint32
        ydk::YLeaf ldp_configured_te_interface; //type: uint32
        ydk::YLeaf forward_references; //type: uint32
        ydk::YLeaf auto_config_disabled; //type: uint32
        ydk::YLeaf auto_config; //type: uint32
        ydk::YLeaf auto_config_forward_reference_interfaces; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces : public ydk::Entity
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

        class Interface; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface> > interface;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf ldp_enabled; //type: boolean
        ydk::YLeaf is_im_stale; //type: boolean
        ydk::YLeaf ldp_config_mode; //type: boolean
        ydk::YLeaf ldp_autoconfig_disable; //type: boolean
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf
        class TeMeshGrp; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig> > auto_config;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp> > te_mesh_grp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig : public ydk::Entity
{
    public:
        AutoConfig();
        ~AutoConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public ydk::Entity
{
    public:
        TeMeshGrp();
        ~TeMeshGrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldp_te_mesh_group_all_cfgd; //type: boolean
        ydk::YLeaf ldp_mesh_group_enabled; //type: boolean
        ydk::YLeaf te_mesh_group_id; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf : public ydk::Entity
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

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf


class MplsLdp::Global::Standby::DefaultVrf::BackoffParameters : public ydk::Entity
{
    public:
        BackoffParameters();
        ~BackoffParameters();

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

        ydk::YLeaf initial_seconds; //type: uint32
        ydk::YLeaf maximum_seconds; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::BackoffParameters


class MplsLdp::Global::Standby::DefaultVrf::Backoffs : public ydk::Entity
{
    public:
        Backoffs();
        ~Backoffs();

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

        class Backoff; //type: MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff> > backoff;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Backoffs


class MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf backoff_seconds; //type: uint32
        ydk::YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff


class MplsLdp::Global::Standby::DefaultVrf::Capabilities : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Capability; //type: MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability> > capability;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Capabilities


class MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

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

        ydk::YLeaf capability_type; //type: int32
        ydk::YLeaf capability_owner; //type: string
        class Capability_; //type: MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_> capability;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability


class MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_ : public ydk::Entity
{
    public:
        Capability_();
        ~Capability_();

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

}; // MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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

        ydk::YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        ydk::YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf
        class GracefulRestartableNeighbor; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor> > graceful_restartable_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor : public ydk::Entity
{
    public:
        GracefulRestartableNeighbor();
        ~GracefulRestartableNeighbor();

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

        ydk::YLeaf connect_count; //type: uint32
        ydk::YLeaf is_neighbor_up; //type: boolean
        ydk::YLeaf is_liveness_timer_running; //type: boolean
        ydk::YLeaf liveness_timer_remaining_seconds; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: boolean
        ydk::YLeaf recovery_timer_remaining_seconds; //type: uint32
        ydk::YLeaf down_nbr_flap_count; //type: uint8
        ydk::YLeaf down_nbr_flags; //type: uint32
        ydk::YLeaf down_nbr_down_reason; //type: uint32
        class GrPeer; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress> > down_nbr_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface> > down_nbr_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;
        
}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public ydk::Entity
{
    public:
        DownNbrAddress();
        ~DownNbrAddress();

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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public ydk::Entity
{
    public:
        DownNbrInterface();
        ~DownNbrInterface();

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

        ydk::YLeaf address_family; //type: LdpAfId
        ydk::YLeaf interface_handle; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public ydk::Entity
{
    public:
        GrPeer();
        ~GrPeer();

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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Issu : public ydk::Entity
{
    public:
        Issu();
        ~Issu();

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

        class HaSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics> ha_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary> ha_summary;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Issu


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class HaGlobal; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class InitSync; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class HaNeighbor; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::LdpId : public ydk::Entity
{
    public:
        LdpId();
        ~LdpId();

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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::LdpId


class MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs : public ydk::Entity
{
    public:
        NeighborBriefs();
        ~NeighborBriefs();

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

        class NeighborBrief; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief> > neighbor_brief;
        
}; // MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs


class MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief : public ydk::Entity
{
    public:
        NeighborBrief();
        ~NeighborBrief();

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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf nsr_state; //type: ShowNsrState
        ydk::YLeaf up_time_seconds; //type: uint32
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf
        class NbrBrAfInfo; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo> > nbr_br_af_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief


class MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo : public ydk::Entity
{
    public:
        NbrBrAfInfo();
        ~NbrBrAfInfo();

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

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf num_of_nbr_discovery; //type: uint32
        ydk::YLeaf num_of_nbr_addresses; //type: uint32
        ydk::YLeaf num_of_nbr_lbl; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo


class MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf


class MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities : public ydk::Entity
{
    public:
        NeighborCapabilities();
        ~NeighborCapabilities();

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

        class NeighborCapability; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability> > neighbor_capability;
        
}; // MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities


class MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class Sent; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent> > sent;
        
}; // MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Global::Standby::DefaultVrf::Neighbors : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Neighbor; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor> > neighbor;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class ProtocolInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation> tcp_information;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class Capabilities; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Sent; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Address; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Address; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Address; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Address; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ta_holdtime; //type: uint32
        ydk::YLeaf ta_state; //type: string
        ydk::YLeaf ta_pies_sent; //type: uint32
        ydk::YLeaf ta_pies_rcvd; //type: uint32
        ydk::YLeaf ta_up_time_seconds; //type: uint32
        ydk::YLeaf downstream_on_demand; //type: boolean
        class TaGracefulRestartAdjacency; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf reconnect_timeout; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf is_md5_on; //type: boolean
        class ForeignHost; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Global::Standby::DefaultVrf::Nsr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class NsrPending; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending> nsr_pending;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class HaGlobal; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class InitSync; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class HaNeighbor; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class HaNeighbors; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending


class MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class HaNeighbor; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_3_ */

