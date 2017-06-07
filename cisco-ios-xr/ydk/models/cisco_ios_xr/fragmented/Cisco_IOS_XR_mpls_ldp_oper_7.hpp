#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_7_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_5.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_6.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf local_label; //type: uint32
        YLeaf le_local_binding_revision; //type: uint32
        YLeaf le_local_label_state; //type: LocalLabelStateEnum
        YLeaf is_no_route; //type: boolean
        YLeaf label_oor; //type: boolean
        YLeaf advertise_prefix_acl; //type: string
        YLeaf advertise_tsr_acl; //type: string
        YLeaf config_enforced_local_label_value; //type: boolean
        YLeaf is_elc; //type: boolean
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_
        class PrefixXr; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked> > peers_acked;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding> > remote_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding : public Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_label; //type: uint32
        YLeaf is_stale; //type: boolean
        YLeaf is_elc; //type: boolean
        class AssigningPeerLdpIdent; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked : public Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Syncs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs> syncs;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs : public Entity
{
    public:
        Syncs();
        ~Syncs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sync; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync> > sync;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync : public Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf igp_sync_state; //type: LdpIgpSyncStateEnum
        YLeaf igp_sync_delay; //type: uint32
        YLeaf is_delay_timer_running; //type: boolean
        YLeaf delay_timer_remaining; //type: uint32
        YLeaf igp_sync_down_reason; //type: LdpIgpSyncDownReasonEnum
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_
        class Peers; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer> > gr_only_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers> > peers;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_id; //type: string
        YLeaf is_gr_enabled; //type: boolean

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public Entity
{
    public:
        GrOnlyPeer();
        ~GrOnlyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_id; //type: string
        YLeaf is_chkpt_created; //type: boolean

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart : public Entity
{
    public:
        SyncDelayRestart();
        ~SyncDelayRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured; //type: boolean
        YLeaf delay_secs; //type: uint32
        YLeaf timer_running; //type: boolean
        YLeaf remaining_secs; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary : public Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_
        class BindAf; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface> > interface;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf ldp_enabled; //type: boolean
        YLeaf is_im_stale; //type: boolean
        YLeaf ldp_config_mode; //type: boolean
        YLeaf ldp_autoconfig_disable; //type: boolean
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_
        class TeMeshGrp; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig> > auto_config;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp> > te_mesh_grp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public Entity
{
    public:
        TeMeshGrp();
        ~TeMeshGrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ldp_te_mesh_group_all_cfgd; //type: boolean
        YLeaf ldp_mesh_group_enabled; //type: boolean
        YLeaf te_mesh_group_id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig : public Entity
{
    public:
        AutoConfig();
        ~AutoConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tuple; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHellos; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos
        class Summary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Summary
        class TargetedHellos; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos
        class Brief; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief
        class Stats; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Stats

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos> link_hellos;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Stats> stats;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos> targeted_hellos;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos : public Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHello; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello> > link_hello;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello : public Entity
{
    public:
        LinkHello();
        ~LinkHello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf next_hello; //type: uint32
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf quick_start_disabled; //type: boolean
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_
        class HelloInformation; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation
        class DiscoveryLinkAf; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf> > discovery_link_af;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class NeighborSrcAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo> > last_session_down_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public Entity
{
    public:
        NeighborSrcAddress();
        ~NeighborSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public Entity
{
    public:
        NeighborTransportAddress();
        ~NeighborTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public Entity
{
    public:
        DiscoveryLinkAf();
        ~DiscoveryLinkAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        class LocalSrcAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public Entity
{
    public:
        LocalSrcAddress();
        ~LocalSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public Entity
{
    public:
        LocalTransportAddress();
        ~LocalTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Summary


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos : public Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TargetedHello; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello> > targeted_hello;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class DhcbLocalAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo> > last_session_down_info;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public Entity
{
    public:
        DhcbLocalAddress();
        ~DhcbLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHelloBriefs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public Entity
{
    public:
        LinkHelloBriefs();
        ~LinkHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHelloBrief; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief> > link_hello_brief;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public Entity
{
    public:
        LinkHelloBrief();
        ~LinkHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf address_family; //type: LdpAfEnum
        YLeaf address_family_set; //type: LdpAfEnum
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_
        class HelloInformation; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public Entity
{
    public:
        TargetedHelloBriefs();
        ~TargetedHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TargetedHelloBrief; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief> > targeted_hello_brief;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public Entity
{
    public:
        TargetedHelloBrief();
        ~TargetedHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf address_family; //type: LdpAfEnum
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_
        class DhcbTargetAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stat; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat> > stat;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Stats


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat : public Entity
{
    public:
        Stat();
        ~Stat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf adjacency_group_up_time; //type: uint32
        YLeaf tcp_open_count; //type: uint32
        YLeaf tcp_arb_chg_count; //type: uint32
        YLeaf tcp_role; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_
        class BindAf; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings : public Entity
{
    public:
        Forwardings();
        ~Forwardings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Forwarding; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding> > forwarding;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf table_id; //type: uint32
        YLeaf prefix_length; //type: uint8
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_
        class PrefixXr; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths> > paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route> route;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Routing; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_label; //type: uint32
        YLeaf forwarding_update_count; //type: uint32
        YLeaf forwarding_update_timestamp; //type: uint64
        YLeaf forwarding_update_age; //type: uint64

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Routing; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing
        class Mpls; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing> routing;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class NextHop; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop
        class RemoteLfa; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf has_remote_lfa_bkup; //type: boolean
        YLeaf needs_tldp; //type: boolean
        YLeaf has_q_node; //type: boolean
        class RemotePNodeId; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId
        class RemoteQNodeId; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId> remote_p_node_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId> remote_q_node_id;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId : public Entity
{
    public:
        RemotePNodeId();
        ~RemotePNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId : public Entity
{
    public:
        RemoteQNodeId();
        ~RemoteQNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MplsOutgoingInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf has_remote_lfa_bkup; //type: boolean
        class MplsOutgoingInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack> > stack;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec : public Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllocationAcl; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl> > advt_acl;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf has_acl; //type: boolean
        YLeaf prefix_acl; //type: string
        YLeaf is_host_route_only; //type: boolean

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_acl; //type: string
        YLeaf peer_acl; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary : public Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_lsd_bound; //type: boolean
        YLeaf fsht; //type: uint16
        YLeaf intfs; //type: uint16
        YLeaf lbls; //type: uint16
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_
        class Rws; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws> rws;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws : public Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pfxs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs
        class Nhs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs> pfxs;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs : public Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_pfxs; //type: uint16
        YLeaf ecmp_pfxs; //type: uint16
        YLeaf protected_pfxs; //type: uint16
        class LabeledPfxsAggr; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr : public Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary : public Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup : public Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_paths; //type: uint32
        YLeaf protected_paths; //type: uint32
        YLeaf backup_paths; //type: uint32
        YLeaf remote_backup_paths; //type: uint32
        YLeaf labeled_paths; //type: uint32
        YLeaf labeled_backup_paths; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs


class MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs : public Entity
{
    public:
        NeighborBriefs();
        ~NeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborBrief; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief> > neighbor_brief;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs


class MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief : public Entity
{
    public:
        NeighborBrief();
        ~NeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf is_graceful_restartable; //type: boolean
        YLeaf nsr_state; //type: ShowNsrStateEnum
        YLeaf up_time_seconds; //type: uint32
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_
        class NbrBrAfInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo> > nbr_br_af_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief


class MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo : public Entity
{
    public:
        NbrBrAfInfo();
        ~NbrBrAfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf num_of_nbr_discovery; //type: uint32
        YLeaf num_of_nbr_addresses; //type: uint32
        YLeaf num_of_nbr_lbl; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::BackoffParameters : public Entity
{
    public:
        BackoffParameters();
        ~BackoffParameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initial_seconds; //type: uint32
        YLeaf maximum_seconds; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::BackoffParameters


class MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs : public Entity
{
    public:
        Backoffs();
        ~Backoffs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Backoff; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs::Backoff

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs::Backoff> > backoff;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs


class MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf backoff_seconds; //type: uint32
        YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs::Backoff


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NsrPending; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending> nsr_pending;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending : public Entity
{
    public:
        NsrPending();
        ~NsrPending();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaNeighbors; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaNeighbor; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_
        class Sessions; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaGlobal; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InitSync; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaNeighbor; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class GracefulRestartInformation; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation
        class AddressFamilyParameter; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter> > address_family_parameter;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation> graceful_restart_information;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters


class MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation : public Entity
{
    public:
        GracefulRestartInformation();
        ~GracefulRestartInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_graceful_restart_configured; //type: boolean
        YLeaf graceful_restart_reconnect_timeout; //type: uint32
        YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation


class MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter : public Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf null_label; //type: string
        YLeaf label_imp_null_override_acl; //type: string
        YLeaf is_accepting_targeted_hellos; //type: boolean
        YLeaf targeted_hello_acl; //type: string
        class DiscoveryTransportAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress> discovery_transport_address;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter


class MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress : public Entity
{
    public:
        DiscoveryTransportAddress();
        ~DiscoveryTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaSummary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary
        class HaStatistics; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary> ha_summary;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary::Vrf_
        class Sessions; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaSummary::Sessions


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaGlobal; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InitSync; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaNeighbor; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities : public Entity
{
    public:
        NeighborCapabilities();
        ~NeighborCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborCapability; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability> > neighbor_capability;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities


class MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability : public Entity
{
    public:
        NeighborCapability();
        ~NeighborCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        class Sent; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent> > sent;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        class ProtocolInformation; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation> tcp_information;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation : public Entity
{
    public:
        ProtocolInformation();
        ~ProtocolInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ta_holdtime; //type: uint32
        YLeaf ta_state; //type: string
        YLeaf ta_pies_sent; //type: uint32
        YLeaf ta_pies_rcvd; //type: uint32
        YLeaf ta_up_time_seconds; //type: uint32
        YLeaf downstream_on_demand; //type: boolean
        class TaGracefulRestartAdjacency; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public Entity
{
    public:
        TaGracefulRestartAdjacency();
        ~TaGracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_graceful_restartable; //type: boolean
        YLeaf reconnect_timeout; //type: uint32
        YLeaf recovery_time; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation : public Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf foreign_port; //type: uint16
        YLeaf local_port; //type: uint16
        YLeaf is_md5_on; //type: boolean
        class ForeignHost; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public Entity
{
    public:
        ForeignHost();
        ~ForeignHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost : public Entity
{
    public:
        LocalHost();
        ~LocalHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation : public Entity
{
    public:
        DetailedInformation();
        ~DetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class Capabilities; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sent; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public Entity
{
    public:
        Ipv4DuplicateAddress();
        ~Ipv4DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public Entity
{
    public:
        Ipv6DuplicateAddress();
        ~Ipv6DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv4AddressInfo();
        ~LdpNbrBoundIpv4AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv6AddressInfo();
        ~LdpNbrBoundIpv6AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public Entity
{
    public:
        LdpNbrIpv4AdjInfo();
        ~LdpNbrIpv4AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AdjacencyGroup; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_7_ */

