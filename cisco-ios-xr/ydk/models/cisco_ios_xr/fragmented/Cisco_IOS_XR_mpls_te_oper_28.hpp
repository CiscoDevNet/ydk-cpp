#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_28_
#define _CISCO_IOS_XR_MPLS_TE_OPER_28_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_16.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_26.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_27.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm
        class Otn; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn> otn;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l : public ydk::Entity
{
    public:
        OtnS2l();
        ~OtnS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Otn; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn
        class Aps; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps> aps;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incoming_controller; //type: string
        ydk::YLeaf incoming_controller_state; //type: TeControllerState
        ydk::YLeaf incoming_sub_controller; //type: string
        ydk::YLeaf incoming_sub_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_controller; //type: string
        ydk::YLeaf outgoing_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_sub_controller; //type: string
        ydk::YLeaf outgoing_sub_controller_state; //type: TeControllerState
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf outgoing_controller_ifhandle; //type: string
        ydk::YLeaf outgoing_sub_controller_ifhandle; //type: string
        ydk::YLeaf incoming_controller_ifhandle; //type: string
        ydk::YLeaf incoming_sub_controller_ifhandle; //type: string
        ydk::YLeaf gpid; //type: uint16
        class Bandwidth; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth
        class Labels; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels> labels;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel
        class PathEgressLabel; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel : public ydk::Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm
        class Otn_; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_> otn;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel : public ydk::Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm
        class Otn_; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_> otn;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel : public ydk::Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm
        class Otn_; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_> otn;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm
        class Otn_; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_> otn;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectionInfo; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo> protection_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo : public ydk::Entity
{
    public:
        ProtectionInfo();
        ~ProtectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf pbit; //type: boolean
        ydk::YLeaf nbit; //type: boolean
        ydk::YLeaf obit; //type: boolean
        ydk::YLeaf protect_type; //type: TeProtect
        ydk::YLeaf is_wtr_present; //type: boolean
        ydk::YLeaf wtr_timeout; //type: uint32
        ydk::YLeaf is_hopresent; //type: boolean
        ydk::YLeaf ho_timeout; //type: uint32
        ydk::YLeaf is_snc_mode_present; //type: boolean
        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo : public ydk::Entity
{
    public:
        HeadEndBfdInfo();
        ~HeadEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf creation_time; //type: uint32
        ydk::YLeaf lspbfd_type; //type: TeVifBfd
        ydk::YLeaf is_redundant; //type: boolean
        ydk::YLeaf bfd_reverse_path_stale; //type: boolean
        class SessionInfo; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo
        class DeletionHistory; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory
        class BfdReversePathLabel; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo> session_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory> deletion_history;
        ydk::YList bfd_reverse_path_label;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory : public ydk::Entity
{
    public:
        DeletionHistory();
        ~DeletionHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf deletion_time; //type: uint32
        ydk::YLeaf deletion_reason; //type: string
        ydk::YLeaf deletion_diagnostic_code; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel : public ydk::Entity
{
    public:
        BfdReversePathLabel();
        ~BfdReversePathLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo : public ydk::Entity
{
    public:
        TailEndBfdInfo();
        ~TailEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf min_interval; //type: uint32
        ydk::YLeaf min_interval_default; //type: boolean
        ydk::YLeaf multiplier; //type: uint8
        ydk::YLeaf multiplier_default; //type: boolean
        class SessionInfo; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo> session_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection : public ydk::Entity
{
    public:
        SrlgCollection();
        ~SrlgCollection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_collect_type; //type: TeSrlgCollectRequest
        class DiscoveredSrlg; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg

        ydk::YList discovered_srlg;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg : public ydk::Entity
{
    public:
        DiscoveredSrlg();
        ~DiscoveredSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2lExtendedId; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId

        ydk::YList s2l_extended_id;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId : public ydk::Entity
{
    public:
        S2lExtendedId();
        ~S2lExtendedId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec : public ydk::Entity
{
    public:
        ReverseTspec();
        ~ReverseTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo : public ydk::Entity
{
    public:
        LspWrapInfo();
        ~LspWrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_wrap_protection_enable; //type: boolean
        ydk::YLeaf lsp_wrap_protection_label; //type: uint32
        ydk::YLeaf reverse_egress_interface; //type: string
        ydk::YLeaf reverse_lsp_label; //type: uint32
        ydk::YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapState

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo : public ydk::Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diversity_type; //type: TePpDiversity

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics : public ydk::Entity
{
    public:
        AccumulatedPathMetrics();
        ~AccumulatedPathMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_metric; //type: uint64
        ydk::YLeaf igp_metric; //type: uint64
        ydk::YLeaf delay_metric; //type: uint64

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics : public ydk::Entity
{
    public:
        AccumulatedReversePathMetrics();
        ~AccumulatedReversePathMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_metric; //type: uint64
        ydk::YLeaf igp_metric; //type: uint64
        ydk::YLeaf delay_metric; //type: uint64

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj : public ydk::Entity
{
    public:
        S2lReverseLspSubObj();
        ~S2lReverseLspSubObj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro : public ydk::Entity
{
    public:
        OutEro();
        ~OutEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro : public ydk::Entity
{
    public:
        InEro();
        ~InEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro : public ydk::Entity
{
    public:
        PathRro();
        ~PathRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4rroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject
        class LabelRroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject : public ydk::Entity
{
    public:
        Ipv4rroSubObject();
        ~Ipv4rroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags> flags;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

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
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags> flags;
        ydk::YList variable_length_label;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs

        ydk::YList srl_gs;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro : public ydk::Entity
{
    public:
        ResvRro();
        ~ResvRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4rroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject
        class LabelRroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject : public ydk::Entity
{
    public:
        Ipv4rroSubObject();
        ~Ipv4rroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags> flags;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

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
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags> flags;
        ydk::YList variable_length_label;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs

        ydk::YList srl_gs;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray : public ydk::Entity
{
    public:
        PathAffinityArray();
        ~PathAffinityArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_affinity; //type: uint32
        class HopExtendedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity

        ydk::YList hop_extended_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity : public ydk::Entity
{
    public:
        HopExtendedAffinity();
        ~HopExtendedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn : public ydk::Entity
{
    public:
        ReverseEroIn();
        ~ReverseEroIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath : public ydk::Entity
{
    public:
        S2lSegmentRoutingPath();
        ~S2lSegmentRoutingPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: TeSrSid
        ydk::YLeaf has_ip_addresses; //type: boolean
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf has_mpls_label; //type: boolean
        ydk::YLeaf mpls_label_value; //type: uint32
        ydk::YLeaf has_entropy_label; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo : public ydk::Entity
{
    public:
        P2pInfo();
        ~P2pInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bidirectional; //type: boolean
        class AutoBandwidthStatus; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus
        class AutoBandwidthConfig; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig
        class AutoBandwidthOper; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus> auto_bandwidth_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig> auto_bandwidth_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper> auto_bandwidth_oper;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus : public ydk::Entity
{
    public:
        AutoBandwidthStatus();
        ~AutoBandwidthStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_enabled; //type: boolean
        ydk::YLeaf reactivation_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig : public ydk::Entity
{
    public:
        AutoBandwidthConfig();
        ~AutoBandwidthConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_collect_only; //type: boolean
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf maximum_bandwidth; //type: uint32
        ydk::YLeaf application_frequency; //type: uint32
        ydk::YLeaf collection_frequency; //type: uint32
        ydk::YLeaf adjustment_threshold_percent; //type: uint32
        ydk::YLeaf adjustment_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_percent; //type: uint32
        ydk::YLeaf overflow_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_limit; //type: uint32
        ydk::YLeaf underflow_threshold_percent; //type: uint32
        ydk::YLeaf underflow_threshold_value; //type: uint32
        ydk::YLeaf underflow_threshold_limit; //type: uint32
        ydk::YLeaf resignal_last_bandwidth_enabled; //type: boolean
        ydk::YLeaf resignal_last_bandwidth_timeout; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper : public ydk::Entity
{
    public:
        AutoBandwidthOper();
        ~AutoBandwidthOper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_bandwidth_applied; //type: uint32
        ydk::YLeaf bandwidth_pool_type; //type: MplsTeBwPool
        ydk::YLeaf bandwidth_applications; //type: uint32
        ydk::YLeaf last_application_trigger; //type: TeAutobwAppTrigger
        ydk::YLeaf application_jitter; //type: uint32
        ydk::YLeaf time_left_application; //type: uint32
        ydk::YLeaf samples_collected; //type: uint32
        ydk::YLeaf time_left_collection; //type: uint32
        ydk::YLeaf highest_bandwidth; //type: uint32
        ydk::YLeaf underflow_highest_bandwidth; //type: uint32
        ydk::YLeaf threshold_overflows; //type: uint32
        ydk::YLeaf overflow_early_bw_applications; //type: uint32
        ydk::YLeaf threshold_underflows; //type: uint32
        ydk::YLeaf underflow_early_bw_applications; //type: uint32
        ydk::YLeaf collect_only_requested_bandwidth; //type: uint32
        ydk::YLeaf application_reject_reason; //type: TeAutobwAppRej
        ydk::YLeaf resignal_last_bandwidth_expire_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity : public ydk::Entity
{
    public:
        AutoCapacity();
        ~AutoCapacity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoCapacityConfiguration; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration
        class AutoCapacityStats; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats
        class Clone; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration> auto_capacity_configuration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats> auto_capacity_stats;
        ydk::YList clone;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration : public ydk::Entity
{
    public:
        AutoCapacityConfiguration();
        ~AutoCapacityConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_clones; //type: uint32
        ydk::YLeaf maximum_clones; //type: uint32
        ydk::YLeaf merge_bandwidth; //type: uint32
        ydk::YLeaf split_bandwidth; //type: uint32
        ydk::YLeaf nominal_bandwidth; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats : public ydk::Entity
{
    public:
        AutoCapacityStats();
        ~AutoCapacityStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf splits; //type: uint32
        ydk::YLeaf merges; //type: uint32
        ydk::YLeaf total_clones_created; //type: uint32
        ydk::YLeaf total_clones_deleted; //type: uint32
        ydk::YLeaf high_watermark_clones; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone : public ydk::Entity
{
    public:
        Clone();
        ~Clone();

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
        ydk::YLeaf creation_timestamp; //type: uint32
        ydk::YLeaf state; //type: MteTunnelOperState
        ydk::YLeaf signaled_bandwidth; //type: uint32
        ydk::YLeaf current_bandwidth_demand; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CurrentSetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup
        class ReoptSetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup
        class GmplsPathProtectSetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup
        class PreviousSetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup
        class PreviousGmplsPathProtectSetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup
        class GmplsOtherSetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup
        class GmplsOtherProtectSetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup
        class StandbySetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup
        class StandbyReoptSetup; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup
        class LastReOptFail; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail
        class LastStdbyReOptFail; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup> current_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup> reopt_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup> gmpls_path_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup> previous_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup> previous_gmpls_path_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup> gmpls_other_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup> gmpls_other_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup> standby_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup> standby_reopt_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail> last_re_opt_fail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail> last_stdby_re_opt_fail;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup : public ydk::Entity
{
    public:
        CurrentSetup();
        ~CurrentSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_setup_timer; //type: uint32
        ydk::YLeaf selection_reason; //type: string
        ydk::YLeaf current_setup_last_error; //type: string
        class ConnectedUptimes; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes> connected_uptimes;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes : public ydk::Entity
{
    public:
        ConnectedUptimes();
        ~ConnectedUptimes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_lsp_uptime; //type: uint32
        ydk::YLeaf current_uptime; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup : public ydk::Entity
{
    public:
        ReoptSetup();
        ~ReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reoptimized_setup_uptime; //type: uint32
        ydk::YLeaf reoptimized_setup_timer; //type: uint32
        ydk::YLeaf reoptimized_setup_last_error; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup : public ydk::Entity
{
    public:
        GmplsPathProtectSetup();
        ~GmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protecting_setup_uptime; //type: uint32
        ydk::YLeaf protecting_setup_timer; //type: uint32
        ydk::YLeaf protecting_setup_last_error; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup : public ydk::Entity
{
    public:
        PreviousSetup();
        ~PreviousSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_path_option; //type: string
        ydk::YLeaf previous_tunnel_instance; //type: uint32
        ydk::YLeaf previous_fail_reason; //type: string
        ydk::YLeaf previous_setup_last_error; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup : public ydk::Entity
{
    public:
        PreviousGmplsPathProtectSetup();
        ~PreviousGmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_protect_path_option; //type: string
        ydk::YLeaf previous_protect_tunnel_instance; //type: uint32
        ydk::YLeaf previous_protect_fail_reason; //type: string
        ydk::YLeaf previous_protect_setup_last_error; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup : public ydk::Entity
{
    public:
        GmplsOtherSetup();
        ~GmplsOtherSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_index; //type: uint32
        ydk::YLeaf other_setup_error; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup : public ydk::Entity
{
    public:
        GmplsOtherProtectSetup();
        ~GmplsOtherProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_index; //type: uint32
        ydk::YLeaf other_setup_error; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup : public ydk::Entity
{
    public:
        StandbySetup();
        ~StandbySetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf standby_lsp_uptime; //type: uint32
        ydk::YLeaf standby_setup_timer; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup : public ydk::Entity
{
    public:
        StandbyReoptSetup();
        ~StandbyReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reoptimized_setup_uptime; //type: uint32
        ydk::YLeaf reoptimized_setup_timer; //type: uint32
        ydk::YLeaf reoptimized_setup_last_error; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail : public ydk::Entity
{
    public:
        LastReOptFail();
        ~LastReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf re_opt_failed_destination; //type: string
        ydk::YLeaf re_opt_failed_timestamp; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail : public ydk::Entity
{
    public:
        LastStdbyReOptFail();
        ~LastStdbyReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf re_opt_failed_destination; //type: string
        ydk::YLeaf re_opt_failed_timestamp; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection : public ydk::Entity
{
    public:
        PathProtection();
        ~PathProtection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_of_switchover_sec; //type: uint32
        ydk::YLeaf switchover_total; //type: uint16
        ydk::YLeaf switchover_ready; //type: uint16
        ydk::YLeaf standby_reoptimized_number; //type: uint16
        ydk::YLeaf switchover_reason; //type: uint16
        ydk::YLeaf diversity_type; //type: TePpDiversity
        ydk::YLeaf is_path_protect_configured; //type: boolean
        ydk::YLeaf path_protection_protected_by_id; //type: uint32
        ydk::YLeaf valid_path_protection_path_option_exists; //type: boolean
        ydk::YLeaf is_path_protect_switch_over_underway; //type: boolean
        ydk::YLeaf reoptimization_time_remaining; //type: uint32
        class Switchover; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover> switchover;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover : public ydk::Entity
{
    public:
        Switchover();
        ~Switchover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2mpS2lDeletionSubcause

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup : public ydk::Entity
{
    public:
        AutoBackup();
        ~AutoBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_ls_ps; //type: uint32
        ydk::YLeaf protected_s2_ls; //type: uint32
        ydk::YLeaf sharing_families; //type: uint32
        ydk::YLeaf ab_protection_type; //type: AutoBackupProtection
        ydk::YLeaf is_using_srlg; //type: boolean
        ydk::YLeaf srlg_prot_type; //type: AutoBackupSrlgMode
        ydk::YLeaf ab_protected_interface; //type: string
        ydk::YLeaf protected_address; //type: string
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf is_unused_removal_timer_running; //type: boolean
        ydk::YLeaf unused_removal_remaining_time; //type: uint32
        class WeightedSrlgInfo; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo
        class Iep; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo> weighted_srlg_info;
        ydk::YList iep;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo : public ydk::Entity
{
    public:
        WeightedSrlgInfo();
        ~WeightedSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectedInterfaceSrlg; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg
        class WeightedSrlgHop; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop

        ydk::YList protected_interface_srlg;
        ydk::YList weighted_srlg_hop;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg : public ydk::Entity
{
    public:
        ProtectedInterfaceSrlg();
        ~ProtectedInterfaceSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg; //type: uint32
        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop : public ydk::Entity
{
    public:
        WeightedSrlgHop();
        ~WeightedSrlgHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string
        ydk::YLeaf aggregate_admin_weight; //type: uint64
        class CommonSrlg; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg

        ydk::YList common_srlg;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg : public ydk::Entity
{
    public:
        CommonSrlg();
        ~CommonSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep : public ydk::Entity
{
    public:
        Iep();
        ~Iep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_id; //type: uint32
        class IepHop; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop

        ydk::YList iep_hop;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop : public ydk::Entity
{
    public:
        IepHop();
        ~IepHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_index; //type: uint32
        ydk::YLeaf iep_hop_type; //type: MplsTeIepHop
        ydk::YLeaf iep_hop_address; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh : public ydk::Entity
{
    public:
        AutoMesh();
        ~AutoMesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mesh_group_id; //type: uint32
        ydk::YLeaf tunnel_destination_list_name; //type: string
        ydk::YLeaf is_tunnel_unused_timer_running; //type: boolean
        ydk::YLeaf remaining_unused_time; //type: uint32
        ydk::YLeaf mesh_group_type; //type: TeMeshgroup

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc : public ydk::Entity
{
    public:
        AutoPcc();
        ~AutoPcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf creator_address; //type: string
        ydk::YLeaf has_creator_id; //type: boolean
        ydk::YLeaf creator_id; //type: string
        ydk::YLeaf plspid; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation : public ydk::Entity
{
    public:
        PceDelegation();
        ~PceDelegation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: MplsTeSoftPreemptionState
        ydk::YLeaf time_in_preemption_pending; //type: uint16
        ydk::YLeaf preemption_pending_resolution; //type: MplsTeSoftPreemptionResolution
        class SoftPreemptionCounters; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters
        class SoftPreemptionPathError; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters> soft_preemption_counters;
        ydk::YList soft_preemption_path_error;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters : public ydk::Entity
{
    public:
        SoftPreemptionCounters();
        ~SoftPreemptionCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf soft_preemption_events; //type: uint32
        ydk::YLeaf reopt_completed_ls_ps; //type: uint32
        ydk::YLeaf torn_down_ls_ps; //type: uint32
        ydk::YLeaf path_protection_switchover_ls_ps; //type: uint32
        ydk::YLeaf frr_triggered_ls_ps; //type: uint32
        ydk::YLeaf time_in_preemption_pending_min; //type: uint16
        ydk::YLeaf time_in_preemption_pending_max; //type: uint16
        ydk::YLeaf time_in_preemption_pending_avg; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError : public ydk::Entity
{
    public:
        SoftPreemptionPathError();
        ~SoftPreemptionPathError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf preempting_link_address; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel : public ydk::Entity
{
    public:
        WdmUnitunnel();
        ~WdmUnitunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_state; //type: MplsTeTunnelState
        ydk::YLeaf tunnel_role; //type: MplsTeTunnelRole
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf local_optical_router_id; //type: string
        ydk::YLeaf remote_optical_router_id; //type: string
        ydk::YLeaf controlled_interface; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf label_origin; //type: MplsTeMgmtGmplsLabelOrigin
        ydk::YLeaf srlg_discovery; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo : public ydk::Entity
{
    public:
        TransportTunnelInfo();
        ~TransportTunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status_homepath_working; //type: boolean
        class Otn; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn
        class StaticUni; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni
        class EgressStaticUni; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni
        class HomepathEro; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro
        class DiversityInfo; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni> static_uni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni> egress_static_uni;
        ydk::YList homepath_ero;
        ydk::YList diversity_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config_bit_rate; //type: uint32
        class BandwidthCfg; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg> bandwidth_cfg;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg : public ydk::Entity
{
    public:
        BandwidthCfg();
        ~BandwidthCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni : public ydk::Entity
{
    public:
        StaticUni();
        ~StaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_port; //type: string
        ydk::YLeaf client_if_handle; //type: string
        ydk::YLeaf client_odu_name; //type: string
        ydk::YLeaf client_odu_if_handle; //type: string
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf local_termination; //type: MplsTeTermination
        ydk::YLeaf static_uni_type; //type: MplsTeUni
        ydk::YLeaf term_client_port; //type: string
        ydk::YLeaf term_client_if_handle; //type: string
        class TermInterfaceSrlg; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg> term_interface_srlg;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg : public ydk::Entity
{
    public:
        TermInterfaceSrlg();
        ~TermInterfaceSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiscoveredSrlg; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg

        ydk::YList discovered_srlg;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg : public ydk::Entity
{
    public:
        DiscoveredSrlg();
        ~DiscoveredSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni : public ydk::Entity
{
    public:
        EgressStaticUni();
        ~EgressStaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_termination; //type: MplsTeTermination
        ydk::YLeaf remote_uni_type; //type: MplsTeUni
        class EgressPort; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort
        class TermEgressPort; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort> egress_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort> term_egress_port;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort : public ydk::Entity
{
    public:
        EgressPort();
        ~EgressPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr> te_addr;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort : public ydk::Entity
{
    public:
        TermEgressPort();
        ~TermEgressPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr> te_addr;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro : public ydk::Entity
{
    public:
        HomepathEro();
        ~HomepathEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo : public ydk::Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo : public ydk::Entity
{
    public:
        BfdInfo();
        ~BfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_session_up; //type: boolean
        ydk::YLeaf session_up_time; //type: uint32
        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf minimum_session_up_interval; //type: uint32
        ydk::YLeaf maximum_session_up_interval; //type: uint32
        class EventCounters; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters
        class DampeningInfo; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters> event_counters;
        ydk::YList dampening_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters : public ydk::Entity
{
    public:
        EventCounters();
        ~EventCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_create_events; //type: uint32
        ydk::YLeaf session_up_events; //type: uint32
        ydk::YLeaf session_creation_failed_events; //type: uint32
        ydk::YLeaf session_down_events; //type: uint32
        ydk::YLeaf session_admin_down_events; //type: uint32
        ydk::YLeaf session_gracefully_delete_events; //type: uint32
        ydk::YLeaf session_non_gracefully_delete_events; //type: uint32
        ydk::YLeaf session_create_timeout_events; //type: uint32
        ydk::YLeaf session_replay_events; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo : public ydk::Entity
{
    public:
        DampeningInfo();
        ~DampeningInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf hold_down_time; //type: uint32
        ydk::YLeaf remained_time; //type: uint32
        ydk::YLeaf backoff_count; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir : public ydk::Entity
{
    public:
        OtnBidir();
        ~OtnBidir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aps; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps
        class Restoration; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps> aps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration> restoration;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp; //type: MplsTeLspMode
        ydk::YLeaf diversity_type; //type: TePpDiversity
        class ProtectionProfile; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile> protection_profile;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile : public ydk::Entity
{
    public:
        ProtectionProfile();
        ~ProtectionProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule> revert_schedule;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration : public ydk::Entity
{
    public:
        Restoration();
        ~Restoration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf revert_option; //type: TePnrRevertOptions
        ydk::YLeaf diverse_lsp; //type: MplsTeLspMode
        ydk::YLeaf diversity_type; //type: TePpDiversity

}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration


class MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir : public ydk::Entity
{
    public:
        Bidir();
        ~Bidir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_bandwidth; //type: uint32
        ydk::YLeaf reverse_bandwidth_standby; //type: uint32
        class ReverseEroErrorCurrent; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent
        class ReverseEroErrorReopt; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt
        class ReverseEroErrorStandby; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby
        class ReverseEroErrorStandbyReopt; //type: MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent> reverse_ero_error_current;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt> reverse_ero_error_reopt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby> reverse_ero_error_standby;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt> reverse_ero_error_standby_reopt;
        
}; // MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_28_ */

