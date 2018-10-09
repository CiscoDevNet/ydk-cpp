#ifndef _CISCO_IOS_XR_IPV4_PIM_CFG_0_
#define _CISCO_IOS_XR_IPV4_PIM_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_cfg {

class Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

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

        class Vrfs; //type: Pim::Vrfs
        class DefaultContext; //type: Pim::DefaultContext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext> default_context;
        
}; // Pim


class Pim::Vrfs : public ydk::Entity
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

        class Vrf; //type: Pim::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Pim::Vrfs


class Pim::Vrfs::Vrf : public ydk::Entity
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
        class Ipv4; //type: Pim::Vrfs::Vrf::Ipv4
        class Ipv6; //type: Pim::Vrfs::Vrf::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6> ipv6;
        
}; // Pim::Vrfs::Vrf


class Pim::Vrfs::Vrf::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_check_on_receive; //type: empty
        ydk::YLeaf old_register_checksum; //type: empty
        ydk::YLeaf neighbor_filter; //type: string
        ydk::YLeaf spt_threshold_infinity; //type: string
        ydk::YLeaf log_neighbor_changes; //type: empty
        ydk::YLeaf register_source; //type: string
        ydk::YLeaf accept_register; //type: string
        ydk::YLeaf suppress_rpf_prunes; //type: empty
        ydk::YLeaf ssm_allow_override; //type: empty
        ydk::YLeaf multipath; //type: PimMultipath
        ydk::YLeaf rp_static_deny; //type: string
        ydk::YLeaf suppress_data_registers; //type: empty
        ydk::YLeaf neighbor_check_on_send; //type: empty
        ydk::YLeaf auto_rp_disable; //type: empty
        class SparseModeRpAddresses; //type: Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses
        class InheritableDefaults; //type: Pim::Vrfs::Vrf::Ipv4::InheritableDefaults
        class Rpf; //type: Pim::Vrfs::Vrf::Ipv4::Rpf
        class Maximum; //type: Pim::Vrfs::Vrf::Ipv4::Maximum
        class SgExpiryTimer; //type: Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer
        class RpfVectorEnable; //type: Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable
        class Ssm; //type: Pim::Vrfs::Vrf::Ipv4::Ssm
        class Injects; //type: Pim::Vrfs::Vrf::Ipv4::Injects
        class BidirRpAddresses; //type: Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses
        class Bsr; //type: Pim::Vrfs::Vrf::Ipv4::Bsr
        class Mofrr; //type: Pim::Vrfs::Vrf::Ipv4::Mofrr
        class Paths; //type: Pim::Vrfs::Vrf::Ipv4::Paths
        class AllowRp; //type: Pim::Vrfs::Vrf::Ipv4::AllowRp
        class Convergence; //type: Pim::Vrfs::Vrf::Ipv4::Convergence
        class Interfaces; //type: Pim::Vrfs::Vrf::Ipv4::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses> sparse_mode_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Rpf> rpf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer> sg_expiry_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable> rpf_vector_enable; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Ssm> ssm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Injects> injects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses> bidir_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr> bsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Mofrr> mofrr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Paths> paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::AllowRp> allow_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Convergence> convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces> interfaces;
        
}; // Pim::Vrfs::Vrf::Ipv4


class Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses : public ydk::Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SparseModeRpAddress; //type: Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress

        ydk::YList sparse_mode_rp_address;
        
}; // Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses


class Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress : public ydk::Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress


class Pim::Vrfs::Vrf::Ipv4::InheritableDefaults : public ydk::Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf convergence_timeout; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf propagation_delay; //type: uint32
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf join_prune_mtu; //type: uint32
        ydk::YLeaf jp_interval; //type: uint32
        ydk::YLeaf override_interval; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::InheritableDefaults


class Pim::Vrfs::Vrf::Ipv4::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy; //type: string

}; // Pim::Vrfs::Vrf::Ipv4::Rpf


class Pim::Vrfs::Vrf::Ipv4::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupMappingsAutoRp; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp
        class BsrGroupMappings; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings
        class RegisterStates; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates
        class RouteInterfaces; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces
        class BsrCandidateRpCache; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache
        class Routes; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::Routes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings> bsr_group_mappings; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates> register_states; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces> route_interfaces; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::Routes> routes; // presence node
        
}; // Pim::Vrfs::Vrf::Ipv4::Maximum


class Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp : public ydk::Entity
{
    public:
        GroupMappingsAutoRp();
        ~GroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_group_ranges_auto_rp; //type: uint32
        ydk::YLeaf threshold_group_ranges_auto_rp; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp


class Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings : public ydk::Entity
{
    public:
        BsrGroupMappings();
        ~BsrGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bsr_maximum_group_ranges; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings


class Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates : public ydk::Entity
{
    public:
        RegisterStates();
        ~RegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_register_states; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates


class Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces : public ydk::Entity
{
    public:
        RouteInterfaces();
        ~RouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_route_interfaces; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces


class Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache : public ydk::Entity
{
    public:
        BsrCandidateRpCache();
        ~BsrCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bsr_maximum_candidate_rp_cache; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache


class Pim::Vrfs::Vrf::Ipv4::Maximum::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_routes; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Maximum::Routes


class Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer : public ydk::Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

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
        ydk::YLeaf access_list_name; //type: string

}; // Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer


class Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable : public ydk::Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

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
        ydk::YLeaf allow_ebgp; //type: empty
        ydk::YLeaf disable_ibgp; //type: empty
        ydk::YLeaf use_standard_encoding; //type: empty

}; // Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable


class Pim::Vrfs::Vrf::Ipv4::Ssm : public ydk::Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf range; //type: string

}; // Pim::Vrfs::Vrf::Ipv4::Ssm


class Pim::Vrfs::Vrf::Ipv4::Injects : public ydk::Entity
{
    public:
        Injects();
        ~Injects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inject; //type: Pim::Vrfs::Vrf::Ipv4::Injects::Inject

        ydk::YList inject;
        
}; // Pim::Vrfs::Vrf::Ipv4::Injects


class Pim::Vrfs::Vrf::Ipv4::Injects::Inject : public ydk::Entity
{
    public:
        Inject();
        ~Inject();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeafList rpf_proxy_address; //type: list of  string

}; // Pim::Vrfs::Vrf::Ipv4::Injects::Inject


class Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses : public ydk::Entity
{
    public:
        BidirRpAddresses();
        ~BidirRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BidirRpAddress; //type: Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress

        ydk::YList bidir_rp_address;
        
}; // Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses


class Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress : public ydk::Entity
{
    public:
        BidirRpAddress();
        ~BidirRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress


class Pim::Vrfs::Vrf::Ipv4::Bsr : public ydk::Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateBsr; //type: Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr
        class CandidateRps; //type: Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr> candidate_bsr; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps> candidate_rps;
        
}; // Pim::Vrfs::Vrf::Ipv4::Bsr


class Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr : public ydk::Entity
{
    public:
        CandidateBsr();
        ~CandidateBsr();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf priority; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr


class Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps : public ydk::Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateRp; //type: Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp

        ydk::YList candidate_rp;
        
}; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps


class Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp : public ydk::Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

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
        ydk::YLeaf mode; //type: PimProtocolMode
        ydk::YLeaf group_list; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp


class Pim::Vrfs::Vrf::Ipv4::Mofrr : public ydk::Entity
{
    public:
        Mofrr();
        ~Mofrr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rib; //type: string
        ydk::YLeaf non_revertive; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf flow; //type: string
        class CloneJoins; //type: Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneJoins
        class CloneSources; //type: Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneSources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneJoins> clone_joins;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneSources> clone_sources;
        
}; // Pim::Vrfs::Vrf::Ipv4::Mofrr


class Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneJoins : public ydk::Entity
{
    public:
        CloneJoins();
        ~CloneJoins();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CloneJoin; //type: Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneJoins::CloneJoin

        ydk::YList clone_join;
        
}; // Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneJoins


class Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneJoins::CloneJoin : public ydk::Entity
{
    public:
        CloneJoin();
        ~CloneJoin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf primary; //type: string
        ydk::YLeaf backup; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneJoins::CloneJoin


class Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneSources : public ydk::Entity
{
    public:
        CloneSources();
        ~CloneSources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CloneSource; //type: Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneSources::CloneSource

        ydk::YList clone_source;
        
}; // Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneSources


class Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneSources::CloneSource : public ydk::Entity
{
    public:
        CloneSource();
        ~CloneSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf primary; //type: string
        ydk::YLeaf backup; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Pim::Vrfs::Vrf::Ipv4::Mofrr::CloneSources::CloneSource


class Pim::Vrfs::Vrf::Ipv4::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: Pim::Vrfs::Vrf::Ipv4::Paths::Path

        ydk::YList path;
        
}; // Pim::Vrfs::Vrf::Ipv4::Paths


class Pim::Vrfs::Vrf::Ipv4::Paths::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeafList rpf_proxy_address; //type: list of  string

}; // Pim::Vrfs::Vrf::Ipv4::Paths::Path


class Pim::Vrfs::Vrf::Ipv4::AllowRp : public ydk::Entity
{
    public:
        AllowRp();
        ~AllowRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_list_name; //type: string
        ydk::YLeaf group_list_name; //type: string

}; // Pim::Vrfs::Vrf::Ipv4::AllowRp


class Pim::Vrfs::Vrf::Ipv4::Convergence : public ydk::Entity
{
    public:
        Convergence();
        ~Convergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpf_conflict_join_delay; //type: uint32
        ydk::YLeaf link_down_prune_delay; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv4::Convergence


class Pim::Vrfs::Vrf::Ipv4::Interfaces : public ydk::Entity
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

        class Interface; //type: Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface

        ydk::YList interface;
        
}; // Pim::Vrfs::Vrf::Ipv4::Interfaces


class Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf neighbor_filter; //type: string
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf bsr_border; //type: boolean
        ydk::YLeaf propagation_delay; //type: uint32
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf join_prune_mtu; //type: uint32
        ydk::YLeaf interface_enable; //type: boolean
        ydk::YLeaf jp_interval; //type: uint32
        ydk::YLeaf override_interval; //type: uint32
        class MaximumRoutes; //type: Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes
        class Bfd; //type: Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes> maximum_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd> bfd;
        
}; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface


class Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes : public ydk::Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes


class Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf enable; //type: boolean

}; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd


class Pim::Vrfs::Vrf::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_check_on_receive; //type: empty
        ydk::YLeaf old_register_checksum; //type: empty
        ydk::YLeaf neighbor_filter; //type: string
        ydk::YLeaf spt_threshold_infinity; //type: string
        ydk::YLeaf log_neighbor_changes; //type: empty
        ydk::YLeaf register_source; //type: string
        ydk::YLeaf accept_register; //type: string
        ydk::YLeaf embedded_rp_disable; //type: empty
        ydk::YLeaf suppress_rpf_prunes; //type: empty
        ydk::YLeaf ssm_allow_override; //type: empty
        ydk::YLeaf multipath; //type: PimMultipath
        ydk::YLeaf rp_static_deny; //type: string
        ydk::YLeaf suppress_data_registers; //type: empty
        ydk::YLeaf neighbor_check_on_send; //type: empty
        class SparseModeRpAddresses; //type: Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses
        class InheritableDefaults; //type: Pim::Vrfs::Vrf::Ipv6::InheritableDefaults
        class Rpf; //type: Pim::Vrfs::Vrf::Ipv6::Rpf
        class Maximum; //type: Pim::Vrfs::Vrf::Ipv6::Maximum
        class SgExpiryTimer; //type: Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer
        class RpfVectorEnable; //type: Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable
        class Ssm; //type: Pim::Vrfs::Vrf::Ipv6::Ssm
        class BidirRpAddresses; //type: Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses
        class Bsr; //type: Pim::Vrfs::Vrf::Ipv6::Bsr
        class AllowRp; //type: Pim::Vrfs::Vrf::Ipv6::AllowRp
        class EmbeddedRpAddresses; //type: Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses
        class Convergence; //type: Pim::Vrfs::Vrf::Ipv6::Convergence
        class Interfaces; //type: Pim::Vrfs::Vrf::Ipv6::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses> sparse_mode_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Rpf> rpf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer> sg_expiry_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable> rpf_vector_enable; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Ssm> ssm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses> bidir_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr> bsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::AllowRp> allow_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses> embedded_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Convergence> convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces> interfaces;
        
}; // Pim::Vrfs::Vrf::Ipv6


class Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses : public ydk::Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SparseModeRpAddress; //type: Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress

        ydk::YList sparse_mode_rp_address;
        
}; // Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses


class Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress : public ydk::Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress


class Pim::Vrfs::Vrf::Ipv6::InheritableDefaults : public ydk::Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf convergence_timeout; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf propagation_delay; //type: uint32
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf join_prune_mtu; //type: uint32
        ydk::YLeaf jp_interval; //type: uint32
        ydk::YLeaf override_interval; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::InheritableDefaults


class Pim::Vrfs::Vrf::Ipv6::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy; //type: string

}; // Pim::Vrfs::Vrf::Ipv6::Rpf


class Pim::Vrfs::Vrf::Ipv6::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupMappingsAutoRp; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp
        class BsrGroupMappings; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings
        class RegisterStates; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates
        class RouteInterfaces; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces
        class BsrCandidateRpCache; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache
        class Routes; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::Routes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings> bsr_group_mappings; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates> register_states; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces> route_interfaces; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::Routes> routes; // presence node
        
}; // Pim::Vrfs::Vrf::Ipv6::Maximum


class Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp : public ydk::Entity
{
    public:
        GroupMappingsAutoRp();
        ~GroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_group_ranges_auto_rp; //type: uint32
        ydk::YLeaf threshold_group_ranges_auto_rp; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp


class Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings : public ydk::Entity
{
    public:
        BsrGroupMappings();
        ~BsrGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bsr_maximum_group_ranges; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings


class Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates : public ydk::Entity
{
    public:
        RegisterStates();
        ~RegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_register_states; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates


class Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces : public ydk::Entity
{
    public:
        RouteInterfaces();
        ~RouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_route_interfaces; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces


class Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache : public ydk::Entity
{
    public:
        BsrCandidateRpCache();
        ~BsrCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bsr_maximum_candidate_rp_cache; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache


class Pim::Vrfs::Vrf::Ipv6::Maximum::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_routes; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Maximum::Routes


class Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer : public ydk::Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

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
        ydk::YLeaf access_list_name; //type: string

}; // Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer


class Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable : public ydk::Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

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
        ydk::YLeaf allow_ebgp; //type: empty
        ydk::YLeaf disable_ibgp; //type: empty
        ydk::YLeaf use_standard_encoding; //type: empty

}; // Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable


class Pim::Vrfs::Vrf::Ipv6::Ssm : public ydk::Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf range; //type: string

}; // Pim::Vrfs::Vrf::Ipv6::Ssm


class Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses : public ydk::Entity
{
    public:
        BidirRpAddresses();
        ~BidirRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BidirRpAddress; //type: Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress

        ydk::YList bidir_rp_address;
        
}; // Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses


class Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress : public ydk::Entity
{
    public:
        BidirRpAddress();
        ~BidirRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress


class Pim::Vrfs::Vrf::Ipv6::Bsr : public ydk::Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateBsr; //type: Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr
        class CandidateRps; //type: Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr> candidate_bsr; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps> candidate_rps;
        
}; // Pim::Vrfs::Vrf::Ipv6::Bsr


class Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr : public ydk::Entity
{
    public:
        CandidateBsr();
        ~CandidateBsr();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf priority; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr


class Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps : public ydk::Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateRp; //type: Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp

        ydk::YList candidate_rp;
        
}; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps


class Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp : public ydk::Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

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
        ydk::YLeaf mode; //type: PimProtocolMode
        ydk::YLeaf group_list; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp


class Pim::Vrfs::Vrf::Ipv6::AllowRp : public ydk::Entity
{
    public:
        AllowRp();
        ~AllowRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_list_name; //type: string
        ydk::YLeaf group_list_name; //type: string

}; // Pim::Vrfs::Vrf::Ipv6::AllowRp


class Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses : public ydk::Entity
{
    public:
        EmbeddedRpAddresses();
        ~EmbeddedRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EmbeddedRpAddress; //type: Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress

        ydk::YList embedded_rp_address;
        
}; // Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses


class Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress : public ydk::Entity
{
    public:
        EmbeddedRpAddress();
        ~EmbeddedRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string

}; // Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress


class Pim::Vrfs::Vrf::Ipv6::Convergence : public ydk::Entity
{
    public:
        Convergence();
        ~Convergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpf_conflict_join_delay; //type: uint32
        ydk::YLeaf link_down_prune_delay; //type: uint32

}; // Pim::Vrfs::Vrf::Ipv6::Convergence


class Pim::Vrfs::Vrf::Ipv6::Interfaces : public ydk::Entity
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

        class Interface; //type: Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface

        ydk::YList interface;
        
}; // Pim::Vrfs::Vrf::Ipv6::Interfaces


class Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf neighbor_filter; //type: string
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf bsr_border; //type: boolean
        ydk::YLeaf propagation_delay; //type: uint32
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf join_prune_mtu; //type: uint32
        ydk::YLeaf interface_enable; //type: boolean
        ydk::YLeaf jp_interval; //type: uint32
        ydk::YLeaf override_interval; //type: uint32
        class MaximumRoutes; //type: Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes
        class Bfd; //type: Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes> maximum_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd> bfd;
        
}; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface


class Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes : public ydk::Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes


class Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf enable; //type: boolean

}; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd


class Pim::DefaultContext : public ydk::Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6; //type: Pim::DefaultContext::Ipv6
        class Ipv4; //type: Pim::DefaultContext::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4> ipv4;
        
}; // Pim::DefaultContext


class Pim::DefaultContext::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf neighbor_check_on_receive; //type: empty
        ydk::YLeaf old_register_checksum; //type: empty
        ydk::YLeaf neighbor_filter; //type: string
        ydk::YLeaf spt_threshold_infinity; //type: string
        ydk::YLeaf log_neighbor_changes; //type: empty
        ydk::YLeaf register_source; //type: string
        ydk::YLeaf accept_register; //type: string
        ydk::YLeaf embedded_rp_disable; //type: empty
        ydk::YLeaf suppress_rpf_prunes; //type: empty
        ydk::YLeaf ssm_allow_override; //type: empty
        ydk::YLeaf multipath; //type: PimMultipath
        ydk::YLeaf rp_static_deny; //type: string
        ydk::YLeaf suppress_data_registers; //type: empty
        ydk::YLeaf neighbor_check_on_send; //type: empty
        class Interfaces; //type: Pim::DefaultContext::Ipv6::Interfaces
        class SparseModeRpAddresses; //type: Pim::DefaultContext::Ipv6::SparseModeRpAddresses
        class InheritableDefaults; //type: Pim::DefaultContext::Ipv6::InheritableDefaults
        class Rpf; //type: Pim::DefaultContext::Ipv6::Rpf
        class SgExpiryTimer; //type: Pim::DefaultContext::Ipv6::SgExpiryTimer
        class RpfVectorEnable; //type: Pim::DefaultContext::Ipv6::RpfVectorEnable
        class Nsf; //type: Pim::DefaultContext::Ipv6::Nsf
        class Maximum; //type: Pim::DefaultContext::Ipv6::Maximum
        class Ssm; //type: Pim::DefaultContext::Ipv6::Ssm
        class BidirRpAddresses; //type: Pim::DefaultContext::Ipv6::BidirRpAddresses
        class Bsr; //type: Pim::DefaultContext::Ipv6::Bsr
        class AllowRp; //type: Pim::DefaultContext::Ipv6::AllowRp
        class EmbeddedRpAddresses; //type: Pim::DefaultContext::Ipv6::EmbeddedRpAddresses
        class Convergence; //type: Pim::DefaultContext::Ipv6::Convergence

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::SparseModeRpAddresses> sparse_mode_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Rpf> rpf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::SgExpiryTimer> sg_expiry_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::RpfVectorEnable> rpf_vector_enable; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Ssm> ssm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::BidirRpAddresses> bidir_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr> bsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::AllowRp> allow_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::EmbeddedRpAddresses> embedded_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Convergence> convergence;
        
}; // Pim::DefaultContext::Ipv6


class Pim::DefaultContext::Ipv6::Interfaces : public ydk::Entity
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

        class Interface; //type: Pim::DefaultContext::Ipv6::Interfaces::Interface

        ydk::YList interface;
        
}; // Pim::DefaultContext::Ipv6::Interfaces


class Pim::DefaultContext::Ipv6::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf neighbor_filter; //type: string
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf bsr_border; //type: boolean
        ydk::YLeaf propagation_delay; //type: uint32
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf join_prune_mtu; //type: uint32
        ydk::YLeaf interface_enable; //type: boolean
        ydk::YLeaf jp_interval; //type: uint32
        ydk::YLeaf override_interval; //type: uint32
        class MaximumRoutes; //type: Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes
        class Bfd; //type: Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes> maximum_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd> bfd;
        
}; // Pim::DefaultContext::Ipv6::Interfaces::Interface


class Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes : public ydk::Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes


class Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf enable; //type: boolean

}; // Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd


class Pim::DefaultContext::Ipv6::SparseModeRpAddresses : public ydk::Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SparseModeRpAddress; //type: Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress

        ydk::YList sparse_mode_rp_address;
        
}; // Pim::DefaultContext::Ipv6::SparseModeRpAddresses


class Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress : public ydk::Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress


class Pim::DefaultContext::Ipv6::InheritableDefaults : public ydk::Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf convergence_timeout; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf propagation_delay; //type: uint32
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf join_prune_mtu; //type: uint32
        ydk::YLeaf jp_interval; //type: uint32
        ydk::YLeaf override_interval; //type: uint32

}; // Pim::DefaultContext::Ipv6::InheritableDefaults


class Pim::DefaultContext::Ipv6::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_policy; //type: string

}; // Pim::DefaultContext::Ipv6::Rpf


class Pim::DefaultContext::Ipv6::SgExpiryTimer : public ydk::Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

        bool has_data() const override;
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
        ydk::YLeaf access_list_name; //type: string

}; // Pim::DefaultContext::Ipv6::SgExpiryTimer


class Pim::DefaultContext::Ipv6::RpfVectorEnable : public ydk::Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

        bool has_data() const override;
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
        ydk::YLeaf allow_ebgp; //type: empty
        ydk::YLeaf disable_ibgp; //type: empty
        ydk::YLeaf use_standard_encoding; //type: empty

}; // Pim::DefaultContext::Ipv6::RpfVectorEnable


class Pim::DefaultContext::Ipv6::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lifetime; //type: uint32

}; // Pim::DefaultContext::Ipv6::Nsf


class Pim::DefaultContext::Ipv6::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf global_low_priority_packet_queue; //type: uint32
        ydk::YLeaf global_high_priority_packet_queue; //type: uint32
        class BsrGlobalGroupMappings; //type: Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings
        class GlobalRoutes; //type: Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes
        class GlobalGroupMappingsAutoRp; //type: Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp
        class BsrGlobalCandidateRpCache; //type: Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache
        class GlobalRegisterStates; //type: Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates
        class GlobalRouteInterfaces; //type: Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces
        class GroupMappingsAutoRp; //type: Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp
        class BsrGroupMappings; //type: Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings
        class RegisterStates; //type: Pim::DefaultContext::Ipv6::Maximum::RegisterStates
        class RouteInterfaces; //type: Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces
        class BsrCandidateRpCache; //type: Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache
        class Routes; //type: Pim::DefaultContext::Ipv6::Maximum::Routes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings> bsr_global_group_mappings; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes> global_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp> global_group_mappings_auto_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache> bsr_global_candidate_rp_cache; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates> global_register_states; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces> global_route_interfaces; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings> bsr_group_mappings; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::RegisterStates> register_states; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces> route_interfaces; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::Routes> routes; // presence node
        
}; // Pim::DefaultContext::Ipv6::Maximum


class Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings : public ydk::Entity
{
    public:
        BsrGlobalGroupMappings();
        ~BsrGlobalGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsr_maximum_global_group_mappings; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings


class Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes : public ydk::Entity
{
    public:
        GlobalRoutes();
        ~GlobalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_routes; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes


class Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp : public ydk::Entity
{
    public:
        GlobalGroupMappingsAutoRp();
        ~GlobalGroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_global_group_ranges_auto_rp; //type: uint32
        ydk::YLeaf threshold_global_group_ranges_auto_rp; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp


class Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache : public ydk::Entity
{
    public:
        BsrGlobalCandidateRpCache();
        ~BsrGlobalCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsr_maximum_global_candidate_rp_cache; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache


class Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates : public ydk::Entity
{
    public:
        GlobalRegisterStates();
        ~GlobalRegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_register_states; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates


class Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces : public ydk::Entity
{
    public:
        GlobalRouteInterfaces();
        ~GlobalRouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_route_interfaces; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces


class Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp : public ydk::Entity
{
    public:
        GroupMappingsAutoRp();
        ~GroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_group_ranges_auto_rp; //type: uint32
        ydk::YLeaf threshold_group_ranges_auto_rp; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp


class Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings : public ydk::Entity
{
    public:
        BsrGroupMappings();
        ~BsrGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsr_maximum_group_ranges; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings


class Pim::DefaultContext::Ipv6::Maximum::RegisterStates : public ydk::Entity
{
    public:
        RegisterStates();
        ~RegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_register_states; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::RegisterStates


class Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces : public ydk::Entity
{
    public:
        RouteInterfaces();
        ~RouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_route_interfaces; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces


class Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache : public ydk::Entity
{
    public:
        BsrCandidateRpCache();
        ~BsrCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsr_maximum_candidate_rp_cache; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache


class Pim::DefaultContext::Ipv6::Maximum::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_routes; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv6::Maximum::Routes


class Pim::DefaultContext::Ipv6::Ssm : public ydk::Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf range; //type: string

}; // Pim::DefaultContext::Ipv6::Ssm


class Pim::DefaultContext::Ipv6::BidirRpAddresses : public ydk::Entity
{
    public:
        BidirRpAddresses();
        ~BidirRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BidirRpAddress; //type: Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress

        ydk::YList bidir_rp_address;
        
}; // Pim::DefaultContext::Ipv6::BidirRpAddresses


class Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress : public ydk::Entity
{
    public:
        BidirRpAddress();
        ~BidirRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress


class Pim::DefaultContext::Ipv6::Bsr : public ydk::Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CandidateBsr; //type: Pim::DefaultContext::Ipv6::Bsr::CandidateBsr
        class CandidateRps; //type: Pim::DefaultContext::Ipv6::Bsr::CandidateRps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateBsr> candidate_bsr; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateRps> candidate_rps;
        
}; // Pim::DefaultContext::Ipv6::Bsr


class Pim::DefaultContext::Ipv6::Bsr::CandidateBsr : public ydk::Entity
{
    public:
        CandidateBsr();
        ~CandidateBsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf priority; //type: uint32

}; // Pim::DefaultContext::Ipv6::Bsr::CandidateBsr


class Pim::DefaultContext::Ipv6::Bsr::CandidateRps : public ydk::Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CandidateRp; //type: Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp

        ydk::YList candidate_rp;
        
}; // Pim::DefaultContext::Ipv6::Bsr::CandidateRps


class Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp : public ydk::Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mode; //type: PimProtocolMode
        ydk::YLeaf group_list; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp


class Pim::DefaultContext::Ipv6::AllowRp : public ydk::Entity
{
    public:
        AllowRp();
        ~AllowRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rp_list_name; //type: string
        ydk::YLeaf group_list_name; //type: string

}; // Pim::DefaultContext::Ipv6::AllowRp


class Pim::DefaultContext::Ipv6::EmbeddedRpAddresses : public ydk::Entity
{
    public:
        EmbeddedRpAddresses();
        ~EmbeddedRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EmbeddedRpAddress; //type: Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress

        ydk::YList embedded_rp_address;
        
}; // Pim::DefaultContext::Ipv6::EmbeddedRpAddresses


class Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress : public ydk::Entity
{
    public:
        EmbeddedRpAddress();
        ~EmbeddedRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string

}; // Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress


class Pim::DefaultContext::Ipv6::Convergence : public ydk::Entity
{
    public:
        Convergence();
        ~Convergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rpf_conflict_join_delay; //type: uint32
        ydk::YLeaf link_down_prune_delay; //type: uint32

}; // Pim::DefaultContext::Ipv6::Convergence


class Pim::DefaultContext::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf neighbor_check_on_receive; //type: empty
        ydk::YLeaf old_register_checksum; //type: empty
        ydk::YLeaf neighbor_filter; //type: string
        ydk::YLeaf spt_threshold_infinity; //type: string
        ydk::YLeaf log_neighbor_changes; //type: empty
        ydk::YLeaf register_source; //type: string
        ydk::YLeaf accept_register; //type: string
        ydk::YLeaf suppress_rpf_prunes; //type: empty
        ydk::YLeaf ssm_allow_override; //type: empty
        ydk::YLeaf multipath; //type: PimMultipath
        ydk::YLeaf rp_static_deny; //type: string
        ydk::YLeaf suppress_data_registers; //type: empty
        ydk::YLeaf neighbor_check_on_send; //type: empty
        ydk::YLeaf auto_rp_disable; //type: empty
        class RpfRedirect; //type: Pim::DefaultContext::Ipv4::RpfRedirect
        class Interfaces; //type: Pim::DefaultContext::Ipv4::Interfaces
        class AutoRpCandidateRps; //type: Pim::DefaultContext::Ipv4::AutoRpCandidateRps
        class AutoRpMappingAgent; //type: Pim::DefaultContext::Ipv4::AutoRpMappingAgent
        class SparseModeRpAddresses; //type: Pim::DefaultContext::Ipv4::SparseModeRpAddresses
        class InheritableDefaults; //type: Pim::DefaultContext::Ipv4::InheritableDefaults
        class Rpf; //type: Pim::DefaultContext::Ipv4::Rpf
        class SgExpiryTimer; //type: Pim::DefaultContext::Ipv4::SgExpiryTimer
        class RpfVectorEnable; //type: Pim::DefaultContext::Ipv4::RpfVectorEnable
        class Nsf; //type: Pim::DefaultContext::Ipv4::Nsf
        class Maximum; //type: Pim::DefaultContext::Ipv4::Maximum
        class Ssm; //type: Pim::DefaultContext::Ipv4::Ssm
        class Injects; //type: Pim::DefaultContext::Ipv4::Injects
        class BidirRpAddresses; //type: Pim::DefaultContext::Ipv4::BidirRpAddresses
        class Bsr; //type: Pim::DefaultContext::Ipv4::Bsr
        class Mofrr; //type: Pim::DefaultContext::Ipv4::Mofrr
        class Paths; //type: Pim::DefaultContext::Ipv4::Paths
        class AllowRp; //type: Pim::DefaultContext::Ipv4::AllowRp
        class Convergence; //type: Pim::DefaultContext::Ipv4::Convergence

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::RpfRedirect> rpf_redirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpCandidateRps> auto_rp_candidate_rps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent> auto_rp_mapping_agent;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::SparseModeRpAddresses> sparse_mode_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Rpf> rpf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::SgExpiryTimer> sg_expiry_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::RpfVectorEnable> rpf_vector_enable; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Ssm> ssm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Injects> injects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::BidirRpAddresses> bidir_rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr> bsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Mofrr> mofrr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Paths> paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AllowRp> allow_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Convergence> convergence;
        
}; // Pim::DefaultContext::Ipv4


class Pim::DefaultContext::Ipv4::RpfRedirect : public ydk::Entity
{
    public:
        RpfRedirect();
        ~RpfRedirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_policy; //type: string

}; // Pim::DefaultContext::Ipv4::RpfRedirect


class Pim::DefaultContext::Ipv4::Interfaces : public ydk::Entity
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

        class Interface; //type: Pim::DefaultContext::Ipv4::Interfaces::Interface

        ydk::YList interface;
        
}; // Pim::DefaultContext::Ipv4::Interfaces


class Pim::DefaultContext::Ipv4::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf neighbor_filter; //type: string
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf bsr_border; //type: boolean
        ydk::YLeaf propagation_delay; //type: uint32
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf join_prune_mtu; //type: uint32
        ydk::YLeaf interface_enable; //type: boolean
        ydk::YLeaf jp_interval; //type: uint32
        ydk::YLeaf override_interval; //type: uint32
        class RedirectBundle; //type: Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle
        class MaximumRoutes; //type: Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes
        class Bfd; //type: Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle> redirect_bundle;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes> maximum_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd> bfd;
        
}; // Pim::DefaultContext::Ipv4::Interfaces::Interface


class Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle : public ydk::Entity
{
    public:
        RedirectBundle();
        ~RedirectBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf interface_bandwidth; //type: uint32
        ydk::YLeaf threshold_bandwidth; //type: uint32

}; // Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle


class Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes : public ydk::Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes


class Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf enable; //type: boolean

}; // Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd


class Pim::DefaultContext::Ipv4::AutoRpCandidateRps : public ydk::Entity
{
    public:
        AutoRpCandidateRps();
        ~AutoRpCandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AutoRpCandidateRp; //type: Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp

        ydk::YList auto_rp_candidate_rp;
        
}; // Pim::DefaultContext::Ipv4::AutoRpCandidateRps


class Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp : public ydk::Entity
{
    public:
        AutoRpCandidateRp();
        ~AutoRpCandidateRp();

        bool has_data() const override;
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
        ydk::YLeaf protocol_mode; //type: AutoRpProtocolMode
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf announce_period; //type: uint32

}; // Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp


class Pim::DefaultContext::Ipv4::AutoRpMappingAgent : public ydk::Entity
{
    public:
        AutoRpMappingAgent();
        ~AutoRpMappingAgent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Parameters; //type: Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters
        class CacheLimit; //type: Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters> parameters; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit> cache_limit; // presence node
        
}; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent


class Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf announce_period; //type: uint32

}; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters


class Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit : public ydk::Entity
{
    public:
        CacheLimit();
        ~CacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_cache_entry; //type: uint32
        ydk::YLeaf threshold_cache_entry; //type: uint32

}; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit


class Pim::DefaultContext::Ipv4::SparseModeRpAddresses : public ydk::Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SparseModeRpAddress; //type: Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress

        ydk::YList sparse_mode_rp_address;
        
}; // Pim::DefaultContext::Ipv4::SparseModeRpAddresses


class Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress : public ydk::Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress


class Pim::DefaultContext::Ipv4::InheritableDefaults : public ydk::Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf convergence_timeout; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf propagation_delay; //type: uint32
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf join_prune_mtu; //type: uint32
        ydk::YLeaf jp_interval; //type: uint32
        ydk::YLeaf override_interval; //type: uint32

}; // Pim::DefaultContext::Ipv4::InheritableDefaults


class Pim::DefaultContext::Ipv4::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_policy; //type: string

}; // Pim::DefaultContext::Ipv4::Rpf


class Pim::DefaultContext::Ipv4::SgExpiryTimer : public ydk::Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

        bool has_data() const override;
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
        ydk::YLeaf access_list_name; //type: string

}; // Pim::DefaultContext::Ipv4::SgExpiryTimer


class Pim::DefaultContext::Ipv4::RpfVectorEnable : public ydk::Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

        bool has_data() const override;
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
        ydk::YLeaf allow_ebgp; //type: empty
        ydk::YLeaf disable_ibgp; //type: empty
        ydk::YLeaf use_standard_encoding; //type: empty

}; // Pim::DefaultContext::Ipv4::RpfVectorEnable


class Pim::DefaultContext::Ipv4::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lifetime; //type: uint32

}; // Pim::DefaultContext::Ipv4::Nsf


class Pim::DefaultContext::Ipv4::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf global_low_priority_packet_queue; //type: uint32
        ydk::YLeaf global_high_priority_packet_queue; //type: uint32
        class BsrGlobalGroupMappings; //type: Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings
        class GlobalRoutes; //type: Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes
        class GlobalGroupMappingsAutoRp; //type: Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp
        class BsrGlobalCandidateRpCache; //type: Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache
        class GlobalRegisterStates; //type: Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates
        class GlobalRouteInterfaces; //type: Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces
        class GroupMappingsAutoRp; //type: Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp
        class BsrGroupMappings; //type: Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings
        class RegisterStates; //type: Pim::DefaultContext::Ipv4::Maximum::RegisterStates
        class RouteInterfaces; //type: Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces
        class BsrCandidateRpCache; //type: Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache
        class Routes; //type: Pim::DefaultContext::Ipv4::Maximum::Routes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings> bsr_global_group_mappings; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes> global_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp> global_group_mappings_auto_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache> bsr_global_candidate_rp_cache; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates> global_register_states; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces> global_route_interfaces; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings> bsr_group_mappings; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::RegisterStates> register_states; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces> route_interfaces; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::Routes> routes; // presence node
        
}; // Pim::DefaultContext::Ipv4::Maximum


class Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings : public ydk::Entity
{
    public:
        BsrGlobalGroupMappings();
        ~BsrGlobalGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsr_maximum_global_group_mappings; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings


class Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes : public ydk::Entity
{
    public:
        GlobalRoutes();
        ~GlobalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_routes; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes


class Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp : public ydk::Entity
{
    public:
        GlobalGroupMappingsAutoRp();
        ~GlobalGroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_global_group_ranges_auto_rp; //type: uint32
        ydk::YLeaf threshold_global_group_ranges_auto_rp; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp


class Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache : public ydk::Entity
{
    public:
        BsrGlobalCandidateRpCache();
        ~BsrGlobalCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsr_maximum_global_candidate_rp_cache; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache


class Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates : public ydk::Entity
{
    public:
        GlobalRegisterStates();
        ~GlobalRegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_register_states; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates


class Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces : public ydk::Entity
{
    public:
        GlobalRouteInterfaces();
        ~GlobalRouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_route_interfaces; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces


class Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp : public ydk::Entity
{
    public:
        GroupMappingsAutoRp();
        ~GroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_group_ranges_auto_rp; //type: uint32
        ydk::YLeaf threshold_group_ranges_auto_rp; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp


class Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings : public ydk::Entity
{
    public:
        BsrGroupMappings();
        ~BsrGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsr_maximum_group_ranges; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings


class Pim::DefaultContext::Ipv4::Maximum::RegisterStates : public ydk::Entity
{
    public:
        RegisterStates();
        ~RegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_register_states; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::RegisterStates


class Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces : public ydk::Entity
{
    public:
        RouteInterfaces();
        ~RouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_route_interfaces; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces


class Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache : public ydk::Entity
{
    public:
        BsrCandidateRpCache();
        ~BsrCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsr_maximum_candidate_rp_cache; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache


class Pim::DefaultContext::Ipv4::Maximum::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_routes; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Pim::DefaultContext::Ipv4::Maximum::Routes


class Pim::DefaultContext::Ipv4::Ssm : public ydk::Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf range; //type: string

}; // Pim::DefaultContext::Ipv4::Ssm


class Pim::DefaultContext::Ipv4::Injects : public ydk::Entity
{
    public:
        Injects();
        ~Injects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Inject; //type: Pim::DefaultContext::Ipv4::Injects::Inject

        ydk::YList inject;
        
}; // Pim::DefaultContext::Ipv4::Injects


class Pim::DefaultContext::Ipv4::Injects::Inject : public ydk::Entity
{
    public:
        Inject();
        ~Inject();

        bool has_data() const override;
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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeafList rpf_proxy_address; //type: list of  string

}; // Pim::DefaultContext::Ipv4::Injects::Inject


class Pim::DefaultContext::Ipv4::BidirRpAddresses : public ydk::Entity
{
    public:
        BidirRpAddresses();
        ~BidirRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BidirRpAddress; //type: Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress

        ydk::YList bidir_rp_address;
        
}; // Pim::DefaultContext::Ipv4::BidirRpAddresses


class Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress : public ydk::Entity
{
    public:
        BidirRpAddress();
        ~BidirRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress


class Pim::DefaultContext::Ipv4::Bsr : public ydk::Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CandidateBsr; //type: Pim::DefaultContext::Ipv4::Bsr::CandidateBsr
        class CandidateRps; //type: Pim::DefaultContext::Ipv4::Bsr::CandidateRps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateBsr> candidate_bsr; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateRps> candidate_rps;
        
}; // Pim::DefaultContext::Ipv4::Bsr


class Pim::DefaultContext::Ipv4::Bsr::CandidateBsr : public ydk::Entity
{
    public:
        CandidateBsr();
        ~CandidateBsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf priority; //type: uint32

}; // Pim::DefaultContext::Ipv4::Bsr::CandidateBsr


class Pim::DefaultContext::Ipv4::Bsr::CandidateRps : public ydk::Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CandidateRp; //type: Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp

        ydk::YList candidate_rp;
        
}; // Pim::DefaultContext::Ipv4::Bsr::CandidateRps


class Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp : public ydk::Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mode; //type: PimProtocolMode
        ydk::YLeaf group_list; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp


class Pim::DefaultContext::Ipv4::Mofrr : public ydk::Entity
{
    public:
        Mofrr();
        ~Mofrr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rib; //type: string
        ydk::YLeaf non_revertive; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf flow; //type: string
        class CloneJoins; //type: Pim::DefaultContext::Ipv4::Mofrr::CloneJoins
        class CloneSources; //type: Pim::DefaultContext::Ipv4::Mofrr::CloneSources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Mofrr::CloneJoins> clone_joins;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Mofrr::CloneSources> clone_sources;
        
}; // Pim::DefaultContext::Ipv4::Mofrr


class Pim::DefaultContext::Ipv4::Mofrr::CloneJoins : public ydk::Entity
{
    public:
        CloneJoins();
        ~CloneJoins();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CloneJoin; //type: Pim::DefaultContext::Ipv4::Mofrr::CloneJoins::CloneJoin

        ydk::YList clone_join;
        
}; // Pim::DefaultContext::Ipv4::Mofrr::CloneJoins


class Pim::DefaultContext::Ipv4::Mofrr::CloneJoins::CloneJoin : public ydk::Entity
{
    public:
        CloneJoin();
        ~CloneJoin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf primary; //type: string
        ydk::YLeaf backup; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Pim::DefaultContext::Ipv4::Mofrr::CloneJoins::CloneJoin


class Pim::DefaultContext::Ipv4::Mofrr::CloneSources : public ydk::Entity
{
    public:
        CloneSources();
        ~CloneSources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CloneSource; //type: Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource

        ydk::YList clone_source;
        
}; // Pim::DefaultContext::Ipv4::Mofrr::CloneSources

class PimProtocolMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sm;
        static const ydk::Enum::YLeaf bidir;

};

class PimMultipath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf interface_hash;
        static const ydk::Enum::YLeaf source_hash;
        static const ydk::Enum::YLeaf source_next_hop_hash;
        static const ydk::Enum::YLeaf source_group_hash;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_CFG_0_ */

