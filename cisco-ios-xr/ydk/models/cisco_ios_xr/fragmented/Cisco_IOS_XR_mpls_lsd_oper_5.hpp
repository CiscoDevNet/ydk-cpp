#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_5_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_lsd_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId : public ydk::Entity
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

        class RewriteId_; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_ : public ydk::Entity
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

        ydk::YLeaf rewrite_id_type; //type: MgmtLsdRwId
        class LabelContext; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext : public ydk::Entity
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

        ydk::YLeaf label_context_type; //type: MgmtLsdLblCtx
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding
        class LabelBlockSrlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData> label_block_srlb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public ydk::Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

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
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public ydk::Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

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
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData : public ydk::Entity
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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf parent_interface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public ydk::Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data : public ydk::Entity
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
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public ydk::Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

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
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public ydk::Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data : public ydk::Entity
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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public ydk::Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

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
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData : public ydk::Entity
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

        ydk::YLeaf service; //type: uint8
        ydk::YLeaf vpn_id; //type: uint16
        ydk::YLeaf edge_id; //type: uint16
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public ydk::Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf pseudowire_id; //type: uint64
        ydk::YLeaf remote_l2_router_id; //type: uint32
        ydk::YLeaf subinterface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data : public ydk::Entity
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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf tunnel_dest; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf is_srte; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public ydk::Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData : public ydk::Entity
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

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public ydk::Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

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
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite : public ydk::Entity
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

        ydk::YLeafList label_data; //type: list of  uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf : public ydk::Entity
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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v4_rpf_neighbor; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf : public ydk::Entity
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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v6_rpf_neighbor; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf


class MplsLsdNodes::MplsLsdNode::RewriteSummary : public ydk::Entity
{
    public:
        RewriteSummary();
        ~RewriteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_label_fpi; //type: uint32
        ydk::YLeaf num_tefpi; //type: uint32
        ydk::YLeaf num_ipv4fpi; //type: uint32
        ydk::YLeaf num_ipv6fpi; //type: uint32
        ydk::YLeaf num_pw_list_tefpi; //type: uint32
        ydk::YLeaf num_dmtctefpi; //type: uint32
        ydk::YLeaf num_rewrite; //type: uint32
        ydk::YLeaf total_forward_update; //type: uint32
        ydk::YLeaf total_forwad_update_message; //type: uint32
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_t_ev4_paths; //type: uint32
        ydk::YLeaf total_te_head_paths; //type: uint32
        ydk::YLeaf total_pw_paths; //type: uint32
        ydk::YLeaf total_ip_sub_paths; //type: uint32
        ydk::YLeaf total_ipv4rpf_neighbors; //type: uint32
        ydk::YLeaf total_ipv6rpf_neighbors; //type: uint32
        ydk::YLeaf num_rewrite_rpf_neighbors; //type: uint32
        ydk::YLeaf total_dmtc_intf; //type: uint32
        ydk::YLeaf vrf_name_xr; //type: string
        class Ipv4Paths; //type: MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths
        class Ipv6Paths; //type: MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths> ipv4_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths> ipv6_paths;
        
}; // MplsLsdNodes::MplsLsdNode::RewriteSummary


class MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths : public ydk::Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

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
        ydk::YLeaf total_backup_paths; //type: uint32
        ydk::YLeaf total_remote_backup_paths; //type: uint32
        ydk::YLeaf total_protected_paths; //type: uint32
        ydk::YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths


class MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths : public ydk::Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

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
        ydk::YLeaf total_backup_paths; //type: uint32
        ydk::YLeaf total_remote_backup_paths; //type: uint32
        ydk::YLeaf total_protected_paths; //type: uint32
        ydk::YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths


class MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs : public ydk::Entity
{
    public:
        RewriteSummaryVrfs();
        ~RewriteSummaryVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RewriteSummaryVrf; //type: MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf> > rewrite_summary_vrf;
        
}; // MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs


class MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf : public ydk::Entity
{
    public:
        RewriteSummaryVrf();
        ~RewriteSummaryVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf num_label_fpi; //type: uint32
        ydk::YLeaf num_tefpi; //type: uint32
        ydk::YLeaf num_ipv4fpi; //type: uint32
        ydk::YLeaf num_ipv6fpi; //type: uint32
        ydk::YLeaf num_pw_list_tefpi; //type: uint32
        ydk::YLeaf num_dmtctefpi; //type: uint32
        ydk::YLeaf num_rewrite; //type: uint32
        ydk::YLeaf total_forward_update; //type: uint32
        ydk::YLeaf total_forwad_update_message; //type: uint32
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_t_ev4_paths; //type: uint32
        ydk::YLeaf total_te_head_paths; //type: uint32
        ydk::YLeaf total_pw_paths; //type: uint32
        ydk::YLeaf total_ip_sub_paths; //type: uint32
        ydk::YLeaf total_ipv4rpf_neighbors; //type: uint32
        ydk::YLeaf total_ipv6rpf_neighbors; //type: uint32
        ydk::YLeaf num_rewrite_rpf_neighbors; //type: uint32
        ydk::YLeaf total_dmtc_intf; //type: uint32
        ydk::YLeaf vrf_name_xr; //type: string
        class Ipv4Paths; //type: MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths
        class Ipv6Paths; //type: MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths> ipv4_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths> ipv6_paths;
        
}; // MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf


class MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths : public ydk::Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

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
        ydk::YLeaf total_backup_paths; //type: uint32
        ydk::YLeaf total_remote_backup_paths; //type: uint32
        ydk::YLeaf total_protected_paths; //type: uint32
        ydk::YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths


class MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths : public ydk::Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

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
        ydk::YLeaf total_backup_paths; //type: uint32
        ydk::YLeaf total_remote_backup_paths; //type: uint32
        ydk::YLeaf total_protected_paths; //type: uint32
        ydk::YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths


class MplsLsdNodes::MplsLsdNode::SrlbInconsistency : public ydk::Entity
{
    public:
        SrlbInconsistency();
        ~SrlbInconsistency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_srlb_range; //type: uint32
        ydk::YLeaf end_srlb_range; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::SrlbInconsistency


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_5_ */

