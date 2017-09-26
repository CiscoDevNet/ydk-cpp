#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_34_
#define _CISCO_IOS_XR_MPLS_TE_OPER_34_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_1.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_32.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_33.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro : public ydk::Entity
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
        class Ipv4EroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro : public ydk::Entity
{
    public:
        OutXro();
        ~OutXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject> > xro_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

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
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray : public ydk::Entity
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
        class HopExtendedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity> > hop_extended_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro : public ydk::Entity
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
        class Ipv4RroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

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
        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags> flags;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject : public ydk::Entity
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
        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel> > variable_length_label;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject : public ydk::Entity
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

        class SrlGs; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs> > srl_gs;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject : public ydk::Entity
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
        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric : public ydk::Entity
{
    public:
        PreviousHopAddressGeneric();
        ~PreviousHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr> te_addr;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr : public ydk::Entity
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
        class Ipv4UnnumberedAddress; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro : public ydk::Entity
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
        class Ipv4RroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

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
        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags> flags;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject : public ydk::Entity
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
        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel> > variable_length_label;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject : public ydk::Entity
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

        class SrlGs; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs> > srl_gs;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject : public ydk::Entity
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
        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn : public ydk::Entity
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
        class Ipv4EroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec : public ydk::Entity
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
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence : public ydk::Entity
{
    public:
        S2LConvergence();
        ~S2LConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_in; //type: uint64
        ydk::YLeaf path_out; //type: uint64
        ydk::YLeaf resv_in; //type: uint64
        ydk::YLeaf resv_out; //type: uint64
        ydk::YLeaf label_rewrite; //type: uint64
        ydk::YLeaf tunnel_rewrite; //type: uint64
        ydk::YLeaf creation_time; //type: uint64

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec : public ydk::Entity
{
    public:
        S2LFec();
        ~S2LFec();

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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj : public ydk::Entity
{
    public:
        S2LReverseLspSubObj();
        ~S2LReverseLspSubObj();

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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath : public ydk::Entity
{
    public:
        S2LSegmentRoutingPath();
        ~S2LSegmentRoutingPath();

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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption : public ydk::Entity
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
        ydk::YLeaf soft_preemption_timestamp; //type: uint32
        ydk::YLeaf soft_preemption_link; //type: string
        ydk::YLeaf preempting_link_address; //type: string
        ydk::YLeaf time_to_hard_preemption; //type: uint16
        ydk::YLeaf fr_rrewrite; //type: boolean
        ydk::YLeaf fr_rrewrite_tunnel_name; //type: string

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection : public ydk::Entity
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
        class DiscoveredSrlg; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg> > discovered_srlg;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo : public ydk::Entity
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
        class SessionInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo> session_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo : public ydk::Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec : public ydk::Entity
{
    public:
        Tspec();
        ~Tspec();

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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec


class MplsTe::PathProtection : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class SwitchoverLog; //type: MplsTe::PathProtection::SwitchoverLog

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection::SwitchoverLog> switchover_log;
        
}; // MplsTe::PathProtection


class MplsTe::PathProtection::SwitchoverLog : public ydk::Entity
{
    public:
        SwitchoverLog();
        ~SwitchoverLog();

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

        ydk::YLeaf path_protection_switchovers; //type: uint32
        ydk::YLeaf maximum_switchover_millisec; //type: uint32
        ydk::YLeaf average_switchover_millisec; //type: uint32
        class PathProtectionSwitchoverEntry; //type: MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry> > path_protection_switchover_entry;
        
}; // MplsTe::PathProtection::SwitchoverLog


class MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry : public ydk::Entity
{
    public:
        PathProtectionSwitchoverEntry();
        ~PathProtectionSwitchoverEntry();

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

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcause

}; // MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry


class MplsTe::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

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

        class SrigpAreaInfos; //type: MplsTe::SegmentRouting::SrigpAreaInfos
        class SrNodeInfos; //type: MplsTe::SegmentRouting::SrNodeInfos
        class SrPrefixInfos; //type: MplsTe::SegmentRouting::SrPrefixInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos> sr_node_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos> sr_prefix_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrigpAreaInfos> srigp_area_infos;
        
}; // MplsTe::SegmentRouting


class MplsTe::SegmentRouting::SrNodeInfos : public ydk::Entity
{
    public:
        SrNodeInfos();
        ~SrNodeInfos();

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

        class SrNodeInfo; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo> > sr_node_info;
        
}; // MplsTe::SegmentRouting::SrNodeInfos


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo : public ydk::Entity
{
    public:
        SrNodeInfo();
        ~SrNodeInfo();

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

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf area; //type: int32
        ydk::YLeaf igp_node_id; //type: string
        ydk::YLeaf local_node_igp_id; //type: string
        ydk::YLeaf topology_node_is_router; //type: boolean
        ydk::YLeaf local_node_te_router_id; //type: string
        ydk::YLeaf topology_node_overloaded; //type: boolean
        class IgpArea; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea
        class SrNodeInfo_; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_
        class NodeLink; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea> igp_area;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink> > node_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_> sr_node_info;
        
}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea : public ydk::Entity
{
    public:
        IgpArea();
        ~IgpArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_routing_enabled; //type: boolean
        ydk::YLeaf strict_spf_enabled; //type: boolean
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance_xr; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink : public ydk::Entity
{
    public:
        NodeLink();
        ~NodeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_link_type; //type: IgpSubnet
        ydk::YLeaf topology_link_interface_address; //type: string
        ydk::YLeaf topology_link_interface_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_address; //type: string
        ydk::YLeaf topology_link_neighbor_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_system_id; //type: string
        ydk::YLeaf topology_link_neighbor_node_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_generation; //type: uint32
        ydk::YLeaf topology_link_fragment_id; //type: uint32
        ydk::YLeaf topology_link_te_metric; //type: uint32
        ydk::YLeaf topology_link_igp_metric; //type: uint32
        class TopologyLinkExtendedAffinityBit; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit
        class SharedRiskLinkGroup; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup
        class AdjacencySids; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids> > adjacency_sids;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit> > topology_link_extended_affinity_bit;
        
}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids : public ydk::Entity
{
    public:
        AdjacencySids();
        ~AdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid; //type: uint32
        ydk::YLeaf link_type; //type: IgpSubnet
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf nbr_node_igpid; //type: string
        ydk::YLeaf nbr_node_te_router_id; //type: string
        ydk::YLeaf flag_f; //type: boolean
        ydk::YLeaf flag_b; //type: boolean
        ydk::YLeaf flag_v; //type: boolean
        ydk::YLeaf flag_l; //type: boolean
        ydk::YLeaf flag_s; //type: boolean

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit : public ydk::Entity
{
    public:
        TopologyLinkExtendedAffinityBit();
        ~TopologyLinkExtendedAffinityBit();

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

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_ : public ydk::Entity
{
    public:
        SrNodeInfo_();
        ~SrNodeInfo_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_id; //type: uint32
        ydk::YLeaf segment_id_local_absolute_value; //type: uint32
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_size; //type: uint32

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_


class MplsTe::SegmentRouting::SrPrefixInfos : public ydk::Entity
{
    public:
        SrPrefixInfos();
        ~SrPrefixInfos();

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

        class SrPrefixInfo; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo> > sr_prefix_info;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo : public ydk::Entity
{
    public:
        SrPrefixInfo();
        ~SrPrefixInfo();

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

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf area; //type: int32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf prefix_xr; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf prefix_sid; //type: uint32
        ydk::YLeaf prefix_strict_sid; //type: uint32
        ydk::YLeaf flag_r; //type: boolean
        ydk::YLeaf flag_n; //type: boolean
        ydk::YLeaf flag_p; //type: boolean
        ydk::YLeaf flag_e; //type: boolean
        ydk::YLeaf flag_v; //type: boolean
        ydk::YLeaf flag_l; //type: boolean
        ydk::YLeaf strict_flag_p; //type: boolean
        ydk::YLeaf strict_flag_e; //type: boolean
        ydk::YLeaf strict_flag_v; //type: boolean
        ydk::YLeaf strict_flag_l; //type: boolean
        class IgpArea; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea
        class SrPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath
        class AdvertizingNode; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode
        class StrictAdvertizingNode; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode> > advertizing_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea> igp_area;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath> > sr_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode> > strict_advertizing_node;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode : public ydk::Entity
{
    public:
        AdvertizingNode();
        ~AdvertizingNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea : public ydk::Entity
{
    public:
        IgpArea();
        ~IgpArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_routing_enabled; //type: boolean
        ydk::YLeaf strict_spf_enabled; //type: boolean
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance_xr; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath : public ydk::Entity
{
    public:
        SrPath();
        ~SrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_backup_path; //type: boolean
        class PrimaryPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath
        class BackupPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath> backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath> primary_path;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath : public ydk::Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf next_hop; //type: string
        class OutgoingLabelsStack; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack
        class OutgoingStrictLabelsStack; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack> > outgoing_labels_stack;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack> > outgoing_strict_labels_stack;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack : public ydk::Entity
{
    public:
        OutgoingLabelsStack();
        ~OutgoingLabelsStack();

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

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack : public ydk::Entity
{
    public:
        OutgoingStrictLabelsStack();
        ~OutgoingStrictLabelsStack();

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

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_strict_label; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf backup_path_id; //type: uint32

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode : public ydk::Entity
{
    public:
        StrictAdvertizingNode();
        ~StrictAdvertizingNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode


class MplsTe::SegmentRouting::SrigpAreaInfos : public ydk::Entity
{
    public:
        SrigpAreaInfos();
        ~SrigpAreaInfos();

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

        class SrigpAreaInfo; //type: MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo> > srigp_area_info;
        
}; // MplsTe::SegmentRouting::SrigpAreaInfos


class MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo : public ydk::Entity
{
    public:
        SrigpAreaInfo();
        ~SrigpAreaInfo();

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

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf area; //type: int32
        ydk::YLeaf segment_routing_enabled; //type: boolean
        ydk::YLeaf strict_spf_enabled; //type: boolean
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance_xr; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat

}; // MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo


class MplsTe::SignallingCounters : public ydk::Entity
{
    public:
        SignallingCounters();
        ~SignallingCounters();

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

        class Issu; //type: MplsTe::SignallingCounters::Issu
        class HeadSignallingCounters; //type: MplsTe::SignallingCounters::HeadSignallingCounters
        class RemoteSignallingCounters; //type: MplsTe::SignallingCounters::RemoteSignallingCounters
        class Signallings; //type: MplsTe::SignallingCounters::Signallings
        class SignallingSummary; //type: MplsTe::SignallingCounters::SignallingSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters> head_signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters> remote_signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::SignallingSummary> signalling_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings> signallings;
        
}; // MplsTe::SignallingCounters


class MplsTe::SignallingCounters::HeadSignallingCounters : public ydk::Entity
{
    public:
        HeadSignallingCounters();
        ~HeadSignallingCounters();

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

        class HeadSignallingCounter; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter> > head_signalling_counter;
        
}; // MplsTe::SignallingCounters::HeadSignallingCounters


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter : public ydk::Entity
{
    public:
        HeadSignallingCounter();
        ~HeadSignallingCounter();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_sig_name; //type: string
        ydk::YLeaf lsp_id; //type: uint16
        class Statistics; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics
        class DestinationStatistic; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic> > destination_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic : public ydk::Entity
{
    public:
        DestinationStatistic();
        ~DestinationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string
        class Statistics; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic : public ydk::Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf destination_address; //type: string
        class Statistics; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics


class MplsTe::SignallingCounters::Issu : public ydk::Entity
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

        ydk::YLeaf last_cleared_timestamp; //type: uint32
        ydk::YLeaf role; //type: TeProcRole
        ydk::YLeaf last_idt_states; //type: uint32
        ydk::YLeaf total_states; //type: uint32
        ydk::YLeaf total_deletions; //type: uint32
        ydk::YLeaf total_nac_ks; //type: uint64
        ydk::YLeaf total_id_ts; //type: uint32

}; // MplsTe::SignallingCounters::Issu


class MplsTe::SignallingCounters::RemoteSignallingCounters : public ydk::Entity
{
    public:
        RemoteSignallingCounters();
        ~RemoteSignallingCounters();

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

        class RemoteSignallingCounter; //type: MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter> > remote_signalling_counter;
        
}; // MplsTe::SignallingCounters::RemoteSignallingCounters


class MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter : public ydk::Entity
{
    public:
        RemoteSignallingCounter();
        ~RemoteSignallingCounter();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        class Statistics; //type: MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic> > s2l_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter


class MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic : public ydk::Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf destination_address; //type: string
        class Statistics; //type: MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic


class MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics


class MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics


class MplsTe::SignallingCounters::SignallingSummary : public ydk::Entity
{
    public:
        SignallingSummary();
        ~SignallingSummary();

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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::SignallingSummary


class MplsTe::SignallingCounters::Signallings : public ydk::Entity
{
    public:
        Signallings();
        ~Signallings();

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

        class Signalling; //type: MplsTe::SignallingCounters::Signallings::Signalling

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling> > signalling;
        
}; // MplsTe::SignallingCounters::Signallings


class MplsTe::SignallingCounters::Signallings::Signalling : public ydk::Entity
{
    public:
        Signalling();
        ~Signalling();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        class TeSignallingFilterData; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData> te_signalling_filter_data;
        
}; // MplsTe::SignallingCounters::Signallings::Signalling


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData : public ydk::Entity
{
    public:
        TeSignallingFilterData();
        ~TeSignallingFilterData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statistics_filter; //type: TeStatsSigFilter
        class TeSignallingFilterVif; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif
        class TeSignallingFilterLsp; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp> te_signalling_filter_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif> te_signalling_filter_vif;
        
}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp : public ydk::Entity
{
    public:
        TeSignallingFilterLsp();
        ~TeSignallingFilterLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic> > s2l_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic : public ydk::Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf destination_address; //type: string
        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif : public ydk::Entity
{
    public:
        TeSignallingFilterVif();
        ~TeSignallingFilterVif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_sig_name; //type: string
        ydk::YLeaf lsp_id; //type: uint16
        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics
        class DestinationStatistic; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic> > destination_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic : public ydk::Entity
{
    public:
        DestinationStatistic();
        ~DestinationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string
        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic : public ydk::Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf destination_address; //type: string
        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics> statistics;
        
}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics : public ydk::Entity
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

        ydk::YLeaf tx_event_unknown; //type: uint32
        ydk::YLeaf tx_path_create_event; //type: uint32
        ydk::YLeaf tx_path_change_event; //type: uint32
        ydk::YLeaf tx_path_delete_event; //type: uint32
        ydk::YLeaf tx_path_error_event; //type: uint32
        ydk::YLeaf tx_resv_create_event; //type: uint32
        ydk::YLeaf tx_resv_change_event; //type: uint32
        ydk::YLeaf tx_resv_delete_event; //type: uint32
        ydk::YLeaf tx_resv_error_event; //type: uint32
        ydk::YLeaf tx_path_reeval_query_event; //type: uint32
        ydk::YLeaf rx_event_unknown; //type: uint32
        ydk::YLeaf rx_path_create_event; //type: uint32
        ydk::YLeaf rx_path_change_event; //type: uint32
        ydk::YLeaf rx_path_delete_event; //type: uint32
        ydk::YLeaf rx_path_error_event; //type: uint32
        ydk::YLeaf rx_resv_create_event; //type: uint32
        ydk::YLeaf rx_resv_change_event; //type: uint32
        ydk::YLeaf rx_resv_delete_event; //type: uint32
        ydk::YLeaf rx_resv_error_event; //type: uint32
        ydk::YLeaf rx_path_reeval_query_event; //type: uint32
        ydk::YLeaf tx_backup_assign_event; //type: uint32
        ydk::YLeaf rx_backup_assign_err_event; //type: uint32
        ydk::YLeaf events_total_count; //type: uint32
        ydk::YLeaf events_count; //type: uint32

}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics


class MplsTe::SoftPreemption : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Statistics; //type: MplsTe::SoftPreemption::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SoftPreemption::Statistics> statistics;
        
}; // MplsTe::SoftPreemption


class MplsTe::SoftPreemption::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf last_cleared_timestamp; //type: uint32
        ydk::YLeaf soft_preemption_events; //type: uint32
        ydk::YLeaf soft_preempted_ls_ps; //type: uint32
        ydk::YLeaf timed_out_soft_preempted_lsp_ss; //type: uint32
        ydk::YLeaf torn_down_soft_preempted_ls_ps; //type: uint32
        ydk::YLeaf frr_triggered_soft_preempted_lsp_ss; //type: uint32
        ydk::YLeaf minimum_time_in_soft_preempted_state; //type: uint16
        ydk::YLeaf time_in_soft_preempted_state_max; //type: uint16
        ydk::YLeaf time_in_soft_preempted_state_avg; //type: uint16
        ydk::YLeaf soft_preempted_head_ls_ps; //type: uint32
        ydk::YLeaf reoptimized_soft_preempted_ls_ps; //type: uint32
        ydk::YLeaf torndown_soft_preempted_ls_ps; //type: uint32
        ydk::YLeaf path_protected_switchover_soft_preempted_ls_ps; //type: uint32

}; // MplsTe::SoftPreemption::Statistics


class MplsTe::TeMib : public ydk::Entity
{
    public:
        TeMib();
        ~TeMib();

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

        class Scalars; //type: MplsTe::TeMib::Scalars

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TeMib::Scalars> scalars;
        
}; // MplsTe::TeMib


class MplsTe::TeMib::Scalars : public ydk::Entity
{
    public:
        Scalars();
        ~Scalars();

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

        ydk::YLeaf mpls_tunnel_configured; //type: uint32
        ydk::YLeaf mpls_tunnel_active; //type: uint32
        ydk::YLeaf mpls_tunnel_te_dist_proto; //type: uint8
        ydk::YLeaf mpls_tunnel_max_hops; //type: uint32
        ydk::YLeaf mpls_tunnel_notification_max_rate; //type: uint32

}; // MplsTe::TeMib::Scalars


class MplsTe::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

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

        class Global; //type: MplsTe::Topology::Global
        class DestinationPaths; //type: MplsTe::Topology::DestinationPaths
        class ConfiguredSrlgs; //type: MplsTe::Topology::ConfiguredSrlgs
        class Srlgs; //type: MplsTe::Topology::Srlgs
        class PathTunnels; //type: MplsTe::Topology::PathTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::ConfiguredSrlgs> configured_srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths> destination_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels> path_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs> srlgs;
        
}; // MplsTe::Topology


class MplsTe::Topology::ConfiguredSrlgs : public ydk::Entity
{
    public:
        ConfiguredSrlgs();
        ~ConfiguredSrlgs();

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

        class ConfiguredSrlg; //type: MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg> > configured_srlg;
        
}; // MplsTe::Topology::ConfiguredSrlgs


class MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg : public ydk::Entity
{
    public:
        ConfiguredSrlg();
        ~ConfiguredSrlg();

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

        ydk::YLeaf srlg_number; //type: int32
        ydk::YLeaf srlg_number_xr; //type: uint32
        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf is_admin_weight_configured; //type: boolean
        class SrlgLink; //type: MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink> > srlg_link;
        
}; // MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg


class MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink : public ydk::Entity
{
    public:
        SrlgLink();
        ~SrlgLink();

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
        ydk::YLeaf remote_address; //type: string

}; // MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink


class MplsTe::Topology::DestinationPaths : public ydk::Entity
{
    public:
        DestinationPaths();
        ~DestinationPaths();

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

        class DestinationPath; //type: MplsTe::Topology::DestinationPaths::DestinationPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath> > destination_path;
        
}; // MplsTe::Topology::DestinationPaths


class MplsTe::Topology::DestinationPaths::DestinationPath : public ydk::Entity
{
    public:
        DestinationPath();
        ~DestinationPath();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf affinity_bits; //type: int32
        ydk::YLeaf affinity_mask; //type: int32
        ydk::YLeaf setup_priority; //type: int32
        ydk::YLeaf hold_priority; //type: int32
        ydk::YLeaf bandwidth; //type: int32
        ydk::YLeaf igp_type; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf igp_area; //type: int32
        ydk::YLeaf hop_limit; //type: int32
        ydk::YLeaf exclude_srlg_ip_address; //type: string
        ydk::YLeaf path_type; //type: MplsTePath
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf path_name; //type: string
        ydk::YLeaf cost_limit; //type: int32
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf is_partial_path; //type: boolean
        ydk::YLeaf is_full_path; //type: boolean
        ydk::YLeaf is_topology_checked; //type: boolean
        ydk::YLeaf is_segment_routing_db_checked; //type: boolean
        ydk::YLeaf requested_bandwidth; //type: uint64
        ydk::YLeaf bandwidth_type; //type: uint64
        ydk::YLeaf mininum_bandwidth; //type: uint64
        ydk::YLeaf accumulated_admin_weight; //type: uint64
        ydk::YLeaf setup_priority_xr; //type: uint32
        ydk::YLeaf hold_priority_xr; //type: uint32
        ydk::YLeaf node_hop_count; //type: uint8
        ydk::YLeaf exclude_srlg_address; //type: string
        class Affinity; //type: MplsTe::Topology::DestinationPaths::DestinationPath::Affinity
        class Hop; //type: MplsTe::Topology::DestinationPaths::DestinationPath::Hop
        class SharedRiskLinkGroup; //type: MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup
        class SrSegment; //type: MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::Hop> > hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment> > sr_segment;
        
}; // MplsTe::Topology::DestinationPaths::DestinationPath


class MplsTe::Topology::DestinationPaths::DestinationPath::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

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

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::Topology::DestinationPaths::DestinationPath::Affinity


class MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

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

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity


class MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

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

}; // MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

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

}; // MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::Topology::DestinationPaths::DestinationPath::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

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

}; // MplsTe::Topology::DestinationPaths::DestinationPath::Hop


class MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup


class MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment : public ydk::Entity
{
    public:
        SrSegment();
        ~SrSegment();

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

        ydk::YLeaf sid_type; //type: TeSrSid
        ydk::YLeaf has_ip_addresses; //type: boolean
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf has_mpls_label; //type: boolean
        ydk::YLeaf mpls_label_value; //type: uint32
        ydk::YLeaf has_entropy_label; //type: boolean

}; // MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment


class MplsTe::Topology::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf hold_down_interval; //type: uint32
        ydk::YLeaf link_add_remove_count; //type: uint32
        ydk::YLeaf local_model_id; //type: uint32
        class Areas; //type: MplsTe::Topology::Global::Areas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Global::Areas> > areas;
        
}; // MplsTe::Topology::Global


class MplsTe::Topology::Global::Areas : public ydk::Entity
{
    public:
        Areas();
        ~Areas();

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

        ydk::YLeaf protocol; //type: IgpProtocol
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf area_id; //type: string
        class LocalSidAndSrbg; //type: MplsTe::Topology::Global::Areas::LocalSidAndSrbg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Global::Areas::LocalSidAndSrbg> local_sid_and_srbg;
        
}; // MplsTe::Topology::Global::Areas


class MplsTe::Topology::Global::Areas::LocalSidAndSrbg : public ydk::Entity
{
    public:
        LocalSidAndSrbg();
        ~LocalSidAndSrbg();

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

        ydk::YLeaf segment_id; //type: uint32
        ydk::YLeaf segment_id_local_absolute_value; //type: uint32
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_size; //type: uint32

}; // MplsTe::Topology::Global::Areas::LocalSidAndSrbg


class MplsTe::Topology::PathTunnels : public ydk::Entity
{
    public:
        PathTunnels();
        ~PathTunnels();

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

        class PathTunnel; //type: MplsTe::Topology::PathTunnels::PathTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel> > path_tunnel;
        
}; // MplsTe::Topology::PathTunnels


class MplsTe::Topology::PathTunnels::PathTunnel : public ydk::Entity
{
    public:
        PathTunnel();
        ~PathTunnel();

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

        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf is_partial_path; //type: boolean
        ydk::YLeaf is_full_path; //type: boolean
        ydk::YLeaf is_topology_checked; //type: boolean
        ydk::YLeaf is_segment_routing_db_checked; //type: boolean
        ydk::YLeaf requested_bandwidth; //type: uint64
        ydk::YLeaf bandwidth_type; //type: uint64
        ydk::YLeaf mininum_bandwidth; //type: uint64
        ydk::YLeaf accumulated_admin_weight; //type: uint64
        ydk::YLeaf setup_priority_xr; //type: uint32
        ydk::YLeaf hold_priority_xr; //type: uint32
        ydk::YLeaf node_hop_count; //type: uint8
        ydk::YLeaf exclude_srlg_address; //type: string
        class Affinity; //type: MplsTe::Topology::PathTunnels::PathTunnel::Affinity
        class Hop; //type: MplsTe::Topology::PathTunnels::PathTunnel::Hop
        class SharedRiskLinkGroup; //type: MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup
        class SrSegment; //type: MplsTe::Topology::PathTunnels::PathTunnel::SrSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::Hop> > hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::SrSegment> > sr_segment;
        
}; // MplsTe::Topology::PathTunnels::PathTunnel


class MplsTe::Topology::PathTunnels::PathTunnel::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

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

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::Topology::PathTunnels::PathTunnel::Affinity


class MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

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

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity


class MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

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

}; // MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

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

}; // MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::Topology::PathTunnels::PathTunnel::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

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

}; // MplsTe::Topology::PathTunnels::PathTunnel::Hop


class MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup


class MplsTe::Topology::PathTunnels::PathTunnel::SrSegment : public ydk::Entity
{
    public:
        SrSegment();
        ~SrSegment();

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

        ydk::YLeaf sid_type; //type: TeSrSid
        ydk::YLeaf has_ip_addresses; //type: boolean
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf has_mpls_label; //type: boolean
        ydk::YLeaf mpls_label_value; //type: uint32
        ydk::YLeaf has_entropy_label; //type: boolean

}; // MplsTe::Topology::PathTunnels::PathTunnel::SrSegment


class MplsTe::Topology::Srlgs : public ydk::Entity
{
    public:
        Srlgs();
        ~Srlgs();

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

        class Srlg; //type: MplsTe::Topology::Srlgs::Srlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg> > srlg;
        
}; // MplsTe::Topology::Srlgs


class MplsTe::Topology::Srlgs::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

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

        ydk::YLeaf srlg_number; //type: int32
        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32
        class SrlgAreas; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas> > srlg_areas;
        
}; // MplsTe::Topology::Srlgs::Srlg


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas : public ydk::Entity
{
    public:
        SrlgAreas();
        ~SrlgAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat
        class SrlgLink; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink> > srlg_link;
        
}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink : public ydk::Entity
{
    public:
        SrlgLink();
        ~SrlgLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_address; //type: string
        ydk::YLeaf te_router_id; //type: string
        class LinkAddressGeneric; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric> link_address_generic;
        
}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric : public ydk::Entity
{
    public:
        LinkAddressGeneric();
        ~LinkAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr> te_addr;
        
}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr : public ydk::Entity
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
        class Ipv4UnnumberedAddress; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
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

}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTe::TopologyBriefs : public ydk::Entity
{
    public:
        TopologyBriefs();
        ~TopologyBriefs();

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

        class TopologyBrief; //type: MplsTe::TopologyBriefs::TopologyBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief> > topology_brief;
        
}; // MplsTe::TopologyBriefs


class MplsTe::TopologyBriefs::TopologyBrief : public ydk::Entity
{
    public:
        TopologyBrief();
        ~TopologyBrief();

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

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_id; //type: string
        ydk::YLeaf area; //type: int32
        ydk::YLeaf topology_node_type; //type: MplsTeNode
        ydk::YLeaf igp_node_id; //type: string
        ydk::YLeaf topology_node_te_router_id; //type: string
        ydk::YLeaf topology_node_overloaded; //type: boolean
        class TopologyNodeSidAndSrbg; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg
        class TopologyNodeLink; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink> > topology_node_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg> topology_node_sid_and_srbg;
        
}; // MplsTe::TopologyBriefs::TopologyBrief


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink : public ydk::Entity
{
    public:
        TopologyNodeLink();
        ~TopologyNodeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_link_type; //type: IgpSubnet
        ydk::YLeaf topology_link_interface_address; //type: string
        ydk::YLeaf topology_link_interface_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_address; //type: string
        ydk::YLeaf topology_link_neighbor_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_system_id; //type: string
        ydk::YLeaf topology_link_neighbor_node_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_generation; //type: uint32
        ydk::YLeaf topology_link_fragment_id; //type: uint32
        ydk::YLeaf topology_link_te_metric; //type: uint32
        ydk::YLeaf topology_link_igp_metric; //type: uint32
        ydk::YLeaf topology_link_uni_delay; //type: uint32
        ydk::YLeaf topology_link_affinity_bits; //type: uint32
        ydk::YLeaf topology_link_switching_capability; //type: uint8
        ydk::YLeaf topology_link_encoding; //type: uint8
        ydk::YLeaf topology_link_bandwidth_model; //type: IgpteLibBwModel
        class TopologyLinkBandwidth; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth
        class OduLinkCapabilities; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities
        class TopologyLinkExtendedAffinityBit; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit
        class SharedRiskLinkGroup; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup
        class AdjacencySid; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid> > adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth> topology_link_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit> > topology_link_extended_affinity_bit;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid; //type: uint32
        ydk::YLeaf link_type; //type: IgpSubnet
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf nbr_node_igpid; //type: string
        ydk::YLeaf nbr_node_te_router_id; //type: string
        ydk::YLeaf flag_f; //type: boolean
        ydk::YLeaf flag_b; //type: boolean
        ydk::YLeaf flag_v; //type: boolean
        ydk::YLeaf flag_l; //type: boolean
        ydk::YLeaf flag_s; //type: boolean

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_34_ */

