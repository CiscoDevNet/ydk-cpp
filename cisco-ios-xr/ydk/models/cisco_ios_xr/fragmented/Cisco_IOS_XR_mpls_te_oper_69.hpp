#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_69_
#define _CISCO_IOS_XR_MPLS_TE_OPER_69_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_68.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class FlexFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2lExtendedId; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId

        ydk::YList s2l_extended_id;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

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

        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        class ReverseLspFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection> protection;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2lExtendedId; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId

        ydk::YList s2l_extended_id;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

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

        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class FlexInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection
        class ReverseLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp> reverse_lsp;
        ydk::YList lsp_hop;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class FlexFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2lExtendedId; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId

        ydk::YList s2l_extended_id;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

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

        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        class ReverseLspFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection> protection;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2lExtendedId; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId

        ydk::YList s2l_extended_id;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelAutoBandwidths : public ydk::Entity
{
    public:
        TunnelAutoBandwidths();
        ~TunnelAutoBandwidths();

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

        class TunnelAutoBandwidth; //type: MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth

        ydk::YList tunnel_auto_bandwidth;
        
}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths


class MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth : public ydk::Entity
{
    public:
        TunnelAutoBandwidth();
        ~TunnelAutoBandwidth();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf bandwidth_applications; //type: uint32
        ydk::YLeaf last_bandwidth_applied; //type: uint32
        ydk::YLeaf tunnel_requested_bandwidth; //type: uint32
        ydk::YLeaf signalled_bandwidth; //type: uint32
        ydk::YLeaf highest_bandwidth; //type: uint32
        ydk::YLeaf last_sample_bandwidth; //type: uint32
        ydk::YLeaf samples_collected; //type: uint32
        ydk::YLeaf time_left_application; //type: uint32
        class AutoBandwidthStatus; //type: MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus> auto_bandwidth_status;
        
}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth


class MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus : public ydk::Entity
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

}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus


class MplsTeStandby::Tunnels::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pcalc_tie_breaker_type; //type: TePathSelectionTiebreaker
        ydk::YLeaf pcalc_tiebreaker; //type: uint32
        ydk::YLeaf tiebreaker_qualifier; //type: MplsTeMetricQualifier
        ydk::YLeaf te_process_status; //type: MplsTeTunnelsProcessStatus
        ydk::YLeaf is_rsvp_process_enabled; //type: boolean
        ydk::YLeaf is_forwarding_enabled; //type: boolean
        ydk::YLeaf activated_heads; //type: uint32
        ydk::YLeaf deactivated_heads; //type: uint32
        ydk::YLeaf recovered_heads; //type: uint32
        ydk::YLeaf is_periodic_reoptimization_on; //type: boolean
        ydk::YLeaf reoptimization_period; //type: uint32
        ydk::YLeaf next_reoptimization_timer; //type: uint32
        ydk::YLeaf auto_bandwidth_tunnels; //type: uint32
        ydk::YLeaf auto_bandwidth_collection_period; //type: uint32
        ydk::YLeaf is_promotion_on; //type: boolean
        ydk::YLeaf promotion_period; //type: uint32
        ydk::YLeaf next_promotion_timer; //type: uint32
        ydk::YLeaf tunnel_check_period; //type: uint32
        ydk::YLeaf next_check_time; //type: uint32
        ydk::YLeaf tunnel_verify_period; //type: uint32
        ydk::YLeaf next_verify_timer; //type: uint32
        ydk::YLeaf frr_head_tunnels; //type: uint32
        ydk::YLeaf protected_head_tunnels; //type: uint32
        ydk::YLeaf rerouted_head_tunnels; //type: uint32
        ydk::YLeaf frr_mid_point_tunnels; //type: uint32
        ydk::YLeaf protected_mid_point_tunnels; //type: uint32
        ydk::YLeaf rerouted_mid_point_tunnels; //type: uint32
        ydk::YLeaf link_protected_tunnels; //type: uint32
        ydk::YLeaf node_protected_tunnels; //type: uint32
        ydk::YLeaf bw_protected_tunnels; //type: uint32
        ydk::YLeaf frr_p2p_head_tunnels; //type: uint32
        ydk::YLeaf protected_p2p_head_tunnels; //type: uint32
        ydk::YLeaf rerouted_p2p_head_tunnels; //type: uint32
        ydk::YLeaf frr_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf protected_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf rerouted_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf link_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf node_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf bw_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf backup_tunnels; //type: uint32
        ydk::YLeaf backups_assigned; //type: uint32
        ydk::YLeaf frr_protected_interfaces; //type: uint32
        ydk::YLeaf rerouted_interfaces; //type: uint32
        ydk::YLeaf p2p_head_tunnels; //type: uint32
        ydk::YLeaf up_p2p_head_tunnels; //type: uint32
        ydk::YLeaf dynamic_up_p2p_head_tunnels; //type: uint32
        ydk::YLeaf frr_config_p2p_head_tunnels; //type: uint32
        ydk::YLeaf p2p_head_destinations; //type: uint32
        ydk::YLeaf p2p_head_destinations_up; //type: uint32
        ydk::YLeaf bw_protected_p2p_s2_ls; //type: uint32
        ydk::YLeaf link_protected_p2p_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf recovering_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf frr_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf protected_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf frr_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf protected_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf p2p_tail_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_tail_s2_ls; //type: uint32
        ydk::YLeaf p2p_tail_tunnels; //type: uint32
        ydk::YLeaf path_protect_configured_tunnels; //type: uint16
        ydk::YLeaf path_protect_configured_tunnels_up; //type: uint16
        ydk::YLeaf path_protect_configured_tunnels_standby_up; //type: uint16
        ydk::YLeaf link_diverse_paths; //type: uint16
        ydk::YLeaf node_diverse_paths; //type: uint16
        ydk::YLeaf link_and_node_diverse_paths; //type: uint16
        ydk::YLeaf user_defined_paths; //type: uint16
        ydk::YLeaf p2mp_head_tunnels; //type: uint32
        ydk::YLeaf up_p2mp_head_tunnels; //type: uint32
        ydk::YLeaf frr_config_p2mp_head_tunnels; //type: uint32
        ydk::YLeaf p2mp_head_destinations; //type: uint32
        ydk::YLeaf up_p2mp_head_destinations; //type: uint32
        ydk::YLeaf bw_protected_p2mp_s2_ls; //type: uint32
        ydk::YLeaf link_protected_p2mp_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf frr_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf protected_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf frr_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf protected_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf p2mp_tail_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_tail_s2_ls; //type: uint32
        ydk::YLeaf bidir_head_tunnels; //type: uint32
        ydk::YLeaf bidir_head_tunnels_up; //type: uint32
        ydk::YLeaf bidir_head_tunnels_associated; //type: uint32
        ydk::YLeaf bidir_head_tunnels_corouted; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_up; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_mid_tunnels; //type: uint32
        ydk::YLeaf bidir_mid_tunnels_up; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_up; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_corouted; //type: uint32
        class AutobackupSummary; //type: MplsTeStandby::Tunnels::Summary::AutobackupSummary
        class AutoMeshSummary; //type: MplsTeStandby::Tunnels::Summary::AutoMeshSummary
        class AutoMeshOneHopSummary; //type: MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary
        class GmplsUniSummary; //type: MplsTeStandby::Tunnels::Summary::GmplsUniSummary
        class GmplsNniSummary; //type: MplsTeStandby::Tunnels::Summary::GmplsNniSummary
        class CurrentTunnelConvergenceSummary; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary
        class LastTunnelConvergenceSummary; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary
        class AutoTunServerSummary; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutobackupSummary> autobackup_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoMeshSummary> auto_mesh_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary> auto_mesh_one_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::GmplsUniSummary> gmpls_uni_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::GmplsNniSummary> gmpls_nni_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary> current_tunnel_convergence_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary> last_tunnel_convergence_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary> auto_tun_server_summary;
        
}; // MplsTeStandby::Tunnels::Summary


class MplsTeStandby::Tunnels::Summary::AutobackupSummary : public ydk::Entity
{
    public:
        AutobackupSummary();
        ~AutobackupSummary();

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

        ydk::YLeaf autobackups; //type: uint32
        ydk::YLeaf up_autobackups; //type: uint32
        ydk::YLeaf down_autobackups; //type: uint32
        ydk::YLeaf unused_autobackups; //type: uint32
        ydk::YLeaf next_hop_autobackups; //type: uint32
        ydk::YLeaf next_next_hop_autobackups; //type: uint32
        ydk::YLeaf srlg_strict_autobackups; //type: uint32
        ydk::YLeaf srlg_preferred_autobackups; //type: uint32
        ydk::YLeaf srlg_weighted_autobackups; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_s2_ls; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::AutobackupSummary


class MplsTeStandby::Tunnels::Summary::AutoMeshSummary : public ydk::Entity
{
    public:
        AutoMeshSummary();
        ~AutoMeshSummary();

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

        ydk::YLeaf auto_mesh_tunnels; //type: uint32
        ydk::YLeaf up_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf down_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf frr_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf auto_mesh_groups; //type: uint32
        ydk::YLeaf auto_mesh_destinations; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::AutoMeshSummary


class MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary : public ydk::Entity
{
    public:
        AutoMeshOneHopSummary();
        ~AutoMeshOneHopSummary();

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

        ydk::YLeaf auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf up_auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf down_auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf frr_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf auto_mesh_one_hop_groups; //type: uint32
        ydk::YLeaf auto_mesh_one_hop_destinations; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary


class MplsTeStandby::Tunnels::Summary::GmplsUniSummary : public ydk::Entity
{
    public:
        GmplsUniSummary();
        ~GmplsUniSummary();

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

        ydk::YLeaf heads_up; //type: uint32
        ydk::YLeaf heads_down; //type: uint32
        ydk::YLeaf tails_up; //type: uint32
        ydk::YLeaf tails_down; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::GmplsUniSummary


class MplsTeStandby::Tunnels::Summary::GmplsNniSummary : public ydk::Entity
{
    public:
        GmplsNniSummary();
        ~GmplsNniSummary();

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

        ydk::YLeaf heads_up; //type: uint32
        ydk::YLeaf heads_down; //type: uint32
        ydk::YLeaf mids_up; //type: uint32
        ydk::YLeaf mids_down; //type: uint32
        ydk::YLeaf tails_up; //type: uint32
        ydk::YLeaf tails_down; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::GmplsNniSummary


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary : public ydk::Entity
{
    public:
        CurrentTunnelConvergenceSummary();
        ~CurrentTunnelConvergenceSummary();

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

        ydk::YLeaf tunnel_frr_active_count; //type: uint32
        ydk::YLeaf tunnel_frr_total_count; //type: uint32
        ydk::YLeaf tunnel_converged_count; //type: uint32
        ydk::YLeaf tunnel_total_convergence_complete_time; //type: uint64
        class TablePathOut; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        
}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut : public ydk::Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

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


}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn : public ydk::Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

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


}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite : public ydk::Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

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


}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc : public ydk::Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

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


}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite : public ydk::Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

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


}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger : public ydk::Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

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


}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary : public ydk::Entity
{
    public:
        LastTunnelConvergenceSummary();
        ~LastTunnelConvergenceSummary();

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

        ydk::YLeaf tunnel_frr_active_count; //type: uint32
        ydk::YLeaf tunnel_frr_total_count; //type: uint32
        ydk::YLeaf tunnel_converged_count; //type: uint32
        ydk::YLeaf tunnel_total_convergence_complete_time; //type: uint64
        class TablePathOut; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        
}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut : public ydk::Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn : public ydk::Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite : public ydk::Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc : public ydk::Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite : public ydk::Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger : public ydk::Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

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


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary : public ydk::Entity
{
    public:
        AutoTunServerSummary();
        ~AutoTunServerSummary();

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

        class TotalAutoP2mpTunnels; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels
        class TotalAutoP2pTunnels; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels
        class ClientsSummary; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels> total_auto_p2mp_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels> total_auto_p2p_tunnels;
        ydk::YList clients_summary;
        
}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels : public ydk::Entity
{
    public:
        TotalAutoP2mpTunnels();
        ~TotalAutoP2mpTunnels();

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

        ydk::YLeaf auto_p2mp_tunnel; //type: uint32
        ydk::YLeaf auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf down_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf frr_auto_p2mp_tunnels; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels : public ydk::Entity
{
    public:
        TotalAutoP2pTunnels();
        ~TotalAutoP2pTunnels();

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

        ydk::YLeaf auto_p2p_tunnel; //type: uint32
        ydk::YLeaf up_auto_p2p_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2p_tunnels; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary : public ydk::Entity
{
    public:
        ClientsSummary();
        ~ClientsSummary();

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

        ydk::YLeaf protocol_type; //type: TeServTunClient
        ydk::YLeaf client_instance_name; //type: string
        ydk::YLeaf client_id; //type: uint32
        class P2mpInfo; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo
        class P2pInfo; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo> p2mp_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo> p2p_info;
        
}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo : public ydk::Entity
{
    public:
        P2mpInfo();
        ~P2mpInfo();

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

        ydk::YLeaf auto_p2mp_tunnel; //type: uint32
        ydk::YLeaf auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf down_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf frr_auto_p2mp_tunnels; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf auto_p2p_tunnel; //type: uint32
        ydk::YLeaf up_auto_p2p_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2p_tunnels; //type: uint32

}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo


class MplsTeStandby::Tunnels::TunnelPathProtections : public ydk::Entity
{
    public:
        TunnelPathProtections();
        ~TunnelPathProtections();

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

        class TunnelPathProtection; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection

        ydk::YList tunnel_path_protection;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection : public ydk::Entity
{
    public:
        TunnelPathProtection();
        ~TunnelPathProtection();

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
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        class PathProtection; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection
        class CurrentLsp; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp
        class StandbyLsp; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp> current_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp> standby_lsp;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection : public ydk::Entity
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
        class Switchover; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover> switchover;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2mpS2lDeletionSubcause

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp : public ydk::Entity
{
    public:
        CurrentLsp();
        ~CurrentLsp();

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

        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class SrlspOutgoingInfo; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop

        ydk::YList srlsp_outgoing_info;
        ydk::YList lsp_hop;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo : public ydk::Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

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

        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp : public ydk::Entity
{
    public:
        StandbyLsp();
        ~StandbyLsp();

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

        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class SrlspOutgoingInfo; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop

        ydk::YList srlsp_outgoing_info;
        ydk::YList lsp_hop;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo : public ydk::Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

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

        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::MaximumTunnels : public ydk::Entity
{
    public:
        MaximumTunnels();
        ~MaximumTunnels();

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

        ydk::YLeaf current_maximum_tunnels; //type: uint32
        ydk::YLeaf current_maximum_destinations; //type: uint32
        ydk::YLeaf current_maximum_p2mp_tunnels; //type: uint32
        ydk::YLeaf current_maximum_p2mp_destnation_per_tunnel; //type: uint32
        ydk::YLeaf absolute_maximum; //type: uint32
        ydk::YLeaf current_maximum_autobackups; //type: uint32
        ydk::YLeaf current_maximum_auto_mesh; //type: uint32
        ydk::YLeaf current_tunnel_count; //type: uint32
        ydk::YLeaf current_destination_count; //type: uint32
        ydk::YLeaf current_p2mp_tunnel_count; //type: uint32
        ydk::YLeaf current_p2mp_destnation_per_tunnel_count; //type: uint32
        ydk::YLeaf is_autobackup_range_configured; //type: boolean
        ydk::YLeaf current_autobackups; //type: uint32
        ydk::YLeaf is_auto_mesh_range_configured; //type: boolean
        ydk::YLeaf current_auto_mesh; //type: uint32
        ydk::YLeaf current_maximum_gmpls_unitunnels; //type: uint32
        ydk::YLeaf current_gmpls_uni; //type: uint32

}; // MplsTeStandby::MaximumTunnels


class MplsTeStandby::PathProtection : public ydk::Entity
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

        class SwitchoverLog; //type: MplsTeStandby::PathProtection::SwitchoverLog

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::PathProtection::SwitchoverLog> switchover_log;
        
}; // MplsTeStandby::PathProtection


class MplsTeStandby::PathProtection::SwitchoverLog : public ydk::Entity
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
        class PathProtectionSwitchoverEntry; //type: MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry

        ydk::YList path_protection_switchover_entry;
        
}; // MplsTeStandby::PathProtection::SwitchoverLog


class MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry : public ydk::Entity
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
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2mpS2lDeletionSubcause

}; // MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry


class MplsTeStandby::FibNextHopLabelRoutes : public ydk::Entity
{
    public:
        FibNextHopLabelRoutes();
        ~FibNextHopLabelRoutes();

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

        class FibNextHopLabelRoute; //type: MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute

        ydk::YList fib_next_hop_label_route;
        
}; // MplsTeStandby::FibNextHopLabelRoutes


class MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute : public ydk::Entity
{
    public:
        FibNextHopLabelRoute();
        ~FibNextHopLabelRoute();

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
        ydk::YLeaf prefix_addr; //type: string
        ydk::YLeaf create_time; //type: uint32
        ydk::YLeaf last_used_time; //type: uint32
        ydk::YLeaf last_update_time; //type: uint32
        ydk::YLeaf expire_time; //type: uint32
        ydk::YLeaf is_registered; //type: boolean
        ydk::YLeaf is_notified; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf route_version; //type: uint64
        class TargetAddress; //type: MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress
        class NextHopPath; //type: MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress> target_address;
        ydk::YList next_hop_path;
        
}; // MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute


class MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress : public ydk::Entity
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

        ydk::YLeaf type; //type: TeTargetAddr
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress


class MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath : public ydk::Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

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
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf backup_path_id; //type: uint32
        ydk::YLeaf pure_backup; //type: boolean
        class LabelStack; //type: MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack

        ydk::YList label_stack;
        
}; // MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath


class MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

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

}; // MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack


class MplsTeStandby::P2mp : public ydk::Entity
{
    public:
        P2mp();
        ~P2mp();

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

        class TunnelRewrites; //type: MplsTeStandby::P2mp::TunnelRewrites
        class CollaboratorTimers; //type: MplsTeStandby::P2mp::CollaboratorTimers
        class ForwardingOutputLabelRewrites; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites> tunnel_rewrites;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites> forwarding_output_label_rewrites;
        
}; // MplsTeStandby::P2mp


class MplsTeStandby::P2mp::TunnelRewrites : public ydk::Entity
{
    public:
        TunnelRewrites();
        ~TunnelRewrites();

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

        class TunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite

        ydk::YList tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite : public ydk::Entity
{
    public:
        TunnelRewrite();
        ~TunnelRewrite();

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

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf tunnel_signal_name; //type: string
        ydk::YLeaf is_segment_routing; //type: boolean
        class SuccessfulRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite> successful_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite> pending_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite : public ydk::Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

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
        class TunnelRewrite_; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

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
        class P2pTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite
        class P2mpTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite> p2p_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite> p2mp_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite : public ydk::Entity
{
    public:
        P2pTunnelRewrite();
        ~P2pTunnelRewrite();

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
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2l; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l
        class BackupTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l> primary_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l : public ydk::Entity
{
    public:
        PrimaryS2l();
        ~PrimaryS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite : public ydk::Entity
{
    public:
        P2mpTunnelRewrite();
        ~P2mpTunnelRewrite();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite : public ydk::Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

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
        class TunnelRewrite_; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

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
        class P2pTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite
        class P2mpTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite> p2p_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite> p2mp_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite : public ydk::Entity
{
    public:
        P2pTunnelRewrite();
        ~P2pTunnelRewrite();

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
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2l; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l
        class BackupTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l> primary_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l : public ydk::Entity
{
    public:
        PrimaryS2l();
        ~PrimaryS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite : public ydk::Entity
{
    public:
        P2mpTunnelRewrite();
        ~P2mpTunnelRewrite();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite : public ydk::Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

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
        class TunnelRewrite_; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

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
        class P2pTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite
        class P2mpTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite> p2p_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite> p2mp_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite : public ydk::Entity
{
    public:
        P2pTunnelRewrite();
        ~P2pTunnelRewrite();

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
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2l; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l
        class BackupTunnelRewrite; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l> primary_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l : public ydk::Entity
{
    public:
        PrimaryS2l();
        ~PrimaryS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite : public ydk::Entity
{
    public:
        P2mpTunnelRewrite();
        ~P2mpTunnelRewrite();

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

}; // MplsTeStandby::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite


class MplsTeStandby::P2mp::CollaboratorTimers : public ydk::Entity
{
    public:
        CollaboratorTimers();
        ~CollaboratorTimers();

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

        class P2mpTimer; //type: MplsTeStandby::P2mp::CollaboratorTimers::P2mpTimer

        ydk::YList p2mp_timer;
        
}; // MplsTeStandby::P2mp::CollaboratorTimers


class MplsTeStandby::P2mp::CollaboratorTimers::P2mpTimer : public ydk::Entity
{
    public:
        P2mpTimer();
        ~P2mpTimer();

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

        ydk::YLeaf timer_type; //type: MplsTeP2mpTimer
        ydk::YLeaf timer_name; //type: string
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf expiry_time; //type: uint32
        ydk::YLeaf stop_time; //type: uint32
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf is_running; //type: boolean

}; // MplsTeStandby::P2mp::CollaboratorTimers::P2mpTimer


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites : public ydk::Entity
{
    public:
        ForwardingOutputLabelRewrites();
        ~ForwardingOutputLabelRewrites();

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

        class ForwardingOutputLabelRewrite; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite

        ydk::YList forwarding_output_label_rewrite;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite : public ydk::Entity
{
    public:
        ForwardingOutputLabelRewrite();
        ~ForwardingOutputLabelRewrite();

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

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        ydk::YLeaf is_segment_routing; //type: boolean
        class S2lOutputRewrite; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite
        class S2l; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l
        class S2lsrPath; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite> s2l_output_rewrite;
        ydk::YList s2l;
        ydk::YList s2lsr_path;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite : public ydk::Entity
{
    public:
        S2lOutputRewrite();
        ~S2lOutputRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subfamily; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily
        class SuccessfulRewrite; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily> subfamily;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite> successful_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite> pending_rewrite;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily : public ydk::Entity
{
    public:
        Subfamily();
        ~Subfamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf next_next_hop_address; //type: string
        class LspFec; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec> lsp_fec;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

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
        class FecDestinationInfo; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite : public ydk::Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

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
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2lOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2l; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l
        class BackupTunnelRewrite; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l> primary_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l : public ydk::Entity
{
    public:
        PrimaryS2l();
        ~PrimaryS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite : public ydk::Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

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
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2lOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2l; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l
        class BackupTunnelRewrite; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l> primary_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l : public ydk::Entity
{
    public:
        PrimaryS2l();
        ~PrimaryS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite : public ydk::Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

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
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2lOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2l; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l
        class BackupTunnelRewrite; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l> primary_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l : public ydk::Entity
{
    public:
        PrimaryS2l();
        ~PrimaryS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack

        ydk::YList sr_label_stack;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l : public ydk::Entity
{
    public:
        S2l();
        ~S2l();

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
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf sub_group_original_id; //type: string

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath : public ydk::Entity
{
    public:
        S2lsrPath();
        ~S2lsrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_primary; //type: boolean
        ydk::YLeaf is_backup; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf backup_path_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        class OutgoingLabelsStack; //type: MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack

        ydk::YList outgoing_labels_stack;
        
}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath


class MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack : public ydk::Entity
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

}; // MplsTeStandby::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack


class MplsTeStandby::LspOutOfResources : public ydk::Entity
{
    public:
        LspOutOfResources();
        ~LspOutOfResources();

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

        class Summary; //type: MplsTeStandby::LspOutOfResources::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources::Summary> summary;
        
}; // MplsTeStandby::LspOutOfResources


class MplsTeStandby::LspOutOfResources::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf transit_lsp_total_count; //type: uint32
        ydk::YLeaf transit_lsp_unprotected_count; //type: uint32
        ydk::YLeaf lsp_oor_state; //type: LspOorState
        ydk::YLeaf lsp_oor_timestamp; //type: uint32
        ydk::YLeaf lsp_oor_green_recovery_time; //type: uint32
        class LspOorStateXr; //type: MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr

        ydk::YList lsp_oor_state_xr;
        
}; // MplsTeStandby::LspOutOfResources::Summary


class MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr : public ydk::Entity
{
    public:
        LspOorStateXr();
        ~LspOorStateXr();

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

        ydk::YLeaf lsp_oor_state; //type: LspOorState
        ydk::YLeaf threshold_transit_all; //type: uint32
        ydk::YLeaf threshold_transit_unprotected; //type: uint32
        ydk::YLeaf te_metric_penalty; //type: uint32
        ydk::YLeaf available_bw_percentage; //type: uint32
        ydk::YLeaf transition_duration; //type: uint32
        ydk::YLeaf minimum_lsp_bandwidth; //type: uint32
        ydk::YLeaf accept_reopt; //type: boolean
        class Statistics; //type: MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics> statistics;
        
}; // MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr


class MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics : public ydk::Entity
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

        ydk::YLeaf transitions; //type: uint32
        ydk::YLeaf rejected_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_reopt_ls_ps_number; //type: uint32
        ydk::YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics


class MplsTeStandby::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

        class HeadInfos; //type: MplsTeStandby::Bfd::HeadInfos
        class Links; //type: MplsTeStandby::Bfd::Links
        class TailInfos; //type: MplsTeStandby::Bfd::TailInfos
        class Summary; //type: MplsTeStandby::Bfd::Summary
        class Counters; //type: MplsTeStandby::Bfd::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos> head_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Links> links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::TailInfos> tail_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Counters> counters;
        
}; // MplsTeStandby::Bfd


class MplsTeStandby::Bfd::HeadInfos : public ydk::Entity
{
    public:
        HeadInfos();
        ~HeadInfos();

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

        class HeadInfo; //type: MplsTeStandby::Bfd::HeadInfos::HeadInfo

        ydk::YList head_info;
        
}; // MplsTeStandby::Bfd::HeadInfos


class MplsTeStandby::Bfd::HeadInfos::HeadInfo : public ydk::Entity
{
    public:
        HeadInfo();
        ~HeadInfo();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf lspbfd_type; //type: TeVifBfd
        class CurrentLspbfdInfo; //type: MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo
        class StandbyLspbfdInfo; //type: MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo
        class ReoptimizedLspbfdInfo; //type: MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo> current_lspbfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo> standby_lspbfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo> reoptimized_lspbfd_info;
        
}; // MplsTeStandby::Bfd::HeadInfos::HeadInfo


class MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo : public ydk::Entity
{
    public:
        CurrentLspbfdInfo();
        ~CurrentLspbfdInfo();

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
        ydk::YLeaf bfd_session_state; //type: TeBfdLspSessionState

}; // MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo


class MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo : public ydk::Entity
{
    public:
        StandbyLspbfdInfo();
        ~StandbyLspbfdInfo();

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
        ydk::YLeaf bfd_session_state; //type: TeBfdLspSessionState

}; // MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo


class MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo : public ydk::Entity
{
    public:
        ReoptimizedLspbfdInfo();
        ~ReoptimizedLspbfdInfo();

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
        ydk::YLeaf bfd_session_state; //type: TeBfdLspSessionState

}; // MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo


class MplsTeStandby::Bfd::Links : public ydk::Entity
{
    public:
        Links();
        ~Links();

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

        class Link; //type: MplsTeStandby::Bfd::Links::Link

        ydk::YList link;
        
}; // MplsTeStandby::Bfd::Links


class MplsTeStandby::Bfd::Links::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

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
        class Neighbor; //type: MplsTeStandby::Bfd::Links::Link::Neighbor

        ydk::YList neighbor;
        
}; // MplsTeStandby::Bfd::Links::Link


class MplsTeStandby::Bfd::Links::Link::Neighbor : public ydk::Entity
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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf is_bfd_up; //type: boolean

}; // MplsTeStandby::Bfd::Links::Link::Neighbor


class MplsTeStandby::Bfd::TailInfos : public ydk::Entity
{
    public:
        TailInfos();
        ~TailInfos();

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

        class TailInfo; //type: MplsTeStandby::Bfd::TailInfos::TailInfo

        ydk::YList tail_info;
        
}; // MplsTeStandby::Bfd::TailInfos


class MplsTeStandby::Bfd::TailInfos::TailInfo : public ydk::Entity
{
    public:
        TailInfo();
        ~TailInfo();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf bfd_session_state; //type: TeBfdLspSessionState
        class LspFec; //type: MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec> lsp_fec;
        
}; // MplsTeStandby::Bfd::TailInfos::TailInfo


class MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

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

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_69_ */

