#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_68_
#define _CISCO_IOS_XR_MPLS_TE_OPER_68_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_35.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_37.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_66.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_67.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject : public ydk::Entity
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

        class SrlGs; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs> > srl_gs;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject : public ydk::Entity
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
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn : public ydk::Entity
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
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec : public ydk::Entity
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
        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection : public ydk::Entity
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
        class DiscoveredSrlg; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg> > discovered_srlg;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo : public ydk::Entity
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
        class SessionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo> session_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry> > path_protection_switchover_entry;
        
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
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcause

}; // MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry


class MplsTeStandby::SignallingCounters : public ydk::Entity
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

        class Issu; //type: MplsTeStandby::SignallingCounters::Issu
        class HeadSignallingCounters; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters
        class RemoteSignallingCounters; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters
        class Signallings; //type: MplsTeStandby::SignallingCounters::Signallings
        class SignallingSummary; //type: MplsTeStandby::SignallingCounters::SignallingSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters> head_signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters> remote_signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::SignallingSummary> signalling_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings> signallings;
        
}; // MplsTeStandby::SignallingCounters


class MplsTeStandby::SignallingCounters::HeadSignallingCounters : public ydk::Entity
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

        class HeadSignallingCounter; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter> > head_signalling_counter;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics
        class DestinationStatistic; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic> > destination_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics


class MplsTeStandby::SignallingCounters::Issu : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::Issu


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters : public ydk::Entity
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

        class RemoteSignallingCounter; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter> > remote_signalling_counter;
        
}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic> > s2l_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics


class MplsTeStandby::SignallingCounters::SignallingSummary : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::SignallingSummary


class MplsTeStandby::SignallingCounters::Signallings : public ydk::Entity
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

        class Signalling; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling> > signalling;
        
}; // MplsTeStandby::SignallingCounters::Signallings


class MplsTeStandby::SignallingCounters::Signallings::Signalling : public ydk::Entity
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
        class TeSignallingFilterData; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData> te_signalling_filter_data;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData : public ydk::Entity
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
        class TeSignallingFilterVif; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif
        class TeSignallingFilterLsp; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp> te_signalling_filter_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif> te_signalling_filter_vif;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic> > s2l_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics
        class DestinationStatistic; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic> > destination_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic : public ydk::Entity
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
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics


class MplsTeStandby::SoftPreemption : public ydk::Entity
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

        class Statistics; //type: MplsTeStandby::SoftPreemption::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SoftPreemption::Statistics> statistics;
        
}; // MplsTeStandby::SoftPreemption


class MplsTeStandby::SoftPreemption::Statistics : public ydk::Entity
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

}; // MplsTeStandby::SoftPreemption::Statistics


class MplsTeStandby::Topology : public ydk::Entity
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

        class Global; //type: MplsTeStandby::Topology::Global
        class DestinationPaths; //type: MplsTeStandby::Topology::DestinationPaths
        class ConfiguredSrlgs; //type: MplsTeStandby::Topology::ConfiguredSrlgs
        class Srlgs; //type: MplsTeStandby::Topology::Srlgs
        class PathTunnels; //type: MplsTeStandby::Topology::PathTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::ConfiguredSrlgs> configured_srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths> destination_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels> path_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs> srlgs;
        
}; // MplsTeStandby::Topology


class MplsTeStandby::Topology::ConfiguredSrlgs : public ydk::Entity
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

        class ConfiguredSrlg; //type: MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg> > configured_srlg;
        
}; // MplsTeStandby::Topology::ConfiguredSrlgs


class MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg : public ydk::Entity
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
        class SrlgLink; //type: MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink> > srlg_link;
        
}; // MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg


class MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink : public ydk::Entity
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

}; // MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink


class MplsTeStandby::Topology::DestinationPaths : public ydk::Entity
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

        class DestinationPath; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath> > destination_path;
        
}; // MplsTeStandby::Topology::DestinationPaths


class MplsTeStandby::Topology::DestinationPaths::DestinationPath : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity
        class Hop; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop
        class SharedRiskLinkGroup; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup
        class SrSegment; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop> > hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment> > sr_segment;
        
}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop : public ydk::Entity
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

}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment : public ydk::Entity
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

}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment


class MplsTeStandby::Topology::Global : public ydk::Entity
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
        class Areas; //type: MplsTeStandby::Topology::Global::Areas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Global::Areas> > areas;
        
}; // MplsTeStandby::Topology::Global


class MplsTeStandby::Topology::Global::Areas : public ydk::Entity
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
        class LocalSidAndSrbg; //type: MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg> local_sid_and_srbg;
        
}; // MplsTeStandby::Topology::Global::Areas


class MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg : public ydk::Entity
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

}; // MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg


class MplsTeStandby::Topology::PathTunnels : public ydk::Entity
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

        class PathTunnel; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel> > path_tunnel;
        
}; // MplsTeStandby::Topology::PathTunnels


class MplsTeStandby::Topology::PathTunnels::PathTunnel : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity
        class Hop; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop
        class SharedRiskLinkGroup; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup
        class SrSegment; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop> > hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment> > sr_segment;
        
}; // MplsTeStandby::Topology::PathTunnels::PathTunnel


class MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity


class MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity


class MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop : public ydk::Entity
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

}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop


class MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup


class MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment : public ydk::Entity
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

}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment


class MplsTeStandby::Topology::Srlgs : public ydk::Entity
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

        class Srlg; //type: MplsTeStandby::Topology::Srlgs::Srlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg> > srlg;
        
}; // MplsTeStandby::Topology::Srlgs


class MplsTeStandby::Topology::Srlgs::Srlg : public ydk::Entity
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
        class SrlgAreas; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas> > srlg_areas;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas : public ydk::Entity
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
        class SrlgLink; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink> > srlg_link;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink : public ydk::Entity
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
        class LinkAddressGeneric; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric> link_address_generic;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric : public ydk::Entity
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

        class TeAddr; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr : public ydk::Entity
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
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
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

}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::TopologyBriefs : public ydk::Entity
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

        class TopologyBrief; //type: MplsTeStandby::TopologyBriefs::TopologyBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief> > topology_brief;
        
}; // MplsTeStandby::TopologyBriefs


class MplsTeStandby::TopologyBriefs::TopologyBrief : public ydk::Entity
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
        class TopologyNodeSidAndSrbg; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg
        class TopologyNodeLink; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink> > topology_node_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg> topology_node_sid_and_srbg;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink : public ydk::Entity
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
        class TopologyLinkBandwidth; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth
        class OduLinkCapabilities; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities
        class TopologyLinkExtendedAffinityBit; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit
        class SharedRiskLinkGroup; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup
        class AdjacencySid; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid> > adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth> topology_link_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit> > topology_link_extended_affinity_bit;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid : public ydk::Entity
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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities : public ydk::Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxLspBandwidth; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth
        class OduCapability; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth> > max_lsp_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability> > odu_capability;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth : public ydk::Entity
{
    public:
        MaxLspBandwidth();
        ~MaxLspBandwidth();

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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability : public ydk::Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: TeOduLevel
        ydk::YLeaf stage1; //type: TeOduLevel
        ydk::YLeaf stage2; //type: TeOduLevel
        ydk::YLeaf stage3; //type: TeOduLevel
        ydk::YLeaf stage4; //type: TeOduLevel
        ydk::YLeaf terminable; //type: boolean
        ydk::YLeaf switchable; //type: boolean
        ydk::YLeaf tsg1p25; //type: boolean
        ydk::YLeaf tsg2p5; //type: boolean
        ydk::YLeaf vcat_capable; //type: boolean
        ydk::YLeaf lcas_capable; //type: boolean
        class BandwidthInfo; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public ydk::Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeOduCapability
        class Fixed; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public ydk::Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_od_us; //type: uint8
        ydk::YLeaf unreserved_od_us; //type: uint8

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public ydk::Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_bandwidth; //type: uint32
        ydk::YLeaf unreserved_bandwidth; //type: uint32
        ydk::YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth : public ydk::Entity
{
    public:
        TopologyLinkBandwidth();
        ~TopologyLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_migration_mode; //type: RrrDsteMigrationMode
        class TopologyLinkBandwidthPrestandard; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard
        class TopologyLinkBandwidthStandard; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard> topology_link_bandwidth_prestandard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard> topology_link_bandwidth_standard;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard : public ydk::Entity
{
    public:
        TopologyLinkBandwidthPrestandard();
        ~TopologyLinkBandwidthPrestandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_link_prestandard_bandwidth_physical; //type: uint32
        ydk::YLeaf topology_link_prestandard_bandwidth_reservation_global; //type: uint32
        ydk::YLeaf topology_link_prestandard_bandwidth_reservation_subpool; //type: uint32
        class TopologyLinkPrestandardBandwidthDetail; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail> topology_link_prestandard_bandwidth_detail;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthDetail();
        ~TopologyLinkPrestandardBandwidthDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopologyLinkPrestandardBandwidthAllocated; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated
        class TopologyLinkPrestandardBandwidthAvailableGlobal; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal
        class TopologyLinkPrestandardBandwidthAvailableSubpool; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated> > topology_link_prestandard_bandwidth_allocated;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal> > topology_link_prestandard_bandwidth_available_global;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool> > topology_link_prestandard_bandwidth_available_subpool;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAllocated();
        ~TopologyLinkPrestandardBandwidthAllocated();

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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAvailableGlobal();
        ~TopologyLinkPrestandardBandwidthAvailableGlobal();

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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAvailableSubpool();
        ~TopologyLinkPrestandardBandwidthAvailableSubpool();

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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard : public ydk::Entity
{
    public:
        TopologyLinkBandwidthStandard();
        ~TopologyLinkBandwidthStandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topo_link_std_bw_physical; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_max; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_pool0; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_pool1; //type: uint32
        class TopoLinkStdBwDetail; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail> topo_link_std_bw_detail;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail : public ydk::Entity
{
    public:
        TopoLinkStdBwDetail();
        ~TopoLinkStdBwDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopoLinkStdBwAllocated; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated
        class TopoLinkStdBwAvailable; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated> > topo_link_std_bw_allocated;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable> > topo_link_std_bw_available;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated : public ydk::Entity
{
    public:
        TopoLinkStdBwAllocated();
        ~TopoLinkStdBwAllocated();

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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable : public ydk::Entity
{
    public:
        TopoLinkStdBwAvailable();
        ~TopoLinkStdBwAvailable();

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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit : public ydk::Entity
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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg : public ydk::Entity
{
    public:
        TopologyNodeSidAndSrbg();
        ~TopologyNodeSidAndSrbg();

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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg


class MplsTeStandby::TopologyNodes : public ydk::Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TopologyNode; //type: MplsTeStandby::TopologyNodes::TopologyNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode> > topology_node;
        
}; // MplsTeStandby::TopologyNodes


class MplsTeStandby::TopologyNodes::TopologyNode : public ydk::Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

        bool has_data() const override;
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
        class TopologyNodeSidAndSrbg; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg
        class TopologyNodeLink; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink> > topology_node_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg> topology_node_sid_and_srbg;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink : public ydk::Entity
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
        class TopologyLinkBandwidth; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth
        class OduLinkCapabilities; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities
        class TopologyLinkExtendedAffinityBit; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit
        class SharedRiskLinkGroup; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup
        class AdjacencySid; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid> > adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth> topology_link_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit> > topology_link_extended_affinity_bit;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid : public ydk::Entity
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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities : public ydk::Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxLspBandwidth; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth
        class OduCapability; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth> > max_lsp_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability> > odu_capability;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth : public ydk::Entity
{
    public:
        MaxLspBandwidth();
        ~MaxLspBandwidth();

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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability : public ydk::Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: TeOduLevel
        ydk::YLeaf stage1; //type: TeOduLevel
        ydk::YLeaf stage2; //type: TeOduLevel
        ydk::YLeaf stage3; //type: TeOduLevel
        ydk::YLeaf stage4; //type: TeOduLevel
        ydk::YLeaf terminable; //type: boolean
        ydk::YLeaf switchable; //type: boolean
        ydk::YLeaf tsg1p25; //type: boolean
        ydk::YLeaf tsg2p5; //type: boolean
        ydk::YLeaf vcat_capable; //type: boolean
        ydk::YLeaf lcas_capable; //type: boolean
        class BandwidthInfo; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public ydk::Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeOduCapability
        class Fixed; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public ydk::Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_od_us; //type: uint8
        ydk::YLeaf unreserved_od_us; //type: uint8

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public ydk::Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_bandwidth; //type: uint32
        ydk::YLeaf unreserved_bandwidth; //type: uint32
        ydk::YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth : public ydk::Entity
{
    public:
        TopologyLinkBandwidth();
        ~TopologyLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_migration_mode; //type: RrrDsteMigrationMode
        class TopologyLinkBandwidthPrestandard; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard
        class TopologyLinkBandwidthStandard; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard> topology_link_bandwidth_prestandard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard> topology_link_bandwidth_standard;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard : public ydk::Entity
{
    public:
        TopologyLinkBandwidthPrestandard();
        ~TopologyLinkBandwidthPrestandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_link_prestandard_bandwidth_physical; //type: uint32
        ydk::YLeaf topology_link_prestandard_bandwidth_reservation_global; //type: uint32
        ydk::YLeaf topology_link_prestandard_bandwidth_reservation_subpool; //type: uint32
        class TopologyLinkPrestandardBandwidthDetail; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail> topology_link_prestandard_bandwidth_detail;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthDetail();
        ~TopologyLinkPrestandardBandwidthDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopologyLinkPrestandardBandwidthAllocated; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated
        class TopologyLinkPrestandardBandwidthAvailableGlobal; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal
        class TopologyLinkPrestandardBandwidthAvailableSubpool; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated> > topology_link_prestandard_bandwidth_allocated;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal> > topology_link_prestandard_bandwidth_available_global;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool> > topology_link_prestandard_bandwidth_available_subpool;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAllocated();
        ~TopologyLinkPrestandardBandwidthAllocated();

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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAvailableGlobal();
        ~TopologyLinkPrestandardBandwidthAvailableGlobal();

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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAvailableSubpool();
        ~TopologyLinkPrestandardBandwidthAvailableSubpool();

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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard : public ydk::Entity
{
    public:
        TopologyLinkBandwidthStandard();
        ~TopologyLinkBandwidthStandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topo_link_std_bw_physical; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_max; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_pool0; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_pool1; //type: uint32
        class TopoLinkStdBwDetail; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail> topo_link_std_bw_detail;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail : public ydk::Entity
{
    public:
        TopoLinkStdBwDetail();
        ~TopoLinkStdBwDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopoLinkStdBwAllocated; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated
        class TopoLinkStdBwAvailable; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated> > topo_link_std_bw_allocated;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable> > topo_link_std_bw_available;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated : public ydk::Entity
{
    public:
        TopoLinkStdBwAllocated();
        ~TopoLinkStdBwAllocated();

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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable : public ydk::Entity
{
    public:
        TopoLinkStdBwAvailable();
        ~TopoLinkStdBwAvailable();

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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit : public ydk::Entity
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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg : public ydk::Entity
{
    public:
        TopologyNodeSidAndSrbg();
        ~TopologyNodeSidAndSrbg();

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

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg


class MplsTeStandby::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelFlexLsps; //type: MplsTeStandby::Tunnels::TunnelFlexLsps
        class TunnelAutoBandwidths; //type: MplsTeStandby::Tunnels::TunnelAutoBandwidths
        class Summary; //type: MplsTeStandby::Tunnels::Summary
        class TunnelPathProtections; //type: MplsTeStandby::Tunnels::TunnelPathProtections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelAutoBandwidths> tunnel_auto_bandwidths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps> tunnel_flex_lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections> tunnel_path_protections;
        
}; // MplsTeStandby::Tunnels


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary> auto_mesh_one_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoMeshSummary> auto_mesh_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary> auto_tun_server_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutobackupSummary> autobackup_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary> current_tunnel_convergence_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::GmplsNniSummary> gmpls_nni_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::GmplsUniSummary> gmpls_uni_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary> last_tunnel_convergence_summary;
        
}; // MplsTeStandby::Tunnels::Summary


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

        class TotalAutoP2MpTunnels; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels
        class TotalAutoP2PTunnels; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels
        class ClientsSummary; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary> > clients_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels> total_auto_p2mp_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels> total_auto_p2p_tunnels;
        
}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary


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
        class P2MpInfo; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo
        class P2PInfo; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo> p2mp_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo> p2p_info;
        
}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo : public ydk::Entity
{
    public:
        P2MpInfo();
        ~P2MpInfo();

        bool has_data() const override;
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

}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo : public ydk::Entity
{
    public:
        P2PInfo();
        ~P2PInfo();

        bool has_data() const override;
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

}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels : public ydk::Entity
{
    public:
        TotalAutoP2MpTunnels();
        ~TotalAutoP2MpTunnels();

        bool has_data() const override;
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

}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels : public ydk::Entity
{
    public:
        TotalAutoP2PTunnels();
        ~TotalAutoP2PTunnels();

        bool has_data() const override;
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

}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;
        
}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary


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


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_68_ */

