#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_6_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_5.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa : public ydk::Entity
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
        class MplsOutgoingInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public ydk::Entity
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

        class Stack; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack> > stack;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack : public ydk::Entity
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
        class NexthopPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing : public ydk::Entity
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
        class NextHop; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop
        class RemoteLfa; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa : public ydk::Entity
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
        class RemotePNodeId; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId
        class RemoteQNodeId; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId> remote_p_node_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId> remote_q_node_id;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route : public ydk::Entity
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

        class Routing; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp : public ydk::Entity
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

        class Syncs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs> syncs;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs : public ydk::Entity
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

        class Sync; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync> > sync;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync : public ydk::Entity
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
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf
        class Peers; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer> > gr_only_peer;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers> > peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces : public ydk::Entity
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

        class Interface; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface> > interface;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface : public ydk::Entity
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
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf
        class TeMeshGrp; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig> > auto_config;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp> > te_mesh_grp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters : public ydk::Entity
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

        ydk::YLeaf initial_seconds; //type: uint32
        ydk::YLeaf maximum_seconds; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters


class MplsLdp::Nodes::Node::DefaultVrf::Backoffs : public ydk::Entity
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

        class Backoff; //type: MplsLdp::Nodes::Node::DefaultVrf::Backoffs::Backoff

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Backoffs::Backoff> > backoff;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Backoffs


class MplsLdp::Nodes::Node::DefaultVrf::Backoffs::Backoff : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf backoff_seconds; //type: uint32
        ydk::YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Backoffs::Backoff


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities : public ydk::Entity
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

        class Capability; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability> > capability;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability : public ydk::Entity
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

        ydk::YLeaf capability_type; //type: int32
        ydk::YLeaf capability_owner; //type: string
        class Capability_; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_> capability;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_ : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart : public ydk::Entity
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

        ydk::YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        ydk::YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf
        class GracefulRestartableNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor> > graceful_restartable_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor : public ydk::Entity
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

        ydk::YLeaf connect_count; //type: uint32
        ydk::YLeaf is_neighbor_up; //type: boolean
        ydk::YLeaf is_liveness_timer_running; //type: boolean
        ydk::YLeaf liveness_timer_remaining_seconds; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: boolean
        ydk::YLeaf recovery_timer_remaining_seconds; //type: uint32
        ydk::YLeaf down_nbr_flap_count; //type: uint8
        ydk::YLeaf down_nbr_flags; //type: uint32
        ydk::YLeaf down_nbr_down_reason; //type: uint32
        class GrPeer; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress> > down_nbr_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface> > down_nbr_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public ydk::Entity
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

        ydk::YLeaf address_family; //type: LdpAfId
        ydk::YLeaf interface_handle; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Issu : public ydk::Entity
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

        class HaSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary
        class HaStatistics; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics> ha_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary> ha_summary;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics : public ydk::Entity
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

        class HaGlobal; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal : public ydk::Entity
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

        class InitSync; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors : public ydk::Entity
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

        class HaNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
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

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
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

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary : public ydk::Entity
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

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Sessions : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Sessions


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::LdpId : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::LdpId


class MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs : public ydk::Entity
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

        class NeighborBrief; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief> > neighbor_brief;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs


class MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf nsr_state; //type: ShowNsrState
        ydk::YLeaf up_time_seconds; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf
        class NbrBrAfInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo> > nbr_br_af_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief


class MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo : public ydk::Entity
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

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf num_of_nbr_discovery; //type: uint32
        ydk::YLeaf num_of_nbr_addresses; //type: uint32
        ydk::YLeaf num_of_nbr_lbl; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo


class MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities : public ydk::Entity
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

        class NeighborCapability; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability> > neighbor_capability;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities


class MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class Sent; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent> > sent;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Received : public ydk::Entity
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

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent : public ydk::Entity
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

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors : public ydk::Entity
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

        class Neighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor> > neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class ProtocolInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation> tcp_information;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation : public ydk::Entity
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
        class Capabilities; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public ydk::Entity
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

        class Sent; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public ydk::Entity
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

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public ydk::Entity
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

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public ydk::Entity
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

        class Address; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public ydk::Entity
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

        class Address; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public ydk::Entity
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

        class Address; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public ydk::Entity
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

        class Address; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public ydk::Entity
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

        class AdjacencyGroup; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public ydk::Entity
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

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
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

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public ydk::Entity
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

        class AdjacencyGroup; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public ydk::Entity
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

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
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

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation : public ydk::Entity
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

        ydk::YLeaf ta_holdtime; //type: uint32
        ydk::YLeaf ta_state; //type: string
        ydk::YLeaf ta_pies_sent; //type: uint32
        ydk::YLeaf ta_pies_rcvd; //type: uint32
        ydk::YLeaf ta_up_time_seconds; //type: uint32
        ydk::YLeaf downstream_on_demand; //type: boolean
        class TaGracefulRestartAdjacency; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public ydk::Entity
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

        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf reconnect_timeout; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation : public ydk::Entity
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

        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf is_md5_on; //type: boolean
        class ForeignHost; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost : public ydk::Entity
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

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Nodes::Node::DefaultVrf::Nsr : public ydk::Entity
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

        class NsrPending; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending> nsr_pending;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics : public ydk::Entity
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

        class HaGlobal; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal : public ydk::Entity
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

        class InitSync; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors : public ydk::Entity
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

        class HaNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
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

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
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

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary : public ydk::Entity
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

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Sessions : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Sessions


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending : public ydk::Entity
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

        class HaNeighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors : public ydk::Entity
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

        class HaNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
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

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
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

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role_is_active; //type: boolean
        ydk::YLeaf global_md5_password_enabled; //type: boolean
        ydk::YLeaf protocol_version; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf hello_hold_time; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf targeted_hello_hold_time; //type: uint32
        ydk::YLeaf targeted_hello_interval; //type: uint32
        ydk::YLeaf session_hold_time; //type: uint32
        ydk::YLeaf housekeeping_timer_interval; //type: uint32
        ydk::YLeaf le_no_route_timeout; //type: uint32
        ydk::YLeaf ldp_recovery_timeout; //type: uint32
        ydk::YLeaf af_binding_withdraw_delay; //type: uint32
        ydk::YLeaf max_intf_attached; //type: uint32
        ydk::YLeaf max_intf_te; //type: uint32
        ydk::YLeaf max_peer; //type: uint32
        ydk::YLeaf ldp_out_of_mem_state; //type: uint32
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_synced; //type: boolean
        ydk::YLeaf igp_sync_delay_time_for_interface; //type: uint32
        ydk::YLeaf igp_sync_delay_time_on_restart; //type: uint32
        ydk::YLeaf global_discovery_quick_start_disabled; //type: boolean
        ydk::YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean
        class GracefulRestartInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters::GracefulRestartInformation
        class AddressFamilyParameter; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter> > address_family_parameter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters::GracefulRestartInformation> graceful_restart_information;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Parameters


class MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter : public ydk::Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf null_label; //type: string
        ydk::YLeaf label_imp_null_override_acl; //type: string
        ydk::YLeaf is_accepting_targeted_hellos; //type: boolean
        ydk::YLeaf targeted_hello_acl; //type: string
        class DiscoveryTransportAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress> discovery_transport_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter


class MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress : public ydk::Entity
{
    public:
        DiscoveryTransportAddress();
        ~DiscoveryTransportAddress();

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

}; // MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress


class MplsLdp::Nodes::Node::DefaultVrf::Parameters::GracefulRestartInformation : public ydk::Entity
{
    public:
        GracefulRestartInformation();
        ~GracefulRestartInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_graceful_restart_configured; //type: boolean
        ydk::YLeaf graceful_restart_reconnect_timeout; //type: uint32
        ydk::YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Parameters::GracefulRestartInformation


class MplsLdp::Nodes::Node::DefaultVrf::Statistics : public ydk::Entity
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

        class Statistic; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic> > statistic;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Statistics


class MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

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
        ydk::YLeaf iccp_enabled; //type: boolean
        class MessageOut; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageOut
        class MessageIn; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageIn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageIn> message_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageOut> message_out;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic


class MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageIn : public ydk::Entity
{
    public:
        MessageIn();
        ~MessageIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageIn


class MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageOut : public ydk::Entity
{
    public:
        MessageOut();
        ~MessageOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageOut


class MplsLdp::Nodes::Node::DefaultVrf::Summary : public ydk::Entity
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

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf
        class Common; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Summary


class MplsLdp::Nodes::Node::DefaultVrf::Summary::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_families; //type: LdpAf
        ydk::YLeaf number_of_ipv4af; //type: uint32
        ydk::YLeaf number_of_ipv6af; //type: uint32
        ydk::YLeaf number_of_neighbors; //type: uint32
        ydk::YLeaf number_of_nsr_synced_neighbors; //type: uint32
        ydk::YLeaf number_of_graceful_restart_neighbors; //type: uint32
        ydk::YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        ydk::YLeaf number_of_ipv4_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv6_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv4_routes; //type: uint32
        ydk::YLeaf number_of_ipv6_routes; //type: uint32
        ydk::YLeaf number_of_ipv4_local_addresses; //type: uint32
        ydk::YLeaf number_of_ipv6_local_addresses; //type: uint32
        ydk::YLeaf number_of_ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Summary::Common


class MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf


class MplsLdp::Nodes::Node::DiscoverySummaryAll : public ydk::Entity
{
    public:
        DiscoverySummaryAll();
        ~DiscoverySummaryAll();

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
        class Vrf; //type: MplsLdp::Nodes::Node::DiscoverySummaryAll::Vrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DiscoverySummaryAll::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DiscoverySummaryAll


class MplsLdp::Nodes::Node::DiscoverySummaryAll::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::DiscoverySummaryAll::Vrf


class MplsLdp::Nodes::Node::ForwardingSummaryAll : public ydk::Entity
{
    public:
        ForwardingSummaryAll();
        ~ForwardingSummaryAll();

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
        class Vrf; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Vrf
        class Rws; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws> rws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::ForwardingSummaryAll


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws : public ydk::Entity
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

        class Pfxs; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs
        class Nhs; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Nhs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Nhs> nhs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs> pfxs;
        
}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Nhs : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Nhs


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs : public ydk::Entity
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
        class LabeledPfxsAggr; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        
}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Vrf


class MplsLdp::Nodes::Node::NsrSummaryAll : public ydk::Entity
{
    public:
        NsrSummaryAll();
        ~NsrSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: MplsLdp::Nodes::Node::NsrSummaryAll::Vrf
        class Sessions; //type: MplsLdp::Nodes::Node::NsrSummaryAll::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::NsrSummaryAll::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::NsrSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::NsrSummaryAll


class MplsLdp::Nodes::Node::NsrSummaryAll::Sessions : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::NsrSummaryAll::Sessions


class MplsLdp::Nodes::Node::NsrSummaryAll::Vrf : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::NsrSummaryAll::Vrf


class MplsLdp::Nodes::Node::Summary : public ydk::Entity
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

        ydk::YLeaf number_of_vrf; //type: uint32
        ydk::YLeaf number_of_vrf_oper; //type: uint32
        ydk::YLeaf number_of_interfaces; //type: uint32
        ydk::YLeaf number_of_fwd_ref_interfaces; //type: uint32
        ydk::YLeaf number_of_autocfg_interfaces; //type: uint32
        ydk::YLeaf is_bound_with_sysdb; //type: boolean
        ydk::YLeaf is_registered_with_sysdb; //type: boolean
        ydk::YLeaf is_bound_with_rsi; //type: boolean
        ydk::YLeaf is_bound_with_interface_manager; //type: boolean
        ydk::YLeaf is_registered_with_interface_manager; //type: boolean
        ydk::YLeaf is_bound_with_ip_arm; //type: boolean
        ydk::YLeaf is_bound_with_lsd; //type: boolean
        ydk::YLeaf is_registered_with_lsd; //type: boolean
        ydk::YLeaf is_bound_with_ipv4_rib; //type: boolean
        ydk::YLeaf is_registered_with_ipv4_rib; //type: boolean
        ydk::YLeaf number_of_ipv4rib_tables; //type: uint32
        ydk::YLeaf number_of_registered_ipv4rib_tables; //type: uint32
        ydk::YLeaf is_bound_with_ipv6_rib; //type: boolean
        ydk::YLeaf is_registered_with_ipv6_rib; //type: boolean
        ydk::YLeaf number_of_ipv6rib_tables; //type: uint32
        ydk::YLeaf number_of_registered_ipv6rib_tables; //type: uint32
        ydk::YLeaf is_bound_with_atom; //type: boolean
        ydk::YLeaf is_bound_with_nsr_mate; //type: boolean
        ydk::YLeaf is_nsr_configured; //type: boolean
        ydk::YLeaf is_mldp_registered; //type: boolean
        class Common; //type: MplsLdp::Nodes::Node::Summary::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Summary::Common> common;
        
}; // MplsLdp::Nodes::Node::Summary


class MplsLdp::Nodes::Node::Summary::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_families; //type: LdpAf
        ydk::YLeaf number_of_ipv4af; //type: uint32
        ydk::YLeaf number_of_ipv6af; //type: uint32
        ydk::YLeaf number_of_neighbors; //type: uint32
        ydk::YLeaf number_of_nsr_synced_neighbors; //type: uint32
        ydk::YLeaf number_of_graceful_restart_neighbors; //type: uint32
        ydk::YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        ydk::YLeaf number_of_ipv4_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv6_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv4_routes; //type: uint32
        ydk::YLeaf number_of_ipv6_routes; //type: uint32
        ydk::YLeaf number_of_ipv4_local_addresses; //type: uint32
        ydk::YLeaf number_of_ipv6_local_addresses; //type: uint32
        ydk::YLeaf number_of_ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Nodes::Node::Summary::Common


class MplsLdp::Nodes::Node::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: MplsLdp::Nodes::Node::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf> > vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs


class MplsLdp::Nodes::Node::Vrfs::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string
        class GracefulRestart; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities
        class Summary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Summary
        class Afs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs
        class NeighborBriefs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs
        class Nsr; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr
        class Parameters; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters
        class Issu; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors
        class LdpId; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::LdpId
        class Statistics; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs> backoffs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities> capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::LdpId> ldp_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters> parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Summary> summary;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af> > af;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MplsLdpOperAfName
        class InterfaceSummary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery
        class BindingsSummaryAll; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll
        class Forwardings; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary> forwarding_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp> igp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces> interfaces;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings : public ydk::Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding> > binding;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

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
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf le_local_binding_revision; //type: uint32
        ydk::YLeaf le_local_label_state; //type: LocalLabelState
        ydk::YLeaf is_no_route; //type: boolean
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf advertise_prefix_acl; //type: string
        ydk::YLeaf advertise_tsr_acl; //type: string
        ydk::YLeaf config_enforced_local_label_value; //type: boolean
        ydk::YLeaf is_elc; //type: boolean
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_
        class PrefixXr; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked> > peers_acked;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding> > remote_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked : public ydk::Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public ydk::Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr : public ydk::Entity
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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding : public ydk::Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf is_elc; //type: boolean
        class AssigningPeerLdpIdent; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public ydk::Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec : public ydk::Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllocationAcl; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl> > advt_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public ydk::Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_acl; //type: string
        ydk::YLeaf peer_acl; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public ydk::Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_acl; //type: boolean
        ydk::YLeaf prefix_acl; //type: string
        ydk::YLeaf is_host_route_only; //type: boolean

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary : public ydk::Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_
        class BindAf; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf> > bind_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_6_ */

