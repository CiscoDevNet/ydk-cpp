#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_24_
#define _CISCO_IOS_XR_MPLS_TE_OPER_24_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_12.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_23.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Xro; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mutual_diversity_flag; //type: boolean

        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeXroSubobjEnum

        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_router_id; //type: string
        YLeaf interface_id; //type: uint32
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_number; //type: uint16



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_id; //type: uint32
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ignore_lsp_id; //type: boolean
        YLeaf processing_node_exception; //type: boolean
        YLeaf penultimate_node_exception; //type: boolean
        YLeaf destination_node_exception; //type: boolean
        YLeaf exclusion_type; //type: TeXroExclusionEnum

        class Fec; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string

        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf snc_mode; //type: TeApsSncModeEnum
        YLeaf tcm_id; //type: uint32
        YLeaf protection_type; //type: TeProtectEnum
        YLeaf protection_mode; //type: TePnrRevertOptionsEnum
        YLeaf wait_to_restore_time; //type: uint32
        YLeaf hold_off_time; //type: uint32
        YLeaf path_prot_profile_type; //type: TePathProtProfileEnum
        YLeaf restoration_style; //type: TeRestorationStyleEnum

        class RevertSchedule; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf schedulename; //type: string
        YLeaf schedule_date; //type: uint32
        YLeaf schedule_frequency; //type: TeSchFreqEnum
        YLeaf duration; //type: uint32
        YLeaf max_tries; //type: uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe : public Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_affinity_configured; //type: boolean
        YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelectionEnum
        YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_selection_invalidation_action; //type: TePathInvalActionEnum
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf path_selection_metric; //type: MplsTeMetricEnum
        YLeaf is_path_selection_metric_configured; //type: boolean
        YLeaf path_selection_segment_routing_margin; //type: uint32
        YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        YLeaf is_path_select_configured; //type: boolean
        YLeaf is_prepend_list_configured; //type: boolean
        YLeaf is_pce_configured; //type: boolean
        YLeaf is_pce_disj_source_configured; //type: boolean
        YLeaf is_pce_disj_type_configured; //type: boolean
        YLeaf is_pce_disj_group_id_configured; //type: boolean
        YLeaf pcedp_source_address; //type: uint32
        YLeaf pcedp_type; //type: TePceDisjointEnum
        YLeaf pcedp_group_id; //type: uint32
        YLeaf is_pceb_dj_source_configured; //type: boolean
        YLeaf is_pcebd_group_id_configured; //type: boolean
        YLeaf pcebd_source_address; //type: uint32
        YLeaf pcebd_group_id; //type: uint32
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrependEntry; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeAttributeSetSrPrependEnum
        YLeaf index_; //type: uint32
        YLeaf next_label; //type: uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError : public Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error_message; //type: string
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError : public Entity
{
    public:
        RemergeError();
        ~RemergeError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error_message; //type: string
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError : public Entity
{
    public:
        SignallingError();
        ~SignallingError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error_node; //type: uint32
        YLeaf error; //type: uint8
        YLeaf sub_code; //type: uint16
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32
        YLeaf signalling_lsp_id; //type: uint16
        YLeaf error_message; //type: string
        YLeaf reverse_lsp; //type: boolean



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError


class MplsTe::TopologyNodes : public Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyNode; //type: MplsTe::TopologyNodes::TopologyNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode> > topology_node;


}; // MplsTe::TopologyNodes


class MplsTe::TopologyNodes::TopologyNode : public Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf igp_id; //type: string
        YLeaf area; //type: int32
        YLeaf topology_node_type; //type: MplsTeNodeEnum
        YLeaf igp_node_id; //type: string
        YLeaf topology_node_te_router_id; //type: string
        YLeaf topology_node_overloaded; //type: boolean

        class TopologyNodeSidAndSrbg; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg
        class TopologyNodeLink; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink> > topology_node_link;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg> topology_node_sid_and_srbg;


}; // MplsTe::TopologyNodes::TopologyNode


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg : public Entity
{
    public:
        TopologyNodeSidAndSrbg();
        ~TopologyNodeSidAndSrbg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_id; //type: uint32
        YLeaf segment_id_local_absolute_value; //type: uint32
        YLeaf srgb_start; //type: uint32
        YLeaf srgb_size; //type: uint32



}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink : public Entity
{
    public:
        TopologyNodeLink();
        ~TopologyNodeLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology_link_type; //type: IgpSubnetEnum
        YLeaf topology_link_interface_address; //type: string
        YLeaf topology_link_interface_id; //type: uint32
        YLeaf topology_link_neighbor_address; //type: string
        YLeaf topology_link_neighbor_id; //type: uint32
        YLeaf topology_link_neighbor_system_id; //type: string
        YLeaf topology_link_neighbor_node_id; //type: uint32
        YLeaf topology_link_neighbor_generation; //type: uint32
        YLeaf topology_link_fragment_id; //type: uint32
        YLeaf topology_link_te_metric; //type: uint32
        YLeaf topology_link_igp_metric; //type: uint32
        YLeaf topology_link_uni_delay; //type: uint32
        YLeaf topology_link_affinity_bits; //type: uint32
        YLeaf topology_link_switching_capability; //type: uint8
        YLeaf topology_link_encoding; //type: uint8
        YLeaf topology_link_bandwidth_model; //type: IgpteLibBwModelEnum
        YLeafList topology_link_extended_affinity_bit; //type: list of  uint32

        class TopologyLinkBandwidth; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth
        class OduLinkCapabilities; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities
        class SharedRiskLinkGroup; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup
        class AdjacencySid; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid> > adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth> topology_link_bandwidth;


}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth : public Entity
{
    public:
        TopologyLinkBandwidth();
        ~TopologyLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_migration_mode; //type: RrrDsteMigrationModeEnum

        class TopologyLinkBandwidthPrestandard; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard
        class TopologyLinkBandwidthStandard; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard> topology_link_bandwidth_prestandard;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard> topology_link_bandwidth_standard;


}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard : public Entity
{
    public:
        TopologyLinkBandwidthPrestandard();
        ~TopologyLinkBandwidthPrestandard();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology_link_prestandard_bandwidth_physical; //type: uint32
        YLeaf topology_link_prestandard_bandwidth_reservation_global; //type: uint32
        YLeaf topology_link_prestandard_bandwidth_reservation_subpool; //type: uint32

        class TopologyLinkPrestandardBandwidthDetail; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail> topology_link_prestandard_bandwidth_detail;


}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail : public Entity
{
    public:
        TopologyLinkPrestandardBandwidthDetail();
        ~TopologyLinkPrestandardBandwidthDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList topology_link_prestandard_bandwidth_allocated; //type: list of  uint32
        YLeafList topology_link_prestandard_bandwidth_available_global; //type: list of  uint32
        YLeafList topology_link_prestandard_bandwidth_available_subpool; //type: list of  uint32



}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard : public Entity
{
    public:
        TopologyLinkBandwidthStandard();
        ~TopologyLinkBandwidthStandard();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topo_link_std_bw_physical; //type: uint32
        YLeaf topo_link_std_bw_res_max; //type: uint32
        YLeaf topo_link_std_bw_res_pool0; //type: uint32
        YLeaf topo_link_std_bw_res_pool1; //type: uint32

        class TopoLinkStdBwDetail; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail> topo_link_std_bw_detail;


}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail : public Entity
{
    public:
        TopoLinkStdBwDetail();
        ~TopoLinkStdBwDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList topo_link_std_bw_allocated; //type: list of  uint32
        YLeafList topo_link_std_bw_available; //type: list of  uint32



}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities : public Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList max_lsp_bandwidth; //type: list of  uint32

        class OduCapability; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability> > odu_capability;


}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability : public Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signal_type; //type: TeOduLevelEnum
        YLeaf stage1; //type: TeOduLevelEnum
        YLeaf stage2; //type: TeOduLevelEnum
        YLeaf stage3; //type: TeOduLevelEnum
        YLeaf stage4; //type: TeOduLevelEnum
        YLeaf terminable; //type: boolean
        YLeaf switchable; //type: boolean
        YLeaf tsg1p25; //type: boolean
        YLeaf tsg2p5; //type: boolean
        YLeaf vcat_capable; //type: boolean
        YLeaf lcas_capable; //type: boolean

        class BandwidthInfo; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;


}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeOduCapabilityEnum

        class Fixed; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;


}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_od_us; //type: uint8
        YLeaf unreserved_od_us; //type: uint8



}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_bandwidth; //type: uint32
        YLeaf unreserved_bandwidth; //type: uint32
        YLeaf max_lsp_bandwidth; //type: uint32



}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adjacency_sid; //type: uint32
        YLeaf link_type; //type: IgpSubnetEnum
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string
        YLeaf nbr_node_igpid; //type: string
        YLeaf nbr_node_te_router_id; //type: string
        YLeaf flag_f; //type: boolean
        YLeaf flag_b; //type: boolean
        YLeaf flag_v; //type: boolean
        YLeaf flag_l; //type: boolean
        YLeaf flag_s; //type: boolean



}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid


class MplsTe::AnnounceTunnelsInfo : public Entity
{
    public:
        AnnounceTunnelsInfo();
        ~AnnounceTunnelsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AutorouteAnnounceTable; //type: MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable
        class AllAutorouteTable; //type: MplsTe::AnnounceTunnelsInfo::AllAutorouteTable

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo::AllAutorouteTable> all_autoroute_table;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable> autoroute_announce_table;


}; // MplsTe::AnnounceTunnelsInfo


class MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable : public Entity
{
    public:
        AutorouteAnnounceTable();
        ~AutorouteAnnounceTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AnnounceDest; //type: MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest> > announce_dest;


}; // MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable


class MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest : public Entity
{
    public:
        AnnounceDest();
        ~AnnounceDest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf area; //type: int32
        YLeaf igp_id; //type: string
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf destination; //type: string
        YLeaf announced_tunnels_count; //type: uint16
        YLeaf autorouted_tunnels_count; //type: uint16
        YLeaf forwarding_adjacency_tunnels_count; //type: uint16
        YLeaf area_format; //type: IgpOspfAreaFormatEnum

        class TotalTunnel; //type: MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel> > total_tunnel;


}; // MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest


class MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel : public Entity
{
    public:
        TotalTunnel();
        ~TotalTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf tunnel_loadshare; //type: uint32
        YLeaf announce_type; //type: MplsTeTunnelAnnounceEnum
        YLeaf next_hop_address; //type: string
        YLeaf mode; //type: IgpteAaMetricModeEnum
        YLeaf igp_metric; //type: int32
        YLeaf hold_time; //type: uint32
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        YLeaf is_auto_mesh_aa; //type: boolean
        YLeaf is_sr; //type: boolean
        YLeaf is_sr_strict; //type: boolean
        YLeaf mesh_group_idaa; //type: uint32
        YLeaf is_exclude_segment_routing; //type: boolean

        class IgPs; //type: MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs> > ig_ps;


}; // MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel


class MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs : public Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_area_id; //type: string
        YLeaf afi; //type: MplsTeAfiEnum



}; // MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs


class MplsTe::AnnounceTunnelsInfo::AllAutorouteTable : public Entity
{
    public:
        AllAutorouteTable();
        ~AllAutorouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AnnounceDest; //type: MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest> > announce_dest;


}; // MplsTe::AnnounceTunnelsInfo::AllAutorouteTable


class MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest : public Entity
{
    public:
        AnnounceDest();
        ~AnnounceDest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf area; //type: int32
        YLeaf igp_id; //type: string
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf destination; //type: string
        YLeaf announced_tunnels_count; //type: uint16
        YLeaf autorouted_tunnels_count; //type: uint16
        YLeaf forwarding_adjacency_tunnels_count; //type: uint16
        YLeaf area_format; //type: IgpOspfAreaFormatEnum

        class TotalTunnel; //type: MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel> > total_tunnel;


}; // MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest


class MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel : public Entity
{
    public:
        TotalTunnel();
        ~TotalTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf tunnel_loadshare; //type: uint32
        YLeaf announce_type; //type: MplsTeTunnelAnnounceEnum
        YLeaf next_hop_address; //type: string
        YLeaf mode; //type: IgpteAaMetricModeEnum
        YLeaf igp_metric; //type: int32
        YLeaf hold_time; //type: uint32
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        YLeaf is_auto_mesh_aa; //type: boolean
        YLeaf is_sr; //type: boolean
        YLeaf is_sr_strict; //type: boolean
        YLeaf mesh_group_idaa; //type: uint32
        YLeaf is_exclude_segment_routing; //type: boolean

        class IgPs; //type: MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs> > ig_ps;


}; // MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel


class MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs : public Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_area_id; //type: string
        YLeaf afi; //type: MplsTeAfiEnum



}; // MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs


class MplsTe::CollaboratorTimers : public Entity
{
    public:
        CollaboratorTimers();
        ~CollaboratorTimers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class P2MpTimer; //type: MplsTe::CollaboratorTimers::P2MpTimer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::CollaboratorTimers::P2MpTimer> > p2mp_timer;


}; // MplsTe::CollaboratorTimers


class MplsTe::CollaboratorTimers::P2MpTimer : public Entity
{
    public:
        P2MpTimer();
        ~P2MpTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_type; //type: MplsTeP2MpTimerEnum
        YLeaf timer_name; //type: string
        YLeaf start_time; //type: uint32
        YLeaf expiry_time; //type: uint32
        YLeaf stop_time; //type: uint32
        YLeaf duration; //type: uint32
        YLeaf is_running; //type: boolean



}; // MplsTe::CollaboratorTimers::P2MpTimer


class MplsTe::AutoTunnel : public Entity
{
    public:
        AutoTunnel();
        ~AutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pcc; //type: MplsTe::AutoTunnel::Pcc
        class Mesh; //type: MplsTe::AutoTunnel::Mesh
        class Backup; //type: MplsTe::AutoTunnel::Backup

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup> backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh> mesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Pcc> pcc;


}; // MplsTe::AutoTunnel


class MplsTe::AutoTunnel::Pcc : public Entity
{
    public:
        Pcc();
        ~Pcc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: MplsTe::AutoTunnel::Pcc::Summary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Pcc::Summary> summary;


}; // MplsTe::AutoTunnel::Pcc


class MplsTe::AutoTunnel::Pcc::Summary : public Entity
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


        YLeaf pcc_auto_tunnel; //type: uint32
        YLeaf up_pcc_auto_tunnels; //type: uint32
        YLeaf down_pcc_auto_tunnels; //type: uint32



}; // MplsTe::AutoTunnel::Pcc::Summary


class MplsTe::AutoTunnel::Mesh : public Entity
{
    public:
        Mesh();
        ~Mesh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MeshGroups; //type: MplsTe::AutoTunnel::Mesh::MeshGroups
        class Statistics; //type: MplsTe::AutoTunnel::Mesh::Statistics
        class Summary; //type: MplsTe::AutoTunnel::Mesh::Summary
        class Config; //type: MplsTe::AutoTunnel::Mesh::Config
        class OneHop; //type: MplsTe::AutoTunnel::Mesh::OneHop

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::Config> config;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::MeshGroups> mesh_groups;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::OneHop> one_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::Summary> summary;


}; // MplsTe::AutoTunnel::Mesh


class MplsTe::AutoTunnel::Mesh::MeshGroups : public Entity
{
    public:
        MeshGroups();
        ~MeshGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MeshGroup; //type: MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup> > mesh_group;


}; // MplsTe::AutoTunnel::Mesh::MeshGroups


class MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup : public Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mesh_group_id; //type: uint32
        YLeaf mesh_group_id_xr; //type: uint32
        YLeaf is_meshgroup_disabled; //type: boolean
        YLeaf attribute_set_name; //type: string
        YLeaf is_attribute_set_configured; //type: boolean
        YLeaf is_attribute_set_in_db; //type: boolean
        YLeaf destination_list_name; //type: string
        YLeaf is_destination_list_configured; //type: boolean
        YLeaf destination_list_type; //type: TeAclEnum
        YLeaf remaining_time; //type: uint32
        YLeaf auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_total_destinations; //type: uint32
        YLeaf up_auto_mesh_tunnels; //type: uint32
        YLeaf down_auto_mesh_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_group_type; //type: TeMeshgroupEnum

        class Destination; //type: MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination> > destination;


}; // MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup


class MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf operational_status; //type: MplsTeTunnelStateEnum
        YLeaf remaining_time; //type: uint32



}; // MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination


class MplsTe::AutoTunnel::Mesh::Statistics : public Entity
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


        YLeaf created; //type: uint32
        YLeaf connected; //type: uint32
        YLeaf removed_unused; //type: uint32
        YLeaf removed_in_use; //type: uint32
        YLeaf removed_range_exceeded; //type: uint32
        YLeaf last_cleared_time; //type: uint32



}; // MplsTe::AutoTunnel::Mesh::Statistics


class MplsTe::AutoTunnel::Mesh::Summary : public Entity
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


        YLeaf auto_mesh_tunnels; //type: uint32
        YLeaf up_auto_mesh_tunnels; //type: uint32
        YLeaf down_auto_mesh_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_groups; //type: uint32
        YLeaf auto_mesh_destinations; //type: uint32



}; // MplsTe::AutoTunnel::Mesh::Summary


class MplsTe::AutoTunnel::Mesh::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_configured; //type: boolean
        YLeaf unused_removal_timeout_configured; //type: uint32
        YLeaf min_tunnel_id; //type: uint16
        YLeaf max_tunnel_id; //type: uint16



}; // MplsTe::AutoTunnel::Mesh::Config


class MplsTe::AutoTunnel::Mesh::OneHop : public Entity
{
    public:
        OneHop();
        ~OneHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: MplsTe::AutoTunnel::Mesh::OneHop::Interfaces
        class Statistics; //type: MplsTe::AutoTunnel::Mesh::OneHop::Statistics
        class Summary; //type: MplsTe::AutoTunnel::Mesh::OneHop::Summary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::OneHop::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::OneHop::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::OneHop::Summary> summary;


}; // MplsTe::AutoTunnel::Mesh::OneHop


class MplsTe::AutoTunnel::Mesh::OneHop::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface> > interface;


}; // MplsTe::AutoTunnel::Mesh::OneHop::Interfaces


class MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string

        class Tunnel; //type: MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel> > tunnel;


}; // MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface


class MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: uint16
        YLeaf destination_address; //type: string
        YLeaf tunnel_lspid; //type: uint16
        YLeaf mesh_group_id; //type: uint32
        YLeaf tunnel_state; //type: MplsTeTunnelStateEnum



}; // MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel


class MplsTe::AutoTunnel::Mesh::OneHop::Statistics : public Entity
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


        YLeaf created; //type: uint32
        YLeaf connected; //type: uint32
        YLeaf removed_unused; //type: uint32
        YLeaf removed_in_use; //type: uint32
        YLeaf removed_range_exceeded; //type: uint32
        YLeaf last_cleared_time; //type: uint32



}; // MplsTe::AutoTunnel::Mesh::OneHop::Statistics


class MplsTe::AutoTunnel::Mesh::OneHop::Summary : public Entity
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


        YLeaf auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf up_auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf down_auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_one_hop_groups; //type: uint32
        YLeaf auto_mesh_one_hop_destinations; //type: uint32



}; // MplsTe::AutoTunnel::Mesh::OneHop::Summary


class MplsTe::AutoTunnel::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnels; //type: MplsTe::AutoTunnel::Backup::Tunnels
        class Statistics; //type: MplsTe::AutoTunnel::Backup::Statistics
        class Summary; //type: MplsTe::AutoTunnel::Backup::Summary
        class Config; //type: MplsTe::AutoTunnel::Backup::Config

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Config> config;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Tunnels> tunnels;


}; // MplsTe::AutoTunnel::Backup


class MplsTe::AutoTunnel::Backup::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnel; //type: MplsTe::AutoTunnel::Backup::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Tunnels::Tunnel> > tunnel;


}; // MplsTe::AutoTunnel::Backup::Tunnels


class MplsTe::AutoTunnel::Backup::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_tunnel_name; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf operational_status; //type: MplsTeTunnelStateEnum
        YLeaf srlg_mode; //type: AutoBackupSrlgModeEnum
        YLeaf atb_protection_type; //type: AutoBackupProtectionEnum
        YLeaf protected_flows; //type: uint32
        YLeaf protected_interface_name; //type: string
        YLeaf protected_router_id; //type: string



}; // MplsTe::AutoTunnel::Backup::Tunnels::Tunnel


class MplsTe::AutoTunnel::Backup::Statistics : public Entity
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


        YLeaf last_cleared_time; //type: uint32

        class Created; //type: MplsTe::AutoTunnel::Backup::Statistics::Created
        class Connected; //type: MplsTe::AutoTunnel::Backup::Statistics::Connected
        class RemovedDown; //type: MplsTe::AutoTunnel::Backup::Statistics::RemovedDown
        class RemovedUnused; //type: MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused
        class RemovedInUse; //type: MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse
        class RemovedRangeExceeded; //type: MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Statistics::Connected> connected;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Statistics::Created> created;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Statistics::RemovedDown> removed_down;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse> removed_in_use;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded> removed_range_exceeded;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused> removed_unused;


}; // MplsTe::AutoTunnel::Backup::Statistics


class MplsTe::AutoTunnel::Backup::Statistics::Created : public Entity
{
    public:
        Created();
        ~Created();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32



}; // MplsTe::AutoTunnel::Backup::Statistics::Created


class MplsTe::AutoTunnel::Backup::Statistics::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32



}; // MplsTe::AutoTunnel::Backup::Statistics::Connected


class MplsTe::AutoTunnel::Backup::Statistics::RemovedDown : public Entity
{
    public:
        RemovedDown();
        ~RemovedDown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32



}; // MplsTe::AutoTunnel::Backup::Statistics::RemovedDown


class MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused : public Entity
{
    public:
        RemovedUnused();
        ~RemovedUnused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32



}; // MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused


class MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse : public Entity
{
    public:
        RemovedInUse();
        ~RemovedInUse();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32



}; // MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse


class MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded : public Entity
{
    public:
        RemovedRangeExceeded();
        ~RemovedRangeExceeded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32



}; // MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded


class MplsTe::AutoTunnel::Backup::Summary : public Entity
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


        YLeaf autobackups; //type: uint32
        YLeaf up_autobackups; //type: uint32
        YLeaf down_autobackups; //type: uint32
        YLeaf unused_autobackups; //type: uint32
        YLeaf next_hop_autobackups; //type: uint32
        YLeaf next_next_hop_autobackups; //type: uint32
        YLeaf srlg_strict_autobackups; //type: uint32
        YLeaf srlg_preferred_autobackups; //type: uint32
        YLeaf srlg_weighted_autobackups; //type: uint32
        YLeaf next_hop_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_next_hop_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_hop_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_next_hop_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_hop_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_next_hop_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_s2_ls; //type: uint32



}; // MplsTe::AutoTunnel::Backup::Summary


class MplsTe::AutoTunnel::Backup::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_configured; //type: boolean
        YLeaf interface_count; //type: uint32
        YLeaf unused_removal_timeout_configured; //type: uint32
        YLeaf min_tunnel_id; //type: uint16
        YLeaf max_tunnel_id; //type: uint16



}; // MplsTe::AutoTunnel::Backup::Config


class MplsTe::SoftPreemption : public Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Statistics; //type: MplsTe::SoftPreemption::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SoftPreemption::Statistics> statistics;


}; // MplsTe::SoftPreemption


class MplsTe::SoftPreemption::Statistics : public Entity
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


        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf soft_preemption_events; //type: uint32
        YLeaf soft_preempted_ls_ps; //type: uint32
        YLeaf timed_out_soft_preempted_lsp_ss; //type: uint32
        YLeaf torn_down_soft_preempted_ls_ps; //type: uint32
        YLeaf frr_triggered_soft_preempted_lsp_ss; //type: uint32
        YLeaf minimum_time_in_soft_preempted_state; //type: uint16
        YLeaf time_in_soft_preempted_state_max; //type: uint16
        YLeaf time_in_soft_preempted_state_avg; //type: uint16
        YLeaf soft_preempted_head_ls_ps; //type: uint32
        YLeaf reoptimized_soft_preempted_ls_ps; //type: uint32
        YLeaf torndown_soft_preempted_ls_ps; //type: uint32
        YLeaf path_protected_switchover_soft_preempted_ls_ps; //type: uint32



}; // MplsTe::SoftPreemption::Statistics


class MplsTe::ForwardingAdjacencyDestinations : public Entity
{
    public:
        ForwardingAdjacencyDestinations();
        ~ForwardingAdjacencyDestinations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ForwardingAdjacencyDestination; //type: MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination> > forwarding_adjacency_destination;


}; // MplsTe::ForwardingAdjacencyDestinations


class MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination : public Entity
{
    public:
        ForwardingAdjacencyDestination();
        ~ForwardingAdjacencyDestination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf adjacencies; //type: uint32
        YLeaf ipv6_adjacencies; //type: uint32
        YLeaf destination_address_xr; //type: string

        class ForwardAdjacency; //type: MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency> > forward_adjacency;


}; // MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination


class MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency : public Entity
{
    public:
        ForwardAdjacency();
        ~ForwardAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf traffic_share; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf is_adjacency_up; //type: boolean

        class IgPs; //type: MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs> > ig_ps;


}; // MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency


class MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs : public Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_area_id; //type: string
        YLeaf afi; //type: MplsTeAfiEnum



}; // MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs


class MplsTe::IgpAreas : public Entity
{
    public:
        IgpAreas();
        ~IgpAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IgpArea; //type: MplsTe::IgpAreas::IgpArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea> > igp_area;


}; // MplsTe::IgpAreas


class MplsTe::IgpAreas::IgpArea : public Entity
{
    public:
        IgpArea();
        ~IgpArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf process_tag; //type: string
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf instance_name; //type: string
        YLeaf igp_system_id; //type: string
        YLeaf configured_te_router_id; //type: string
        YLeaf global_router_id; //type: string
        YLeaf globall_router_id_optical; //type: string
        YLeaf in_use_te_router_id; //type: string
        YLeaf is_connection_up; //type: boolean
        YLeaf connection_up_count; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeafList secondary_router_id; //type: list of  string

        class Area; //type: MplsTe::IgpAreas::IgpArea::Area

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea::Area> > area;


}; // MplsTe::IgpAreas::IgpArea


class MplsTe::IgpAreas::IgpArea::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_index; //type: uint32
        YLeaf area_number; //type: uint32
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        YLeaf is_config_ready; //type: boolean

        class ActiveData; //type: MplsTe::IgpAreas::IgpArea::Area::ActiveData

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea::Area::ActiveData> active_data;


}; // MplsTe::IgpAreas::IgpArea::Area


class MplsTe::IgpAreas::IgpArea::Area::ActiveData : public Entity
{
    public:
        ActiveData();
        ~ActiveData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interfaces_count; //type: uint32
        YLeaf link_idt_received; //type: boolean
        YLeaf topology_idt_received; //type: boolean
        YLeaf sr_strict; //type: boolean
        YLeaf p2p_heads_count; //type: uint32
        YLeaf p2p_autoroute_announced_count; //type: uint32
        YLeaf p2p_forwarding_adjacency_count; //type: uint32
        YLeaf p2mp_destination_count; //type: uint32
        YLeaf tunnel_loose_hops; //type: uint32

        class AreaStatistics; //type: MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics> area_statistics;


}; // MplsTe::IgpAreas::IgpArea::Area::ActiveData


class MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics : public Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_adjacency_request_messages; //type: uint32
        YLeaf area_adjacency_announce_messages; //type: uint32
        YLeaf area_flood_messages; //type: uint32
        YLeaf area_lsa_announce_messages; //type: uint32
        YLeaf area_lsa_fragment_announce_messages; //type: uint32
        YLeaf area_lsa_delete_messages; //type: uint32
        YLeaf area_lsa_fragment_delete_messages; //type: uint32
        YLeaf area_tunnel_announce_messages; //type: uint32



}; // MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics


class MplsTe::WrapProtection : public Entity
{
    public:
        WrapProtection();
        ~WrapProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtectedLsps; //type: MplsTe::WrapProtection::ProtectedLsps

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::WrapProtection::ProtectedLsps> protected_lsps;


}; // MplsTe::WrapProtection


class MplsTe::WrapProtection::ProtectedLsps : public Entity
{
    public:
        ProtectedLsps();
        ~ProtectedLsps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtectedLsp; //type: MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp> > protected_lsp;


}; // MplsTe::WrapProtection::ProtectedLsps


class MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp : public Entity
{
    public:
        ProtectedLsp();
        ~ProtectedLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: int32
        YLeaf sub_group_id; //type: int32
        YLeaf sub_group_originator; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf session_type; //type: CtypeEnum
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf tunnel_id_xr; //type: uint16
        YLeaf extended_tunnel_id_xr; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_instance; //type: uint32
        YLeaf lsp_wrap_protection_enable; //type: boolean
        YLeaf lsp_wrap_protection_label; //type: uint32
        YLeaf reverse_egress_interface; //type: string
        YLeaf reverse_lsp_label; //type: uint32
        YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapStateEnum
        YLeaf sub_group_original_id; //type: string
        YLeaf sub_group_id_xr; //type: uint16
        YLeaf p2mp_id_xr; //type: uint32



}; // MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp


class MplsTe::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsTe::Topology::Global
        class DestinationPaths; //type: MplsTe::Topology::DestinationPaths
        class ConfiguredSrlgs; //type: MplsTe::Topology::ConfiguredSrlgs
        class Srlgs; //type: MplsTe::Topology::Srlgs
        class PathTunnels; //type: MplsTe::Topology::PathTunnels

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::ConfiguredSrlgs> configured_srlgs;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths> destination_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Global> global;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels> path_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs> srlgs;


}; // MplsTe::Topology


class MplsTe::Topology::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_down_interval; //type: uint32
        YLeaf link_add_remove_count; //type: uint32
        YLeaf local_model_id; //type: uint32

        class Areas; //type: MplsTe::Topology::Global::Areas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Global::Areas> > areas;


}; // MplsTe::Topology::Global


class MplsTe::Topology::Global::Areas : public Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: IgpProtocolEnum
        YLeaf node_id; //type: string
        YLeaf area_id; //type: string

        class LocalSidAndSrbg; //type: MplsTe::Topology::Global::Areas::LocalSidAndSrbg

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Global::Areas::LocalSidAndSrbg> local_sid_and_srbg;


}; // MplsTe::Topology::Global::Areas


class MplsTe::Topology::Global::Areas::LocalSidAndSrbg : public Entity
{
    public:
        LocalSidAndSrbg();
        ~LocalSidAndSrbg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_id; //type: uint32
        YLeaf segment_id_local_absolute_value; //type: uint32
        YLeaf srgb_start; //type: uint32
        YLeaf srgb_size; //type: uint32



}; // MplsTe::Topology::Global::Areas::LocalSidAndSrbg


class MplsTe::Topology::DestinationPaths : public Entity
{
    public:
        DestinationPaths();
        ~DestinationPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DestinationPath; //type: MplsTe::Topology::DestinationPaths::DestinationPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath> > destination_path;


}; // MplsTe::Topology::DestinationPaths


class MplsTe::Topology::DestinationPaths::DestinationPath : public Entity
{
    public:
        DestinationPath();
        ~DestinationPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf affinity_bits; //type: int32
        YLeaf affinity_mask; //type: int32
        YLeaf setup_priority; //type: int32
        YLeaf hold_priority; //type: int32
        YLeaf bandwidth; //type: int32
        YLeaf igp_type; //type: MplsTeIgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: int32
        YLeaf hop_limit; //type: int32
        YLeaf exclude_srlg_ip_address; //type: string
        YLeaf path_type; //type: MplsTePathEnum
        YLeaf path_id; //type: int32
        YLeaf path_name; //type: string
        YLeaf cost_limit; //type: int32
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf destination_address_xr; //type: string
        YLeaf is_partial_path; //type: boolean
        YLeaf is_full_path; //type: boolean
        YLeaf is_topology_checked; //type: boolean
        YLeaf is_segment_routing_db_checked; //type: boolean
        YLeaf requested_bandwidth; //type: uint64
        YLeaf bandwidth_type; //type: uint64
        YLeaf mininum_bandwidth; //type: uint64
        YLeaf accumulated_admin_weight; //type: uint64
        YLeaf setup_priority_xr; //type: uint32
        YLeaf hold_priority_xr; //type: uint32
        YLeaf node_hop_count; //type: uint8
        YLeaf exclude_srlg_address; //type: string
        YLeafList hop; //type: list of  string

        class Affinity; //type: MplsTe::Topology::DestinationPaths::DestinationPath::Affinity
        class SharedRiskLinkGroup; //type: MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup
        class SrSegment; //type: MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::Affinity> affinity;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment> > sr_segment;


}; // MplsTe::Topology::DestinationPaths::DestinationPath


class MplsTe::Topology::DestinationPaths::DestinationPath::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::Topology::DestinationPaths::DestinationPath::Affinity


class MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity


class MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup


class MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment : public Entity
{
    public:
        SrSegment();
        ~SrSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: TeSrSidEnum
        YLeaf has_ip_addresses; //type: boolean
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string
        YLeaf has_mpls_label; //type: boolean
        YLeaf mpls_label_value; //type: uint32
        YLeaf has_entropy_label; //type: boolean



}; // MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment


class MplsTe::Topology::ConfiguredSrlgs : public Entity
{
    public:
        ConfiguredSrlgs();
        ~ConfiguredSrlgs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConfiguredSrlg; //type: MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg> > configured_srlg;


}; // MplsTe::Topology::ConfiguredSrlgs


class MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg : public Entity
{
    public:
        ConfiguredSrlg();
        ~ConfiguredSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_number; //type: int32
        YLeaf srlg_number_xr; //type: uint32
        YLeaf srlg_name; //type: string
        YLeaf admin_weight; //type: uint32
        YLeaf is_admin_weight_configured; //type: boolean

        class SrlgLink; //type: MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink> > srlg_link;


}; // MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg


class MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink : public Entity
{
    public:
        SrlgLink();
        ~SrlgLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink


class MplsTe::Topology::Srlgs : public Entity
{
    public:
        Srlgs();
        ~Srlgs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Srlg; //type: MplsTe::Topology::Srlgs::Srlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg> > srlg;


}; // MplsTe::Topology::Srlgs


class MplsTe::Topology::Srlgs::Srlg : public Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_number; //type: int32
        YLeaf srlg_name; //type: string
        YLeaf admin_weight; //type: uint32

        class SrlgAreas; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas> > srlg_areas;


}; // MplsTe::Topology::Srlgs::Srlg


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas : public Entity
{
    public:
        SrlgAreas();
        ~SrlgAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf igp_area_format; //type: IgpOspfAreaFormatEnum

        class SrlgLink; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink> > srlg_link;


}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink : public Entity
{
    public:
        SrlgLink();
        ~SrlgLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_address; //type: string
        YLeaf te_router_id; //type: string

        class LinkAddressGeneric; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric> link_address_generic;


}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric : public Entity
{
    public:
        LinkAddressGeneric();
        ~LinkAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TeAddr; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr> te_addr;


}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr : public Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeAddrEnum
        YLeaf ipv4_address; //type: string

        class Ipv4UnnumberedAddress; //type: MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr


class MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf interface_index; //type: uint32



}; // MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTe::Topology::PathTunnels : public Entity
{
    public:
        PathTunnels();
        ~PathTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathTunnel; //type: MplsTe::Topology::PathTunnels::PathTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel> > path_tunnel;


}; // MplsTe::Topology::PathTunnels


class MplsTe::Topology::PathTunnels::PathTunnel : public Entity
{
    public:
        PathTunnel();
        ~PathTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf destination_address_xr; //type: string
        YLeaf is_partial_path; //type: boolean
        YLeaf is_full_path; //type: boolean
        YLeaf is_topology_checked; //type: boolean
        YLeaf is_segment_routing_db_checked; //type: boolean
        YLeaf requested_bandwidth; //type: uint64
        YLeaf bandwidth_type; //type: uint64
        YLeaf mininum_bandwidth; //type: uint64
        YLeaf accumulated_admin_weight; //type: uint64
        YLeaf setup_priority_xr; //type: uint32
        YLeaf hold_priority_xr; //type: uint32
        YLeaf node_hop_count; //type: uint8
        YLeaf exclude_srlg_address; //type: string
        YLeafList hop; //type: list of  string

        class Affinity; //type: MplsTe::Topology::PathTunnels::PathTunnel::Affinity
        class SharedRiskLinkGroup; //type: MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup
        class SrSegment; //type: MplsTe::Topology::PathTunnels::PathTunnel::SrSegment

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::Affinity> affinity;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::SrSegment> > sr_segment;


}; // MplsTe::Topology::PathTunnels::PathTunnel


class MplsTe::Topology::PathTunnels::PathTunnel::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::Topology::PathTunnels::PathTunnel::Affinity


class MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity


class MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup


class MplsTe::Topology::PathTunnels::PathTunnel::SrSegment : public Entity
{
    public:
        SrSegment();
        ~SrSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: TeSrSidEnum
        YLeaf has_ip_addresses; //type: boolean
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string
        YLeaf has_mpls_label; //type: boolean
        YLeaf mpls_label_value; //type: uint32
        YLeaf has_entropy_label; //type: boolean



}; // MplsTe::Topology::PathTunnels::PathTunnel::SrSegment


class MplsTe::SignallingCounters : public Entity
{
    public:
        SignallingCounters();
        ~SignallingCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Issu; //type: MplsTe::SignallingCounters::Issu
        class HeadsCounters; //type: MplsTe::SignallingCounters::HeadsCounters
        class MidsCounters; //type: MplsTe::SignallingCounters::MidsCounters
        class HeadSignallingCounters; //type: MplsTe::SignallingCounters::HeadSignallingCounters
        class RemoteSignallingCounters; //type: MplsTe::SignallingCounters::RemoteSignallingCounters
        class TailsCounters; //type: MplsTe::SignallingCounters::TailsCounters
        class Signallings; //type: MplsTe::SignallingCounters::Signallings
        class SignallingSummary; //type: MplsTe::SignallingCounters::SignallingSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters> head_signalling_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadsCounters> heads_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::MidsCounters> mids_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters> remote_signalling_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::SignallingSummary> signalling_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings> signallings;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::TailsCounters> tails_counters;


}; // MplsTe::SignallingCounters


class MplsTe::SignallingCounters::Issu : public Entity
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


        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf role; //type: TeProcRoleEnum
        YLeaf last_idt_states; //type: uint32
        YLeaf total_states; //type: uint32
        YLeaf total_deletions; //type: uint32
        YLeaf total_nac_ks; //type: uint64
        YLeaf total_id_ts; //type: uint32



}; // MplsTe::SignallingCounters::Issu


class MplsTe::SignallingCounters::HeadsCounters : public Entity
{
    public:
        HeadsCounters();
        ~HeadsCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HeadsCounter; //type: MplsTe::SignallingCounters::HeadsCounters::HeadsCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadsCounters::HeadsCounter> > heads_counter;


}; // MplsTe::SignallingCounters::HeadsCounters


class MplsTe::SignallingCounters::HeadsCounters::HeadsCounter : public Entity
{
    public:
        HeadsCounter();
        ~HeadsCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf lsp_id; //type: uint16

        class Statistics; //type: MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics
        class DestinationStatistic; //type: MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic> > destination_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics> statistics;


}; // MplsTe::SignallingCounters::HeadsCounters::HeadsCounter


class MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics


class MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic : public Entity
{
    public:
        DestinationStatistic();
        ~DestinationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic


class MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics


class MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic


class MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics


class MplsTe::SignallingCounters::MidsCounters : public Entity
{
    public:
        MidsCounters();
        ~MidsCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MidsCounter; //type: MplsTe::SignallingCounters::MidsCounters::MidsCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::MidsCounters::MidsCounter> > mids_counter;


}; // MplsTe::SignallingCounters::MidsCounters


class MplsTe::SignallingCounters::MidsCounters::MidsCounter : public Entity
{
    public:
        MidsCounter();
        ~MidsCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: int32
        YLeaf tunnel_name; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics> statistics;


}; // MplsTe::SignallingCounters::MidsCounters::MidsCounter


class MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics


class MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic


class MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics


class MplsTe::SignallingCounters::HeadSignallingCounters : public Entity
{
    public:
        HeadSignallingCounters();
        ~HeadSignallingCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HeadSignallingCounter; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter> > head_signalling_counter;


}; // MplsTe::SignallingCounters::HeadSignallingCounters


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter : public Entity
{
    public:
        HeadSignallingCounter();
        ~HeadSignallingCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf lsp_id; //type: uint16

        class Statistics; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics
        class DestinationStatistic; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic> > destination_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics> statistics;


}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic : public Entity
{
    public:
        DestinationStatistic();
        ~DestinationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic


class MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics


class MplsTe::SignallingCounters::RemoteSignallingCounters : public Entity
{
    public:
        RemoteSignallingCounters();
        ~RemoteSignallingCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RemoteSignallingCounter; //type: MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter> > remote_signalling_counter;


}; // MplsTe::SignallingCounters::RemoteSignallingCounters


class MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter : public Entity
{
    public:
        RemoteSignallingCounter();
        ~RemoteSignallingCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf lsp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: int32
        YLeaf tunnel_name; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics> statistics;


}; // MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter


class MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics


class MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic


class MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics : public Entity
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


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics


class MplsTe::SignallingCounters::TailsCounters : public Entity
{
    public:
        TailsCounters();
        ~TailsCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TailsCounter; //type: MplsTe::SignallingCounters::TailsCounters::TailsCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::TailsCounters::TailsCounter> > tails_counter;


}; // MplsTe::SignallingCounters::TailsCounters


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_24_ */

