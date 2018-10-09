#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_4_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_lsd_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {


class MplsLsd::Labels::Label::LabelContext::Key::Tev4p2mpData : public ydk::Entity
{
    public:
        Tev4p2mpData();
        ~Tev4p2mpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf previous_hop; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Tev4p2mpData


class MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data : public ydk::Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf peer_lsrid; //type: string
        ydk::YLeaf peer_label_space_id; //type: uint16

}; // MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data


class MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_intf; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData


class MplsLsd::Labels::Label::LabelContext::Key::TpData : public ydk::Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf dest_global_id; //type: uint32
        ydk::YLeaf dest_node_id; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint16
        ydk::YLeaf dest_tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16

}; // MplsLsd::Labels::Label::LabelContext::Key::TpData


class MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gre_interface; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf greipv6_interface; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation


class MplsLsd::Labels::Label::LabelContext::Key::EvpnData : public ydk::Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_id; //type: uint32
        ydk::YLeaf evpn_tag; //type: uint32
        ydk::YLeaf ethernet_segment; //type: string
        ydk::YLeaf evpn_encap; //type: uint8

}; // MplsLsd::Labels::Label::LabelContext::Key::EvpnData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv4blbData : public ydk::Entity
{
    public:
        Ipv4blbData();
        ~Ipv4blbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv4blbData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6blbData : public ydk::Entity
{
    public:
        Ipv6blbData();
        ~Ipv6blbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6blbData


class MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData : public ydk::Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32

}; // MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData


class MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData : public ydk::Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32
        ydk::YLeaf hli; //type: uint32
        ydk::YLeaf seg; //type: int32

}; // MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData


class MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3vpn : public ydk::Entity
{
    public:
        NextHopSetL3vpn();
        ~NextHopSetL3vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3vpn


class MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment : public ydk::Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf segment_id; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment


class MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4


class MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6


class MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData : public ydk::Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData


class MplsLsd::Labels::Label::LabelContext::Key::TeBinding : public ydk::Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_identifier; //type: uint32
        ydk::YLeaf te_type; //type: MgmtLsdTeBinding

}; // MplsLsd::Labels::Label::LabelContext::Key::TeBinding


class MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrlbData : public ydk::Entity
{
    public:
        LabelBlockSrlbData();
        ~LabelBlockSrlbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrlbData


class MplsLsd::Labels::Label::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Labels::Label::ApplicationOwner


class MplsLsd::FrrDatabase : public ydk::Entity
{
    public:
        FrrDatabase();
        ~FrrDatabase();

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

        class TunnelMidpoints; //type: MplsLsd::FrrDatabase::TunnelMidpoints
        class TunnelHeads; //type: MplsLsd::FrrDatabase::TunnelHeads
        class TunnelHeadSummary; //type: MplsLsd::FrrDatabase::TunnelHeadSummary
        class SummaryProtectedInterfaces; //type: MplsLsd::FrrDatabase::SummaryProtectedInterfaces
        class TunnelSummary; //type: MplsLsd::FrrDatabase::TunnelSummary
        class TunnelMidpointSummary; //type: MplsLsd::FrrDatabase::TunnelMidpointSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints> tunnel_midpoints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads> tunnel_heads;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeadSummary> tunnel_head_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::SummaryProtectedInterfaces> summary_protected_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelSummary> tunnel_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpointSummary> tunnel_midpoint_summary;
        
}; // MplsLsd::FrrDatabase


class MplsLsd::FrrDatabase::TunnelMidpoints : public ydk::Entity
{
    public:
        TunnelMidpoints();
        ~TunnelMidpoints();

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

        class TunnelMidpoint; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint

        ydk::YList tunnel_midpoint;
        
}; // MplsLsd::FrrDatabase::TunnelMidpoints


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint : public ydk::Entity
{
    public:
        TunnelMidpoint();
        ~TunnelMidpoint();

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

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtLsdFrrState
        class FrrEntryId; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId
        class OutPath; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId> frr_entry_id;
        ydk::YList out_path;
        
}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtLsdLspRole
        class Head; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head
        class Midpoint; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint> midpoint;
        
}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint8

}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath : public ydk::Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf frr_interface; //type: string
        ydk::YLeaf frr_label; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath


class MplsLsd::FrrDatabase::TunnelHeads : public ydk::Entity
{
    public:
        TunnelHeads();
        ~TunnelHeads();

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

        class TunnelHead; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead

        ydk::YList tunnel_head;
        
}; // MplsLsd::FrrDatabase::TunnelHeads


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead : public ydk::Entity
{
    public:
        TunnelHead();
        ~TunnelHead();

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
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtLsdFrrState
        class FrrEntryId; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId
        class OutPath; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId> frr_entry_id;
        ydk::YList out_path;
        
}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtLsdLspRole
        class Head; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head
        class Midpoint; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint> midpoint;
        
}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint8

}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath : public ydk::Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf frr_interface; //type: string
        ydk::YLeaf frr_label; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath


class MplsLsd::FrrDatabase::TunnelHeadSummary : public ydk::Entity
{
    public:
        TunnelHeadSummary();
        ~TunnelHeadSummary();

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

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelHeadSummary


class MplsLsd::FrrDatabase::SummaryProtectedInterfaces : public ydk::Entity
{
    public:
        SummaryProtectedInterfaces();
        ~SummaryProtectedInterfaces();

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

        class SummaryProtectedInterface; //type: MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface

        ydk::YList summary_protected_interface;
        
}; // MplsLsd::FrrDatabase::SummaryProtectedInterfaces


class MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface : public ydk::Entity
{
    public:
        SummaryProtectedInterface();
        ~SummaryProtectedInterface();

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
        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface


class MplsLsd::FrrDatabase::TunnelSummary : public ydk::Entity
{
    public:
        TunnelSummary();
        ~TunnelSummary();

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

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelSummary


class MplsLsd::FrrDatabase::TunnelMidpointSummary : public ydk::Entity
{
    public:
        TunnelMidpointSummary();
        ~TunnelMidpointSummary();

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

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelMidpointSummary


class MplsLsd::Rewrite : public ydk::Entity
{
    public:
        Rewrite();
        ~Rewrite();

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

        class RewriteLabelRangeCnts; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts
        class RewritePws; //type: MplsLsd::Rewrite::RewritePws
        class RewriteIpv4s; //type: MplsLsd::Rewrite::RewriteIpv4s
        class RewriteTes; //type: MplsLsd::Rewrite::RewriteTes
        class RewriteLabels; //type: MplsLsd::Rewrite::RewriteLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts> rewrite_label_range_cnts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws> rewrite_pws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4s> rewrite_ipv4s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes> rewrite_tes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels> rewrite_labels;
        
}; // MplsLsd::Rewrite


class MplsLsd::Rewrite::RewriteLabelRangeCnts : public ydk::Entity
{
    public:
        RewriteLabelRangeCnts();
        ~RewriteLabelRangeCnts();

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

        class RewriteLabelRangeCnt; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt

        ydk::YList rewrite_label_range_cnt;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt : public ydk::Entity
{
    public:
        RewriteLabelRangeCnt();
        ~RewriteLabelRangeCnt();

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

        ydk::YLeaf label_range_type; //type: uint32
        ydk::YLeaf label_range_index; //type: uint32
        ydk::YLeaf rewrite_version; //type: uint64
        ydk::YLeaf bcdl_priority; //type: uint8
        ydk::YLeaf lsd_queue; //type: uint8
        ydk::YLeaf rw_install_time; //type: uint64
        ydk::YLeaf rw_install_age; //type: uint64
        ydk::YLeaf rw_updated; //type: int32
        ydk::YLeaf priority_updated; //type: int32
        ydk::YLeaf rw_redist; //type: int32
        class FpiKey; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey> fpi_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId> rewrite_id;
        ydk::YList associated_fpi;
        ydk::YList v4_rpf;
        ydk::YList v6_rpf;
        ydk::YList mois;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey : public ydk::Entity
{
    public:
        FpiKey();
        ~FpiKey();

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

        class Fpi; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi> fpi;
        ydk::YList application_owner;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi : public ydk::Entity
{
    public:
        Fpi();
        ~Fpi();

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

        ydk::YLeaf fpi_type; //type: MgmtLsdFpi
        class LabelData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::DmtcExtIntfData
        class LabelRange; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelRange> label_range;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

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

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::TeData : public ydk::Entity
{
    public:
        TeData();
        ~TeData();

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

        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf router_flags; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

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

        ydk::YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::DmtcExtIntfData : public ydk::Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

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

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

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

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf index_; //type: uint8

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelRange


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId : public ydk::Entity
{
    public:
        RewriteId();
        ~RewriteId();

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

        class RewriteId_; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_ : public ydk::Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

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

        ydk::YLeaf rewrite_id_type; //type: MgmtLsdRwId
        class LabelContext; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext : public ydk::Entity
{
    public:
        LabelContext();
        ~LabelContext();

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

        ydk::YLeaf label_context_type; //type: MgmtLsdLblCtx
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4l3vpnData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData
        class Ipv6l3vpnData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData
        class VrfL3vpnData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::VrfL3vpnData
        class Cev4l3vpnData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData
        class Cev6l3vpnData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4p2mpData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4p2mpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4blbData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4blbData
        class Ipv6blbData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6blbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3vpn; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TeBinding
        class LabelBlockSrlbData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData> ipv4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData> ipv6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::VrfL3vpnData> vrf_l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData> cev4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData> cev6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4p2mpData> tev4p2mp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4blbData> ipv4blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6blbData> ipv6blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn> next_hop_set_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData> label_block_srlb_data;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf tunnel_dest; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf is_srte; //type: int32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData : public ydk::Entity
{
    public:
        Ipv4l3vpnData();
        ~Ipv4l3vpnData();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData : public ydk::Entity
{
    public:
        Ipv6l3vpnData();
        ~Ipv6l3vpnData();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::VrfL3vpnData : public ydk::Entity
{
    public:
        VrfL3vpnData();
        ~VrfL3vpnData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::VrfL3vpnData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData : public ydk::Entity
{
    public:
        Cev4l3vpnData();
        ~Cev4l3vpnData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData : public ydk::Entity
{
    public:
        Cev6l3vpnData();
        ~Cev6l3vpnData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf pseudowire_id; //type: uint64
        ydk::YLeaf remote_l2_router_id; //type: uint32
        ydk::YLeaf subinterface; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockData : public ydk::Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

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

        ydk::YLeaf service; //type: uint8
        ydk::YLeaf vpn_id; //type: uint16
        ydk::YLeaf edge_id; //type: uint16
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf parent_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4p2mpData : public ydk::Entity
{
    public:
        Tev4p2mpData();
        ~Tev4p2mpData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf previous_hop; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4p2mpData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::MldPv4Data : public ydk::Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf peer_lsrid; //type: string
        ydk::YLeaf peer_label_space_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

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

        ydk::YLeaf pwhe_intf; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TpData : public ydk::Entity
{
    public:
        TpData();
        ~TpData();

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

        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf dest_global_id; //type: uint32
        ydk::YLeaf dest_node_id; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint16
        ydk::YLeaf dest_tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

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

        ydk::YLeaf gre_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

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

        ydk::YLeaf greipv6_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::EvpnData : public ydk::Entity
{
    public:
        EvpnData();
        ~EvpnData();

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

        ydk::YLeaf evpn_id; //type: uint32
        ydk::YLeaf evpn_tag; //type: uint32
        ydk::YLeaf ethernet_segment; //type: string
        ydk::YLeaf evpn_encap; //type: uint8

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4blbData : public ydk::Entity
{
    public:
        Ipv4blbData();
        ~Ipv4blbData();

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

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4blbData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6blbData : public ydk::Entity
{
    public:
        Ipv6blbData();
        ~Ipv6blbData();

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

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6blbData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public ydk::Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

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

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public ydk::Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

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

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32
        ydk::YLeaf hli; //type: uint32
        ydk::YLeaf seg; //type: int32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn : public ydk::Entity
{
    public:
        NextHopSetL3vpn();
        ~NextHopSetL3vpn();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public ydk::Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf segment_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public ydk::Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

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

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TeBinding : public ydk::Entity
{
    public:
        TeBinding();
        ~TeBinding();

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

        ydk::YLeaf te_identifier; //type: uint32
        ydk::YLeaf te_type; //type: MgmtLsdTeBinding

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData : public ydk::Entity
{
    public:
        LabelBlockSrlbData();
        ~LabelBlockSrlbData();

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

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite : public ydk::Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

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

        class LabelData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite::LabelData

        ydk::YList label_data;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite::LabelData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi : public ydk::Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

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

        class Fpi; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi> fpi;
        ydk::YList application_owner;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi : public ydk::Entity
{
    public:
        Fpi();
        ~Fpi();

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

        ydk::YLeaf fpi_type; //type: MgmtLsdFpi
        class LabelData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::DmtcExtIntfData
        class LabelRange; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelRange> label_range;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

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

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::TeData : public ydk::Entity
{
    public:
        TeData();
        ~TeData();

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

        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf router_flags; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

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

        ydk::YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::DmtcExtIntfData : public ydk::Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

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

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

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

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf index_; //type: uint8

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelRange


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V4Rpf : public ydk::Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v4_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V4Rpf


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V6Rpf : public ydk::Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v6_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V6Rpf


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois : public ydk::Entity
{
    public:
        Mois();
        ~Mois();

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

        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::ApplicationResource> application_resource;
        ydk::YList moi_array;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::ApplicationResource : public ydk::Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray : public ydk::Entity
{
    public:
        MoiArray();
        ~MoiArray();

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

        class Moi; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi> moi;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi : public ydk::Entity
{
    public:
        Moi();
        ~Moi();

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

        ydk::YLeaf moi_type; //type: MgmtLsdMoi
        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::DmtcData
        class NnhStackv4Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data
        class NnhStackv6Data; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data
        class LabelRange; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data> nnh_stackv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data> nnh_stackv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::LabelRange> label_range;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv4 : public ydk::Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupTp : public ydk::Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv6 : public ydk::Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf out_interface_parent; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf backup_interface; //type: string
        ydk::YLeaf backup_ipv4_next_hop; //type: string
        ydk::YLeaf merge_point_label; //type: uint32
        ydk::YLeaf backup_local_label; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf tunnel_weight; //type: uint32
        ydk::YLeaf data_out_parent_interface; //type: string
        ydk::YLeaf tunnel_class; //type: uint32
        ydk::YLeaf ipv4_next_next_hop; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf pseuodo_wire_connect_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf split_horizon_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf control_word; //type: int32
        ydk::YLeaf imposition; //type: int32
        ydk::YLeaf vctype; //type: uint8
        ydk::YLeaf pw_list_id; //type: uint16
        ydk::YLeaf pwhe_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf l3_interface; //type: string
        ydk::YLeaf l2_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data : public ydk::Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

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

        ydk::YLeaf owner_application_type; //type: MgmtLsdApp
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

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

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop
        class Label; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf entry; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

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

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data : public ydk::Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

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

        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf out_interface_parent; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

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

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop
        class Label; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf entry; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

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

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::TeHeadData : public ydk::Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf tunnel_local_label; //type: uint32
        ydk::YLeaf tunnel_local_label_str; //type: string
        ydk::YLeaf tunnel_fwd_class; //type: uint8
        ydk::YLeaf tunnel_load_metric; //type: uint32
        ydk::YLeaf flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::DmtcData : public ydk::Entity
{
    public:
        DmtcData();
        ~DmtcData();

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

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data : public ydk::Entity
{
    public:
        NnhStackv4Data();
        ~NnhStackv4Data();

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

        class Ipv4Stack; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack
        class NeighborNextHop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack> ipv4_stack;
        ydk::YList neighbor_next_hop;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack : public ydk::Entity
{
    public:
        Ipv4Stack();
        ~Ipv4Stack();

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

        ydk::YLeaf owner_application_type; //type: MgmtLsdApp
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

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

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop
        class Label; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf entry; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

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

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

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

        ydk::YLeaf nnh_type; //type: MplsLsdNnh
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data : public ydk::Entity
{
    public:
        NnhStackv6Data();
        ~NnhStackv6Data();

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

        class Ipv6Stack; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack
        class NeighborNextHop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack> ipv6_stack;
        ydk::YList neighbor_next_hop;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack : public ydk::Entity
{
    public:
        Ipv6Stack();
        ~Ipv6Stack();

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

        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf out_interface_parent; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

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

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop
        class Label; //type: MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf entry; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

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

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

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

        ydk::YLeaf nnh_type; //type: MplsLsdNnh
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop


class MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

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

        ydk::YLeaf start_label_active; //type: uint32
        ydk::YLeaf end_label_active; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::LabelRange


class MplsLsd::Rewrite::RewritePws : public ydk::Entity
{
    public:
        RewritePws();
        ~RewritePws();

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

        class RewritePw; //type: MplsLsd::Rewrite::RewritePws::RewritePw

        ydk::YList rewrite_pw;
        
}; // MplsLsd::Rewrite::RewritePws


class MplsLsd::Rewrite::RewritePws::RewritePw : public ydk::Entity
{
    public:
        RewritePw();
        ~RewritePw();

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

        ydk::YLeaf pw_list_id; //type: uint32
        ydk::YLeaf rewrite_version; //type: uint64
        ydk::YLeaf bcdl_priority; //type: uint8
        ydk::YLeaf lsd_queue; //type: uint8
        ydk::YLeaf rw_install_time; //type: uint64
        ydk::YLeaf rw_install_age; //type: uint64
        ydk::YLeaf rw_updated; //type: int32
        ydk::YLeaf priority_updated; //type: int32
        ydk::YLeaf rw_redist; //type: int32
        class FpiKey; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey> fpi_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId> rewrite_id;
        ydk::YList associated_fpi;
        ydk::YList v4_rpf;
        ydk::YList v6_rpf;
        ydk::YList mois;
        
}; // MplsLsd::Rewrite::RewritePws::RewritePw


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey : public ydk::Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fpi; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi> fpi;
        ydk::YList application_owner;
        
}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi : public ydk::Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpi_type; //type: MgmtLsdFpi
        class LabelData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData
        class LabelRange; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelRange> label_range;
        
}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData : public ydk::Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf router_flags; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData : public ydk::Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf index_; //type: uint8

}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelRange


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId : public ydk::Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RewriteId_; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_4_ */

