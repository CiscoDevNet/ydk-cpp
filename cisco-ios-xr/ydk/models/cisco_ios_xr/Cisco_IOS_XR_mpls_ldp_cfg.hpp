#ifndef _CISCO_IOS_XR_MPLS_LDP_CFG_
#define _CISCO_IOS_XR_MPLS_LDP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_cfg {

class MplsLdp : public ydk::Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        ydk::YLeaf enable; //type: empty
        class DefaultVrf; //type: MplsLdp::DefaultVrf
        class Vrfs; //type: MplsLdp::Vrfs
        class Global; //type: MplsLdp::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global> global;
        
}; // MplsLdp


class MplsLdp::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Afs; //type: MplsLdp::DefaultVrf::Afs
        class Global; //type: MplsLdp::DefaultVrf::Global
        class Interfaces; //type: MplsLdp::DefaultVrf::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces> interfaces;
        
}; // MplsLdp::DefaultVrf


class MplsLdp::DefaultVrf::Afs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Af; //type: MplsLdp::DefaultVrf::Afs::Af

        ydk::YList af;
        
}; // MplsLdp::DefaultVrf::Afs


class MplsLdp::DefaultVrf::Afs::Af : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: MplsLdpafName
        ydk::YLeaf enable; //type: empty
        class Label; //type: MplsLdp::DefaultVrf::Afs::Af::Label
        class Discovery; //type: MplsLdp::DefaultVrf::Afs::Af::Discovery
        class TrafficEngineering; //type: MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering
        class Neighbor; //type: MplsLdp::DefaultVrf::Afs::Af::Neighbor
        class RedistributionProtocol; //type: MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label> label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering> traffic_engineering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol> redistribution_protocol;
        
}; // MplsLdp::DefaultVrf::Afs::Af


class MplsLdp::DefaultVrf::Afs::Af::Label : public ydk::Entity
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

        class Remote; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Remote
        class Local; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Remote> remote;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local> local;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label


class MplsLdp::DefaultVrf::Afs::Af::Label::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accept; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept> accept;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label::Remote


class MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerAcceptPolicies; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies> peer_accept_policies;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept


class MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies : public ydk::Entity
{
    public:
        PeerAcceptPolicies();
        ~PeerAcceptPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerAcceptPolicy; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy

        ydk::YList peer_accept_policy;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies


class MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy : public ydk::Entity
{
    public:
        PeerAcceptPolicy();
        ~PeerAcceptPolicy();

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
        ydk::YLeaf prefix_acl_name; //type: string

}; // MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy


class MplsLdp::DefaultVrf::Afs::Af::Label::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf implicit_null_override; //type: string
        ydk::YLeaf default_route; //type: empty
        class Advertise; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise
        class Allocate; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise> advertise;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate> allocate;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        class PeerAdvertisePolicies; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies
        class PrefixAdvertisePolicies; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies
        class ExplicitNull; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull
        class Interfaces; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies> peer_advertise_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies> prefix_advertise_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull> explicit_null;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces> interfaces;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies : public ydk::Entity
{
    public:
        PeerAdvertisePolicies();
        ~PeerAdvertisePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerAdvertisePolicy; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy

        ydk::YList peer_advertise_policy;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy : public ydk::Entity
{
    public:
        PeerAdvertisePolicy();
        ~PeerAdvertisePolicy();

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
        ydk::YLeaf prefix_acl_name; //type: string

}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies : public ydk::Entity
{
    public:
        PrefixAdvertisePolicies();
        ~PrefixAdvertisePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixAdvertisePolicy; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy

        ydk::YList prefix_advertise_policy;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy : public ydk::Entity
{
    public:
        PrefixAdvertisePolicy();
        ~PrefixAdvertisePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_acl_name; //type: string
        ydk::YLeaf advertise_type; //type: MplsLdpLabelAdvertise
        ydk::YLeaf peer_acl_name; //type: string

}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull : public ydk::Entity
{
    public:
        ExplicitNull();
        ~ExplicitNull();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf explicit_null_type; //type: MplsLdpExpNull
        ydk::YLeaf prefix_acl_name; //type: string
        ydk::YLeaf peer_acl_name; //type: string

}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces : public ydk::Entity
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

        class Interface; //type: MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface

        ydk::YList interface;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface : public ydk::Entity
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

}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface


class MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate : public ydk::Entity
{
    public:
        Allocate();
        ~Allocate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocation_type; //type: MplsLdpLabelAllocation
        ydk::YLeaf prefix_acl_name; //type: string

}; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate


class MplsLdp::DefaultVrf::Afs::Af::Discovery : public ydk::Entity
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

        ydk::YLeaf transport_address; //type: string
        class TargetedHelloAccept; //type: MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept> targeted_hello_accept;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Discovery


class MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept : public ydk::Entity
{
    public:
        TargetedHelloAccept();
        ~TargetedHelloAccept();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_type; //type: MplsLdpTargetedAccept
        ydk::YLeaf peer_acl_name; //type: string

}; // MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept


class MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering : public ydk::Entity
{
    public:
        TrafficEngineering();
        ~TrafficEngineering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoTunnelMesh; //type: MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh> auto_tunnel_mesh;
        
}; // MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering


class MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh : public ydk::Entity
{
    public:
        AutoTunnelMesh();
        ~AutoTunnelMesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_all; //type: empty
        class GroupIds; //type: MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds> group_ids;
        
}; // MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh


class MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds : public ydk::Entity
{
    public:
        GroupIds();
        ~GroupIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupId; //type: MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId

        ydk::YList group_id;
        
}; // MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds


class MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId : public ydk::Entity
{
    public:
        GroupId();
        ~GroupId();

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

}; // MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId


class MplsLdp::DefaultVrf::Afs::Af::Neighbor : public ydk::Entity
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

        class Addresses; //type: MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses
        class SegmentRoutingPolicies; //type: MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses> addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies> segment_routing_policies;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Neighbor


class MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address

        ydk::YList address;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses


class MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address : public ydk::Entity
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

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf targeted; //type: empty

}; // MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address


class MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies : public ydk::Entity
{
    public:
        SegmentRoutingPolicies();
        ~SegmentRoutingPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRoutingPolicy; //type: MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy

        ydk::YList segment_routing_policy;
        
}; // MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies


class MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy : public ydk::Entity
{
    public:
        SegmentRoutingPolicy();
        ~SegmentRoutingPolicy();

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
        ydk::YLeaf targeted; //type: empty

}; // MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy


class MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol : public ydk::Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp> bgp;
        
}; // MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol


class MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As
        class AdvertiseTo; //type: MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As> as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo> advertise_to;
        
}; // MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp


class MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32

}; // MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As


class MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo : public ydk::Entity
{
    public:
        AdvertiseTo();
        ~AdvertiseTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MplsLdpAdvertiseBgpAcl
        ydk::YLeaf peer_acl_name; //type: string

}; // MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo


class MplsLdp::DefaultVrf::Global : public ydk::Entity
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

        ydk::YLeaf router_id; //type: string
        class Session; //type: MplsLdp::DefaultVrf::Global::Session
        class Neighbor; //type: MplsLdp::DefaultVrf::Global::Neighbor
        class GracefulRestart; //type: MplsLdp::DefaultVrf::Global::GracefulRestart

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::GracefulRestart> graceful_restart;
        
}; // MplsLdp::DefaultVrf::Global


class MplsLdp::DefaultVrf::Global::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Protection; //type: MplsLdp::DefaultVrf::Global::Session::Protection
        class DownstreamOnDemand; //type: MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Session::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand> downstream_on_demand;
        
}; // MplsLdp::DefaultVrf::Global::Session


class MplsLdp::DefaultVrf::Global::Session::Protection : public ydk::Entity
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

        ydk::YLeaf protection_type; //type: MplsLdpSessionProtection
        ydk::YLeaf peer_acl_name; //type: string
        ydk::YLeaf duration; //type: uint32

}; // MplsLdp::DefaultVrf::Global::Session::Protection


class MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand : public ydk::Entity
{
    public:
        DownstreamOnDemand();
        ~DownstreamOnDemand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: MplsLdpDownstreamOnDemand
        ydk::YLeaf peer_acl_name; //type: string

}; // MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand


class MplsLdp::DefaultVrf::Global::Neighbor : public ydk::Entity
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

        ydk::YLeaf password; //type: string
        class LdpIds; //type: MplsLdp::DefaultVrf::Global::Neighbor::LdpIds
        class DualStack; //type: MplsLdp::DefaultVrf::Global::Neighbor::DualStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::LdpIds> ldp_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::DualStack> dual_stack;
        
}; // MplsLdp::DefaultVrf::Global::Neighbor


class MplsLdp::DefaultVrf::Global::Neighbor::LdpIds : public ydk::Entity
{
    public:
        LdpIds();
        ~LdpIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LdpId; //type: MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId

        ydk::YList ldp_id;
        
}; // MplsLdp::DefaultVrf::Global::Neighbor::LdpIds


class MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId : public ydk::Entity
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
        ydk::YLeaf label_space_id; //type: uint32
        class Password; //type: MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password> password;
        
}; // MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId


class MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command_type; //type: MplsLdpNbrPassword
        ydk::YLeaf password; //type: string

}; // MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password


class MplsLdp::DefaultVrf::Global::Neighbor::DualStack : public ydk::Entity
{
    public:
        DualStack();
        ~DualStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tlv_compliance; //type: empty
        class TransportConnection; //type: MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection> transport_connection;
        
}; // MplsLdp::DefaultVrf::Global::Neighbor::DualStack


class MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection : public ydk::Entity
{
    public:
        TransportConnection();
        ~TransportConnection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf max_wait; //type: uint32
        class Prefer; //type: MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer> prefer;
        
}; // MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection


class MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer : public ydk::Entity
{
    public:
        Prefer();
        ~Prefer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: empty

}; // MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer


class MplsLdp::DefaultVrf::Global::GracefulRestart : public ydk::Entity
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

        class HelperPeer; //type: MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer> helper_peer;
        
}; // MplsLdp::DefaultVrf::Global::GracefulRestart


class MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer : public ydk::Entity
{
    public:
        HelperPeer();
        ~HelperPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maintain_on_local_reset; //type: string

}; // MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer


class MplsLdp::DefaultVrf::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: MplsLdp::DefaultVrf::Interfaces::Interface

        ydk::YList interface;
        
}; // MplsLdp::DefaultVrf::Interfaces


class MplsLdp::DefaultVrf::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Afs; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Afs
        class Global; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global> global;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface


class MplsLdp::DefaultVrf::Interfaces::Interface::Afs : public ydk::Entity
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

        class Af; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af

        ydk::YList af;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs


class MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MplsLdpafName
        ydk::YLeaf enable; //type: empty
        class Discovery; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery
        class Igp; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp
        class Mldp; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp> igp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp> mldp;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af


class MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery : public ydk::Entity
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

        class TransportAddress; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress> transport_address;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery


class MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress : public ydk::Entity
{
    public:
        TransportAddress();
        ~TransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: MplsLdpTransportAddress
        ydk::YLeaf address; //type: string

}; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress


class MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp : public ydk::Entity
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

        ydk::YLeaf disable_auto_config; //type: empty

}; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp


class MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp : public ydk::Entity
{
    public:
        Mldp();
        ~Mldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp


class MplsLdp::DefaultVrf::Interfaces::Interface::Global : public ydk::Entity
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

        class Discovery; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery
        class Igp; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp> igp;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface::Global


class MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery : public ydk::Entity
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

        ydk::YLeaf disable_quick_start; //type: empty
        class LinkHello; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello> link_hello;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery


class MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello : public ydk::Entity
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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf dual_stack; //type: MplsLdpafName
        ydk::YLeaf hold_time; //type: uint32

}; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello


class MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp : public ydk::Entity
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

        class Sync; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync> sync;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp


class MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync : public ydk::Entity
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

        class Delay; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay> delay;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync


class MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OnSessionUp; //type: MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp> on_session_up;
        
}; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay


class MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp : public ydk::Entity
{
    public:
        OnSessionUp();
        ~OnSessionUp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf timeout; //type: uint32

}; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp


class MplsLdp::Vrfs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Vrf; //type: MplsLdp::Vrfs::Vrf

        ydk::YList vrf;
        
}; // MplsLdp::Vrfs


class MplsLdp::Vrfs::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Global; //type: MplsLdp::Vrfs::Vrf::Global
        class Afs; //type: MplsLdp::Vrfs::Vrf::Afs
        class Interfaces; //type: MplsLdp::Vrfs::Vrf::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces> interfaces;
        
}; // MplsLdp::Vrfs::Vrf


class MplsLdp::Vrfs::Vrf::Global : public ydk::Entity
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

        ydk::YLeaf router_id; //type: string
        class Session; //type: MplsLdp::Vrfs::Vrf::Global::Session
        class Neighbor; //type: MplsLdp::Vrfs::Vrf::Global::Neighbor
        class GracefulRestart; //type: MplsLdp::Vrfs::Vrf::Global::GracefulRestart

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::GracefulRestart> graceful_restart;
        
}; // MplsLdp::Vrfs::Vrf::Global


class MplsLdp::Vrfs::Vrf::Global::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DownstreamOnDemand; //type: MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand> downstream_on_demand;
        
}; // MplsLdp::Vrfs::Vrf::Global::Session


class MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand : public ydk::Entity
{
    public:
        DownstreamOnDemand();
        ~DownstreamOnDemand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MplsLdpDownstreamOnDemand
        ydk::YLeaf peer_acl_name; //type: string

}; // MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand


class MplsLdp::Vrfs::Vrf::Global::Neighbor : public ydk::Entity
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

        ydk::YLeaf password; //type: string
        class DualStack; //type: MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack
        class LdpIds; //type: MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack> dual_stack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds> ldp_ids;
        
}; // MplsLdp::Vrfs::Vrf::Global::Neighbor


class MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack : public ydk::Entity
{
    public:
        DualStack();
        ~DualStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TransportConnection; //type: MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection> transport_connection;
        
}; // MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack


class MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection : public ydk::Entity
{
    public:
        TransportConnection();
        ~TransportConnection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_wait; //type: uint32
        class Prefer; //type: MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer> prefer;
        
}; // MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection


class MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer : public ydk::Entity
{
    public:
        Prefer();
        ~Prefer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: empty

}; // MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer


class MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds : public ydk::Entity
{
    public:
        LdpIds();
        ~LdpIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LdpId; //type: MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId

        ydk::YList ldp_id;
        
}; // MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds


class MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId : public ydk::Entity
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
        ydk::YLeaf label_space_id; //type: uint32
        class Password; //type: MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password> password;
        
}; // MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId


class MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command_type; //type: MplsLdpNbrPassword
        ydk::YLeaf password; //type: string

}; // MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password


class MplsLdp::Vrfs::Vrf::Global::GracefulRestart : public ydk::Entity
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

        class HelperPeer; //type: MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer> helper_peer;
        
}; // MplsLdp::Vrfs::Vrf::Global::GracefulRestart


class MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer : public ydk::Entity
{
    public:
        HelperPeer();
        ~HelperPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maintain_on_local_reset; //type: string

}; // MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer


class MplsLdp::Vrfs::Vrf::Afs : public ydk::Entity
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

        class Af; //type: MplsLdp::Vrfs::Vrf::Afs::Af

        ydk::YList af;
        
}; // MplsLdp::Vrfs::Vrf::Afs


class MplsLdp::Vrfs::Vrf::Afs::Af : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MplsLdpafName
        ydk::YLeaf enable; //type: empty
        class Discovery; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Discovery
        class Label; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label> label;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af


class MplsLdp::Vrfs::Vrf::Afs::Af::Discovery : public ydk::Entity
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

        ydk::YLeaf transport_address; //type: string

}; // MplsLdp::Vrfs::Vrf::Afs::Af::Discovery


class MplsLdp::Vrfs::Vrf::Afs::Af::Label : public ydk::Entity
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

        class Remote; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote
        class Local; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote> remote;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local> local;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accept; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept> accept;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerAcceptPolicies; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies> peer_accept_policies;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies : public ydk::Entity
{
    public:
        PeerAcceptPolicies();
        ~PeerAcceptPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerAcceptPolicy; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy

        ydk::YList peer_accept_policy;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy : public ydk::Entity
{
    public:
        PeerAcceptPolicy();
        ~PeerAcceptPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_space_id; //type: uint32
        class PeerAcceptPolicyData; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData
        class LsrId; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData> peer_accept_policy_data;
        ydk::YList lsr_id;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData : public ydk::Entity
{
    public:
        PeerAcceptPolicyData();
        ~PeerAcceptPolicyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_acl_name; //type: string

}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId : public ydk::Entity
{
    public:
        LsrId();
        ~LsrId();

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
        ydk::YLeaf prefix_acl_name; //type: string

}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf implicit_null_override; //type: string
        ydk::YLeaf default_route; //type: empty
        class Advertise; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise
        class Allocate; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise> advertise;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate> allocate;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        class PeerAdvertisePolicies; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies
        class Interfaces; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces
        class ExplicitNull; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies> peer_advertise_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull> explicit_null;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies : public ydk::Entity
{
    public:
        PeerAdvertisePolicies();
        ~PeerAdvertisePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerAdvertisePolicy; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy

        ydk::YList peer_advertise_policy;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy : public ydk::Entity
{
    public:
        PeerAdvertisePolicy();
        ~PeerAdvertisePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_space_id; //type: uint32
        class PeerAdvertisePolicyData; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData
        class LsrId; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData> peer_advertise_policy_data;
        ydk::YList lsr_id;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData : public ydk::Entity
{
    public:
        PeerAdvertisePolicyData();
        ~PeerAdvertisePolicyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_acl_name; //type: string

}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId : public ydk::Entity
{
    public:
        LsrId();
        ~LsrId();

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
        ydk::YLeaf prefix_acl_name; //type: string

}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces : public ydk::Entity
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

        class Interface; //type: MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface

        ydk::YList interface;
        
}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface : public ydk::Entity
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

}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull : public ydk::Entity
{
    public:
        ExplicitNull();
        ~ExplicitNull();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf explicit_null_type; //type: MplsLdpExpNull
        ydk::YLeaf prefix_acl_name; //type: string
        ydk::YLeaf peer_acl_name; //type: string

}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull


class MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate : public ydk::Entity
{
    public:
        Allocate();
        ~Allocate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocation_type; //type: MplsLdpLabelAllocation
        ydk::YLeaf prefix_acl_name; //type: string

}; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate


class MplsLdp::Vrfs::Vrf::Interfaces : public ydk::Entity
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

        class Interface; //type: MplsLdp::Vrfs::Vrf::Interfaces::Interface

        ydk::YList interface;
        
}; // MplsLdp::Vrfs::Vrf::Interfaces


class MplsLdp::Vrfs::Vrf::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        class Afs; //type: MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs> afs;
        
}; // MplsLdp::Vrfs::Vrf::Interfaces::Interface


class MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs : public ydk::Entity
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

        class Af; //type: MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af

        ydk::YList af;
        
}; // MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs


class MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MplsLdpafName
        ydk::YLeaf enable; //type: empty
        class Discovery; //type: MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery> discovery;
        
}; // MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af


class MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery : public ydk::Entity
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

        class TransportAddress; //type: MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress> transport_address;
        
}; // MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery


class MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress : public ydk::Entity
{
    public:
        TransportAddress();
        ~TransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: MplsLdpTransportAddress
        ydk::YLeaf address; //type: string

}; // MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress


class MplsLdp::Global : public ydk::Entity
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

        ydk::YLeaf disable_implicit_ipv4; //type: empty
        ydk::YLeaf ltrace_buf_multiplier; //type: uint32
        class EntropyLabel; //type: MplsLdp::Global::EntropyLabel
        class Session; //type: MplsLdp::Global::Session
        class Igp; //type: MplsLdp::Global::Igp
        class EnableLogging; //type: MplsLdp::Global::EnableLogging
        class Signalling; //type: MplsLdp::Global::Signalling
        class Nsr; //type: MplsLdp::Global::Nsr
        class GracefulRestart; //type: MplsLdp::Global::GracefulRestart
        class Discovery; //type: MplsLdp::Global::Discovery
        class Mldp; //type: MplsLdp::Global::Mldp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::EntropyLabel> entropy_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Igp> igp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::EnableLogging> enable_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Signalling> signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp> mldp;
        
}; // MplsLdp::Global


class MplsLdp::Global::EntropyLabel : public ydk::Entity
{
    public:
        EntropyLabel();
        ~EntropyLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty

}; // MplsLdp::Global::EntropyLabel


class MplsLdp::Global::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hold_time; //type: uint32
        class BackoffTime; //type: MplsLdp::Global::Session::BackoffTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Session::BackoffTime> backoff_time;
        
}; // MplsLdp::Global::Session


class MplsLdp::Global::Session::BackoffTime : public ydk::Entity
{
    public:
        BackoffTime();
        ~BackoffTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf initial_backoff_time; //type: uint32
        ydk::YLeaf max_backoff_time; //type: uint32

}; // MplsLdp::Global::Session::BackoffTime


class MplsLdp::Global::Igp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Sync; //type: MplsLdp::Global::Igp::Sync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Igp::Sync> sync;
        
}; // MplsLdp::Global::Igp


class MplsLdp::Global::Igp::Sync : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Delay; //type: MplsLdp::Global::Igp::Sync::Delay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Igp::Sync::Delay> delay;
        
}; // MplsLdp::Global::Igp::Sync


class MplsLdp::Global::Igp::Sync::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf on_session_up; //type: uint32
        ydk::YLeaf on_proc_restart; //type: uint32

}; // MplsLdp::Global::Igp::Sync::Delay


class MplsLdp::Global::EnableLogging : public ydk::Entity
{
    public:
        EnableLogging();
        ~EnableLogging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nsr; //type: empty
        ydk::YLeaf neighbor_changes; //type: empty
        ydk::YLeaf adjacency; //type: empty
        ydk::YLeaf session_protection; //type: empty
        ydk::YLeaf gr_session_changes; //type: empty

}; // MplsLdp::Global::EnableLogging


class MplsLdp::Global::Signalling : public ydk::Entity
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

        ydk::YLeaf dscp; //type: uint32

}; // MplsLdp::Global::Signalling


class MplsLdp::Global::Nsr : public ydk::Entity
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

        ydk::YLeaf enable; //type: empty

}; // MplsLdp::Global::Nsr


class MplsLdp::Global::GracefulRestart : public ydk::Entity
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

        ydk::YLeaf reconnect_timeout; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf forwarding_hold_time; //type: uint32

}; // MplsLdp::Global::GracefulRestart


class MplsLdp::Global::Discovery : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable_instance_tlv; //type: empty
        ydk::YLeaf disable_quick_start; //type: empty
        class LinkHello; //type: MplsLdp::Global::Discovery::LinkHello
        class TargetedHello; //type: MplsLdp::Global::Discovery::TargetedHello

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Discovery::LinkHello> link_hello;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Discovery::TargetedHello> targeted_hello;
        
}; // MplsLdp::Global::Discovery


class MplsLdp::Global::Discovery::LinkHello : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf hold_time; //type: uint32

}; // MplsLdp::Global::Discovery::LinkHello


class MplsLdp::Global::Discovery::TargetedHello : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf hold_time; //type: uint32

}; // MplsLdp::Global::Discovery::TargetedHello


class MplsLdp::Global::Mldp : public ydk::Entity
{
    public:
        Mldp();
        ~Mldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty
        class Vrfs; //type: MplsLdp::Global::Mldp::Vrfs
        class DefaultVrf; //type: MplsLdp::Global::Mldp::DefaultVrf
        class MldpGlobal; //type: MplsLdp::Global::Mldp::MldpGlobal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::MldpGlobal> mldp_global;
        
}; // MplsLdp::Global::Mldp


class MplsLdp::Global::Mldp::Vrfs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Vrf; //type: MplsLdp::Global::Mldp::Vrfs::Vrf

        ydk::YList vrf;
        
}; // MplsLdp::Global::Mldp::Vrfs


class MplsLdp::Global::Mldp::Vrfs::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Afs; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs> afs;
        
}; // MplsLdp::Global::Mldp::Vrfs::Vrf


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs : public ydk::Entity
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

        class Af; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af

        ydk::YList af;
        
}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MplsLdpafName
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mldp_rib_unicast_always; //type: empty
        class RecursiveForwarding; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding
        class MldpRecursiveFec; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec
        class NeighborPolicies; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies
        class MoFrr; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr
        class MakeBeforeBreak; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak
        class Csc; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding> recursive_forwarding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec> mldp_recursive_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies> neighbor_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr> mo_frr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak> make_before_break;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc> csc;
        
}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding : public ydk::Entity
{
    public:
        RecursiveForwarding();
        ~RecursiveForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf policy; //type: string

}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec : public ydk::Entity
{
    public:
        MldpRecursiveFec();
        ~MldpRecursiveFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf policy; //type: string

}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies : public ydk::Entity
{
    public:
        NeighborPolicies();
        ~NeighborPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborPolicy; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy

        ydk::YList neighbor_policy;
        
}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy : public ydk::Entity
{
    public:
        NeighborPolicy();
        ~NeighborPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf root_address; //type: string
        ydk::YLeaf policy_mode; //type: MldpPolicyMode
        ydk::YLeaf route_policy; //type: string

}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr : public ydk::Entity
{
    public:
        MoFrr();
        ~MoFrr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf policy; //type: string

}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak : public ydk::Entity
{
    public:
        MakeBeforeBreak();
        ~MakeBeforeBreak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: string
        class Signaling; //type: MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling> signaling;
        
}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling : public ydk::Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forward_delay; //type: uint32
        ydk::YLeaf delete_delay; //type: uint32

}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling


class MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc : public ydk::Entity
{
    public:
        Csc();
        ~Csc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc


class MplsLdp::Global::Mldp::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Afs; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs> afs;
        
}; // MplsLdp::Global::Mldp::DefaultVrf


class MplsLdp::Global::Mldp::DefaultVrf::Afs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Af; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af

        ydk::YList af;
        
}; // MplsLdp::Global::Mldp::DefaultVrf::Afs


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: MplsLdpafName
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mldp_rib_unicast_always; //type: empty
        class RecursiveForwarding; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding
        class MldpRecursiveFec; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec
        class NeighborPolicies; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies
        class MoFrr; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr
        class MakeBeforeBreak; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak
        class Csc; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding> recursive_forwarding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec> mldp_recursive_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies> neighbor_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr> mo_frr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak> make_before_break;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc> csc;
        
}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding : public ydk::Entity
{
    public:
        RecursiveForwarding();
        ~RecursiveForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf policy; //type: string

}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec : public ydk::Entity
{
    public:
        MldpRecursiveFec();
        ~MldpRecursiveFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf policy; //type: string

}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies : public ydk::Entity
{
    public:
        NeighborPolicies();
        ~NeighborPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborPolicy; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy

        ydk::YList neighbor_policy;
        
}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy : public ydk::Entity
{
    public:
        NeighborPolicy();
        ~NeighborPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf root_address; //type: string
        ydk::YLeaf policy_mode; //type: MldpPolicyMode
        ydk::YLeaf route_policy; //type: string

}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr : public ydk::Entity
{
    public:
        MoFrr();
        ~MoFrr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf policy; //type: string

}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak : public ydk::Entity
{
    public:
        MakeBeforeBreak();
        ~MakeBeforeBreak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: string
        class Signaling; //type: MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling> signaling;
        
}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling : public ydk::Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forward_delay; //type: uint32
        ydk::YLeaf delete_delay; //type: uint32

}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling


class MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc : public ydk::Entity
{
    public:
        Csc();
        ~Csc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc


class MplsLdp::Global::Mldp::MldpGlobal : public ydk::Entity
{
    public:
        MldpGlobal();
        ~MldpGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Logging; //type: MplsLdp::Global::Mldp::MldpGlobal::Logging

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::MldpGlobal::Logging> logging;
        
}; // MplsLdp::Global::Mldp::MldpGlobal


class MplsLdp::Global::Mldp::MldpGlobal::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf notifications; //type: empty

}; // MplsLdp::Global::Mldp::MldpGlobal::Logging

class MplsLdpNbrPassword : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf specified;

};

class MplsLdpLabelAllocation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acl;
        static const ydk::Enum::YLeaf host;

};

class MplsLdpDownstreamOnDemand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer_acl;

};

class MldpPolicyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

};

class MplsLdpTargetedAccept : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf from;

};

class MplsLdpExpNull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf for_;
        static const ydk::Enum::YLeaf to;
        static const ydk::Enum::YLeaf for_to;

};

class MplsLdpafName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class MplsLdpTransportAddress : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf address;

};

class MplsLdpSessionProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf for_;
        static const ydk::Enum::YLeaf all_with_duration;
        static const ydk::Enum::YLeaf for_with_duration;
        static const ydk::Enum::YLeaf all_with_forever;
        static const ydk::Enum::YLeaf for_with_forever;

};

class MplsLdpLabelAdvertise : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf for_;
        static const ydk::Enum::YLeaf for_to;

};

class MplsLdpAdvertiseBgpAcl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer_acl;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_CFG_ */

