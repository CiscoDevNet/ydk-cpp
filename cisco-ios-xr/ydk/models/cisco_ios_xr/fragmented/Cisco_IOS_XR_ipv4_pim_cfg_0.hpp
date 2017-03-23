#ifndef _CISCO_IOS_XR_IPV4_PIM_CFG_0_
#define _CISCO_IOS_XR_IPV4_PIM_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_cfg {

class Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Vrfs; //type: Pim::Vrfs
        class DefaultContext; //type: Pim::DefaultContext

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext> default_context; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs> vrfs;


}; // Pim


class Pim::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Pim::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf> > vrf;


}; // Pim::Vrfs


class Pim::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Ipv4; //type: Pim::Vrfs::Vrf::Ipv4
        class Ipv6; //type: Pim::Vrfs::Vrf::Ipv6

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6> ipv6;


}; // Pim::Vrfs::Vrf


class Pim::Vrfs::Vrf::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_check_on_receive; //type: empty
        YLeaf old_register_checksum; //type: empty
        YLeaf neighbor_filter; //type: string
        YLeaf spt_threshold_infinity; //type: string
        YLeaf log_neighbor_changes; //type: empty
        YLeaf register_source; //type: string
        YLeaf accept_register; //type: string
        YLeaf suppress_rpf_prunes; //type: empty
        YLeaf ssm_allow_override; //type: empty
        YLeaf multipath; //type: PimMultipathEnum
        YLeaf rp_static_deny; //type: string
        YLeaf suppress_data_registers; //type: empty
        YLeaf neighbor_check_on_send; //type: empty
        YLeaf auto_rp_disable; //type: empty

        class SparseModeRpAddresses; //type: Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses
        class MulticastOnlyFrr; //type: Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr
        class CsMulticastOnlyFrrs; //type: Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs
        class InheritableDefaults; //type: Pim::Vrfs::Vrf::Ipv4::InheritableDefaults
        class Rpf; //type: Pim::Vrfs::Vrf::Ipv4::Rpf
        class Maximum; //type: Pim::Vrfs::Vrf::Ipv4::Maximum
        class SgExpiryTimer; //type: Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer
        class RpfVectorEnable; //type: Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable
        class Ssm; //type: Pim::Vrfs::Vrf::Ipv4::Ssm
        class Injects; //type: Pim::Vrfs::Vrf::Ipv4::Injects
        class BidirRpAddresses; //type: Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses
        class Bsr; //type: Pim::Vrfs::Vrf::Ipv4::Bsr
        class Paths; //type: Pim::Vrfs::Vrf::Ipv4::Paths
        class AllowRp; //type: Pim::Vrfs::Vrf::Ipv4::AllowRp
        class Convergence; //type: Pim::Vrfs::Vrf::Ipv4::Convergence
        class Interfaces; //type: Pim::Vrfs::Vrf::Ipv4::Interfaces
        class CjMulticastOnlyFrrs; //type: Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::AllowRp> allow_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses> bidir_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs> cj_multicast_only_frrs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Convergence> convergence;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs> cs_multicast_only_frrs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Injects> injects;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr> multicast_only_frr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Paths> paths;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Rpf> rpf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable> rpf_vector_enable; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer> sg_expiry_timer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses> sparse_mode_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Ssm> ssm;


}; // Pim::Vrfs::Vrf::Ipv4


class Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses : public Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SparseModeRpAddress; //type: Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;


}; // Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses


class Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress : public Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string
        YLeaf auto_rp_override; //type: boolean



}; // Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress


class Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr : public Entity
{
    public:
        MulticastOnlyFrr();
        ~MulticastOnlyFrr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_revertive_multicast_only_frr; //type: empty
        YLeaf flow_multicast_only_frr; //type: string
        YLeaf enable; //type: empty
        YLeaf rib_multicast_only_frr; //type: string



}; // Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr


class Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs : public Entity
{
    public:
        CsMulticastOnlyFrrs();
        ~CsMulticastOnlyFrrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CsMulticastOnlyFrr; //type: Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr> > cs_multicast_only_frr;


}; // Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs


class Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr : public Entity
{
    public:
        CsMulticastOnlyFrr();
        ~CsMulticastOnlyFrr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: string
        YLeaf primary; //type: string
        YLeaf backup; //type: string
        YLeaf prefix_length; //type: uint8



}; // Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr


class Pim::Vrfs::Vrf::Ipv4::InheritableDefaults : public Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf convergency; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf propagation_delay; //type: uint32
        YLeaf dr_priority; //type: uint32
        YLeaf join_prune_mtu; //type: uint32
        YLeaf jp_interval; //type: uint32
        YLeaf override_interval; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::InheritableDefaults


class Pim::Vrfs::Vrf::Ipv4::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy; //type: string



}; // Pim::Vrfs::Vrf::Ipv4::Rpf


class Pim::Vrfs::Vrf::Ipv4::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMappingsAutoRp; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp
        class BsrGroupMappings; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings
        class RegisterStates; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates
        class RouteInterfaces; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces
        class BsrCandidateRpCache; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache
        class Routes; //type: Pim::Vrfs::Vrf::Ipv4::Maximum::Routes

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings> bsr_group_mappings; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates> register_states; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces> route_interfaces; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::Routes> routes; // presence node


}; // Pim::Vrfs::Vrf::Ipv4::Maximum


class Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp : public Entity
{
    public:
        GroupMappingsAutoRp();
        ~GroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_group_ranges_auto_rp; //type: uint32
        YLeaf threshold_group_ranges_auto_rp; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp


class Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings : public Entity
{
    public:
        BsrGroupMappings();
        ~BsrGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_group_ranges; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings


class Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates : public Entity
{
    public:
        RegisterStates();
        ~RegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_register_states; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates


class Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces : public Entity
{
    public:
        RouteInterfaces();
        ~RouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_route_interfaces; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces


class Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache : public Entity
{
    public:
        BsrCandidateRpCache();
        ~BsrCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_candidate_rp_cache; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache


class Pim::Vrfs::Vrf::Ipv4::Maximum::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_routes; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Maximum::Routes


class Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer : public Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf access_list_name; //type: string



}; // Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer


class Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable : public Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf allow_ebgp; //type: empty
        YLeaf disable_ibgp; //type: empty



}; // Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable


class Pim::Vrfs::Vrf::Ipv4::Ssm : public Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: boolean
        YLeaf range; //type: string



}; // Pim::Vrfs::Vrf::Ipv4::Ssm


class Pim::Vrfs::Vrf::Ipv4::Injects : public Entity
{
    public:
        Injects();
        ~Injects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Inject; //type: Pim::Vrfs::Vrf::Ipv4::Injects::Inject

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Injects::Inject> > inject;


}; // Pim::Vrfs::Vrf::Ipv4::Injects


class Pim::Vrfs::Vrf::Ipv4::Injects::Inject : public Entity
{
    public:
        Inject();
        ~Inject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeafList rpf_proxy_address; //type: list of  string



}; // Pim::Vrfs::Vrf::Ipv4::Injects::Inject


class Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses : public Entity
{
    public:
        BidirRpAddresses();
        ~BidirRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BidirRpAddress; //type: Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress> > bidir_rp_address;


}; // Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses


class Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress : public Entity
{
    public:
        BidirRpAddress();
        ~BidirRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string
        YLeaf auto_rp_override; //type: boolean



}; // Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress


class Pim::Vrfs::Vrf::Ipv4::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateBsr; //type: Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr
        class CandidateRps; //type: Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr> candidate_bsr; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps> candidate_rps;


}; // Pim::Vrfs::Vrf::Ipv4::Bsr


class Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr : public Entity
{
    public:
        CandidateBsr();
        ~CandidateBsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr


class Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps : public Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp> > candidate_rp;


}; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps


class Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf mode; //type: PimProtocolModeEnum
        YLeaf group_list; //type: string
        YLeaf priority; //type: uint32
        YLeaf interval; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp


class Pim::Vrfs::Vrf::Ipv4::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Path; //type: Pim::Vrfs::Vrf::Ipv4::Paths::Path

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Paths::Path> > path;


}; // Pim::Vrfs::Vrf::Ipv4::Paths


class Pim::Vrfs::Vrf::Ipv4::Paths::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeafList rpf_proxy_address; //type: list of  string



}; // Pim::Vrfs::Vrf::Ipv4::Paths::Path


class Pim::Vrfs::Vrf::Ipv4::AllowRp : public Entity
{
    public:
        AllowRp();
        ~AllowRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_list_name; //type: string
        YLeaf group_list_name; //type: string



}; // Pim::Vrfs::Vrf::Ipv4::AllowRp


class Pim::Vrfs::Vrf::Ipv4::Convergence : public Entity
{
    public:
        Convergence();
        ~Convergence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_conflict_join_delay; //type: uint32
        YLeaf link_down_prune_delay; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv4::Convergence


class Pim::Vrfs::Vrf::Ipv4::Interfaces : public Entity
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



        class Interface; //type: Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface> > interface;


}; // Pim::Vrfs::Vrf::Ipv4::Interfaces


class Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface : public Entity
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
        YLeaf enable; //type: empty
        YLeaf neighbor_filter; //type: string
        YLeaf hello_interval; //type: uint32
        YLeaf bsr_border; //type: boolean
        YLeaf propagation_delay; //type: uint32
        YLeaf dr_priority; //type: uint32
        YLeaf join_prune_mtu; //type: uint32
        YLeaf interface_enable; //type: boolean
        YLeaf jp_interval; //type: uint32
        YLeaf override_interval; //type: uint32

        class MaximumRoutes; //type: Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes
        class Bfd; //type: Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes> maximum_routes; // presence node


}; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface


class Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes : public Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes


class Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf interval; //type: uint32
        YLeaf enable; //type: boolean



}; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd


class Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs : public Entity
{
    public:
        CjMulticastOnlyFrrs();
        ~CjMulticastOnlyFrrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CjMulticastOnlyFrr; //type: Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr> > cj_multicast_only_frr;


}; // Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs


class Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr : public Entity
{
    public:
        CjMulticastOnlyFrr();
        ~CjMulticastOnlyFrr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: string
        YLeaf primary; //type: string
        YLeaf backup; //type: string
        YLeaf prefix_length; //type: uint8



}; // Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr


class Pim::Vrfs::Vrf::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_check_on_receive; //type: empty
        YLeaf old_register_checksum; //type: empty
        YLeaf neighbor_filter; //type: string
        YLeaf spt_threshold_infinity; //type: string
        YLeaf log_neighbor_changes; //type: empty
        YLeaf register_source; //type: string
        YLeaf accept_register; //type: string
        YLeaf embedded_rp_disable; //type: empty
        YLeaf suppress_rpf_prunes; //type: empty
        YLeaf ssm_allow_override; //type: empty
        YLeaf multipath; //type: PimMultipathEnum
        YLeaf rp_static_deny; //type: string
        YLeaf suppress_data_registers; //type: empty
        YLeaf neighbor_check_on_send; //type: empty

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

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::AllowRp> allow_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses> bidir_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Convergence> convergence;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses> embedded_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Rpf> rpf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable> rpf_vector_enable; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer> sg_expiry_timer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses> sparse_mode_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Ssm> ssm;


}; // Pim::Vrfs::Vrf::Ipv6


class Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses : public Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SparseModeRpAddress; //type: Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;


}; // Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses


class Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress : public Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string
        YLeaf auto_rp_override; //type: boolean



}; // Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress


class Pim::Vrfs::Vrf::Ipv6::InheritableDefaults : public Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf convergency; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf propagation_delay; //type: uint32
        YLeaf dr_priority; //type: uint32
        YLeaf join_prune_mtu; //type: uint32
        YLeaf jp_interval; //type: uint32
        YLeaf override_interval; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::InheritableDefaults


class Pim::Vrfs::Vrf::Ipv6::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy; //type: string



}; // Pim::Vrfs::Vrf::Ipv6::Rpf


class Pim::Vrfs::Vrf::Ipv6::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMappingsAutoRp; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp
        class BsrGroupMappings; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings
        class RegisterStates; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates
        class RouteInterfaces; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces
        class BsrCandidateRpCache; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache
        class Routes; //type: Pim::Vrfs::Vrf::Ipv6::Maximum::Routes

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings> bsr_group_mappings; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates> register_states; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces> route_interfaces; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::Routes> routes; // presence node


}; // Pim::Vrfs::Vrf::Ipv6::Maximum


class Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp : public Entity
{
    public:
        GroupMappingsAutoRp();
        ~GroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_group_ranges_auto_rp; //type: uint32
        YLeaf threshold_group_ranges_auto_rp; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp


class Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings : public Entity
{
    public:
        BsrGroupMappings();
        ~BsrGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_group_ranges; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings


class Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates : public Entity
{
    public:
        RegisterStates();
        ~RegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_register_states; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates


class Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces : public Entity
{
    public:
        RouteInterfaces();
        ~RouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_route_interfaces; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces


class Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache : public Entity
{
    public:
        BsrCandidateRpCache();
        ~BsrCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_candidate_rp_cache; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache


class Pim::Vrfs::Vrf::Ipv6::Maximum::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_routes; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Maximum::Routes


class Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer : public Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf access_list_name; //type: string



}; // Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer


class Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable : public Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf allow_ebgp; //type: empty
        YLeaf disable_ibgp; //type: empty



}; // Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable


class Pim::Vrfs::Vrf::Ipv6::Ssm : public Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: boolean
        YLeaf range; //type: string



}; // Pim::Vrfs::Vrf::Ipv6::Ssm


class Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses : public Entity
{
    public:
        BidirRpAddresses();
        ~BidirRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BidirRpAddress; //type: Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress> > bidir_rp_address;


}; // Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses


class Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress : public Entity
{
    public:
        BidirRpAddress();
        ~BidirRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string
        YLeaf auto_rp_override; //type: boolean



}; // Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress


class Pim::Vrfs::Vrf::Ipv6::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateBsr; //type: Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr
        class CandidateRps; //type: Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr> candidate_bsr; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps> candidate_rps;


}; // Pim::Vrfs::Vrf::Ipv6::Bsr


class Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr : public Entity
{
    public:
        CandidateBsr();
        ~CandidateBsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr


class Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps : public Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp> > candidate_rp;


}; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps


class Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf mode; //type: PimProtocolModeEnum
        YLeaf group_list; //type: string
        YLeaf priority; //type: uint32
        YLeaf interval; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp


class Pim::Vrfs::Vrf::Ipv6::AllowRp : public Entity
{
    public:
        AllowRp();
        ~AllowRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_list_name; //type: string
        YLeaf group_list_name; //type: string



}; // Pim::Vrfs::Vrf::Ipv6::AllowRp


class Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses : public Entity
{
    public:
        EmbeddedRpAddresses();
        ~EmbeddedRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EmbeddedRpAddress; //type: Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress> > embedded_rp_address;


}; // Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses


class Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress : public Entity
{
    public:
        EmbeddedRpAddress();
        ~EmbeddedRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string



}; // Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress


class Pim::Vrfs::Vrf::Ipv6::Convergence : public Entity
{
    public:
        Convergence();
        ~Convergence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_conflict_join_delay; //type: uint32
        YLeaf link_down_prune_delay; //type: uint32



}; // Pim::Vrfs::Vrf::Ipv6::Convergence


class Pim::Vrfs::Vrf::Ipv6::Interfaces : public Entity
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



        class Interface; //type: Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface> > interface;


}; // Pim::Vrfs::Vrf::Ipv6::Interfaces


class Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface : public Entity
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
        YLeaf enable; //type: empty
        YLeaf neighbor_filter; //type: string
        YLeaf hello_interval; //type: uint32
        YLeaf bsr_border; //type: boolean
        YLeaf propagation_delay; //type: uint32
        YLeaf dr_priority; //type: uint32
        YLeaf join_prune_mtu; //type: uint32
        YLeaf interface_enable; //type: boolean
        YLeaf jp_interval; //type: uint32
        YLeaf override_interval; //type: uint32

        class MaximumRoutes; //type: Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes
        class Bfd; //type: Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes> maximum_routes; // presence node


}; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface


class Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes : public Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes


class Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf interval; //type: uint32
        YLeaf enable; //type: boolean



}; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd


class Pim::DefaultContext : public Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6; //type: Pim::DefaultContext::Ipv6
        class Ipv4; //type: Pim::DefaultContext::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6> ipv6;


}; // Pim::DefaultContext


class Pim::DefaultContext::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_check_on_receive; //type: empty
        YLeaf old_register_checksum; //type: empty
        YLeaf neighbor_filter; //type: string
        YLeaf spt_threshold_infinity; //type: string
        YLeaf log_neighbor_changes; //type: empty
        YLeaf register_source; //type: string
        YLeaf accept_register; //type: string
        YLeaf embedded_rp_disable; //type: empty
        YLeaf suppress_rpf_prunes; //type: empty
        YLeaf ssm_allow_override; //type: empty
        YLeaf multipath; //type: PimMultipathEnum
        YLeaf rp_static_deny; //type: string
        YLeaf suppress_data_registers; //type: empty
        YLeaf neighbor_check_on_send; //type: empty

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

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::AllowRp> allow_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::BidirRpAddresses> bidir_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Convergence> convergence;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::EmbeddedRpAddresses> embedded_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Rpf> rpf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::RpfVectorEnable> rpf_vector_enable; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::SgExpiryTimer> sg_expiry_timer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::SparseModeRpAddresses> sparse_mode_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Ssm> ssm;


}; // Pim::DefaultContext::Ipv6


class Pim::DefaultContext::Ipv6::Interfaces : public Entity
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



        class Interface; //type: Pim::DefaultContext::Ipv6::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface> > interface;


}; // Pim::DefaultContext::Ipv6::Interfaces


class Pim::DefaultContext::Ipv6::Interfaces::Interface : public Entity
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
        YLeaf enable; //type: empty
        YLeaf neighbor_filter; //type: string
        YLeaf hello_interval; //type: uint32
        YLeaf bsr_border; //type: boolean
        YLeaf propagation_delay; //type: uint32
        YLeaf dr_priority; //type: uint32
        YLeaf join_prune_mtu; //type: uint32
        YLeaf interface_enable; //type: boolean
        YLeaf jp_interval; //type: uint32
        YLeaf override_interval; //type: uint32

        class MaximumRoutes; //type: Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes
        class Bfd; //type: Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes> maximum_routes; // presence node


}; // Pim::DefaultContext::Ipv6::Interfaces::Interface


class Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes : public Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes


class Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf interval; //type: uint32
        YLeaf enable; //type: boolean



}; // Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd


class Pim::DefaultContext::Ipv6::SparseModeRpAddresses : public Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SparseModeRpAddress; //type: Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;


}; // Pim::DefaultContext::Ipv6::SparseModeRpAddresses


class Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress : public Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string
        YLeaf auto_rp_override; //type: boolean



}; // Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress


class Pim::DefaultContext::Ipv6::InheritableDefaults : public Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf convergency; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf propagation_delay; //type: uint32
        YLeaf dr_priority; //type: uint32
        YLeaf join_prune_mtu; //type: uint32
        YLeaf jp_interval; //type: uint32
        YLeaf override_interval; //type: uint32



}; // Pim::DefaultContext::Ipv6::InheritableDefaults


class Pim::DefaultContext::Ipv6::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy; //type: string



}; // Pim::DefaultContext::Ipv6::Rpf


class Pim::DefaultContext::Ipv6::SgExpiryTimer : public Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf access_list_name; //type: string



}; // Pim::DefaultContext::Ipv6::SgExpiryTimer


class Pim::DefaultContext::Ipv6::RpfVectorEnable : public Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf allow_ebgp; //type: empty
        YLeaf disable_ibgp; //type: empty



}; // Pim::DefaultContext::Ipv6::RpfVectorEnable


class Pim::DefaultContext::Ipv6::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lifetime; //type: uint32



}; // Pim::DefaultContext::Ipv6::Nsf


class Pim::DefaultContext::Ipv6::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf global_low_priority_packet_queue; //type: uint32
        YLeaf global_high_priority_packet_queue; //type: uint32

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

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache> bsr_global_candidate_rp_cache; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings> bsr_global_group_mappings; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings> bsr_group_mappings; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp> global_group_mappings_auto_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates> global_register_states; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces> global_route_interfaces; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes> global_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::RegisterStates> register_states; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces> route_interfaces; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::Routes> routes; // presence node


}; // Pim::DefaultContext::Ipv6::Maximum


class Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings : public Entity
{
    public:
        BsrGlobalGroupMappings();
        ~BsrGlobalGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_global_group_mappings; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings


class Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes : public Entity
{
    public:
        GlobalRoutes();
        ~GlobalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_routes; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes


class Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp : public Entity
{
    public:
        GlobalGroupMappingsAutoRp();
        ~GlobalGroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_global_group_ranges_auto_rp; //type: uint32
        YLeaf threshold_global_group_ranges_auto_rp; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp


class Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache : public Entity
{
    public:
        BsrGlobalCandidateRpCache();
        ~BsrGlobalCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_global_candidate_rp_cache; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache


class Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates : public Entity
{
    public:
        GlobalRegisterStates();
        ~GlobalRegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_register_states; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates


class Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces : public Entity
{
    public:
        GlobalRouteInterfaces();
        ~GlobalRouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_route_interfaces; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces


class Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp : public Entity
{
    public:
        GroupMappingsAutoRp();
        ~GroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_group_ranges_auto_rp; //type: uint32
        YLeaf threshold_group_ranges_auto_rp; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp


class Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings : public Entity
{
    public:
        BsrGroupMappings();
        ~BsrGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_group_ranges; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings


class Pim::DefaultContext::Ipv6::Maximum::RegisterStates : public Entity
{
    public:
        RegisterStates();
        ~RegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_register_states; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::RegisterStates


class Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces : public Entity
{
    public:
        RouteInterfaces();
        ~RouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_route_interfaces; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces


class Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache : public Entity
{
    public:
        BsrCandidateRpCache();
        ~BsrCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_candidate_rp_cache; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache


class Pim::DefaultContext::Ipv6::Maximum::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_routes; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv6::Maximum::Routes


class Pim::DefaultContext::Ipv6::Ssm : public Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: boolean
        YLeaf range; //type: string



}; // Pim::DefaultContext::Ipv6::Ssm


class Pim::DefaultContext::Ipv6::BidirRpAddresses : public Entity
{
    public:
        BidirRpAddresses();
        ~BidirRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BidirRpAddress; //type: Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress> > bidir_rp_address;


}; // Pim::DefaultContext::Ipv6::BidirRpAddresses


class Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress : public Entity
{
    public:
        BidirRpAddress();
        ~BidirRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string
        YLeaf auto_rp_override; //type: boolean



}; // Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress


class Pim::DefaultContext::Ipv6::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateBsr; //type: Pim::DefaultContext::Ipv6::Bsr::CandidateBsr
        class CandidateRps; //type: Pim::DefaultContext::Ipv6::Bsr::CandidateRps

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateBsr> candidate_bsr; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateRps> candidate_rps;


}; // Pim::DefaultContext::Ipv6::Bsr


class Pim::DefaultContext::Ipv6::Bsr::CandidateBsr : public Entity
{
    public:
        CandidateBsr();
        ~CandidateBsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: uint32



}; // Pim::DefaultContext::Ipv6::Bsr::CandidateBsr


class Pim::DefaultContext::Ipv6::Bsr::CandidateRps : public Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp> > candidate_rp;


}; // Pim::DefaultContext::Ipv6::Bsr::CandidateRps


class Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf mode; //type: PimProtocolModeEnum
        YLeaf group_list; //type: string
        YLeaf priority; //type: uint32
        YLeaf interval; //type: uint32



}; // Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp


class Pim::DefaultContext::Ipv6::AllowRp : public Entity
{
    public:
        AllowRp();
        ~AllowRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_list_name; //type: string
        YLeaf group_list_name; //type: string



}; // Pim::DefaultContext::Ipv6::AllowRp


class Pim::DefaultContext::Ipv6::EmbeddedRpAddresses : public Entity
{
    public:
        EmbeddedRpAddresses();
        ~EmbeddedRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EmbeddedRpAddress; //type: Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress> > embedded_rp_address;


}; // Pim::DefaultContext::Ipv6::EmbeddedRpAddresses


class Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress : public Entity
{
    public:
        EmbeddedRpAddress();
        ~EmbeddedRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string



}; // Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress


class Pim::DefaultContext::Ipv6::Convergence : public Entity
{
    public:
        Convergence();
        ~Convergence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_conflict_join_delay; //type: uint32
        YLeaf link_down_prune_delay; //type: uint32



}; // Pim::DefaultContext::Ipv6::Convergence


class Pim::DefaultContext::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_check_on_receive; //type: empty
        YLeaf old_register_checksum; //type: empty
        YLeaf neighbor_filter; //type: string
        YLeaf spt_threshold_infinity; //type: string
        YLeaf log_neighbor_changes; //type: empty
        YLeaf register_source; //type: string
        YLeaf accept_register; //type: string
        YLeaf suppress_rpf_prunes; //type: empty
        YLeaf ssm_allow_override; //type: empty
        YLeaf multipath; //type: PimMultipathEnum
        YLeaf rp_static_deny; //type: string
        YLeaf suppress_data_registers; //type: empty
        YLeaf neighbor_check_on_send; //type: empty
        YLeaf auto_rp_disable; //type: empty

        class RpfRedirect; //type: Pim::DefaultContext::Ipv4::RpfRedirect
        class Interfaces; //type: Pim::DefaultContext::Ipv4::Interfaces
        class AutoRpCandidateRps; //type: Pim::DefaultContext::Ipv4::AutoRpCandidateRps
        class AutoRpMappingAgent; //type: Pim::DefaultContext::Ipv4::AutoRpMappingAgent
        class SparseModeRpAddresses; //type: Pim::DefaultContext::Ipv4::SparseModeRpAddresses
        class MulticastOnlyFrr; //type: Pim::DefaultContext::Ipv4::MulticastOnlyFrr
        class CsMulticastOnlyFrrs; //type: Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs
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
        class Paths; //type: Pim::DefaultContext::Ipv4::Paths
        class AllowRp; //type: Pim::DefaultContext::Ipv4::AllowRp
        class Convergence; //type: Pim::DefaultContext::Ipv4::Convergence
        class CjMulticastOnlyFrrs; //type: Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AllowRp> allow_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpCandidateRps> auto_rp_candidate_rps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent> auto_rp_mapping_agent;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::BidirRpAddresses> bidir_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs> cj_multicast_only_frrs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Convergence> convergence;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs> cs_multicast_only_frrs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Injects> injects;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::MulticastOnlyFrr> multicast_only_frr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Paths> paths;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Rpf> rpf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::RpfRedirect> rpf_redirect;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::RpfVectorEnable> rpf_vector_enable; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::SgExpiryTimer> sg_expiry_timer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::SparseModeRpAddresses> sparse_mode_rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Ssm> ssm;


}; // Pim::DefaultContext::Ipv4


class Pim::DefaultContext::Ipv4::RpfRedirect : public Entity
{
    public:
        RpfRedirect();
        ~RpfRedirect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy; //type: string



}; // Pim::DefaultContext::Ipv4::RpfRedirect


class Pim::DefaultContext::Ipv4::Interfaces : public Entity
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



        class Interface; //type: Pim::DefaultContext::Ipv4::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface> > interface;


}; // Pim::DefaultContext::Ipv4::Interfaces


class Pim::DefaultContext::Ipv4::Interfaces::Interface : public Entity
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
        YLeaf enable; //type: empty
        YLeaf neighbor_filter; //type: string
        YLeaf hello_interval; //type: uint32
        YLeaf bsr_border; //type: boolean
        YLeaf propagation_delay; //type: uint32
        YLeaf dr_priority; //type: uint32
        YLeaf join_prune_mtu; //type: uint32
        YLeaf interface_enable; //type: boolean
        YLeaf jp_interval; //type: uint32
        YLeaf override_interval; //type: uint32

        class RedirectBundle; //type: Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle
        class MaximumRoutes; //type: Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes
        class Bfd; //type: Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes> maximum_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle> redirect_bundle;


}; // Pim::DefaultContext::Ipv4::Interfaces::Interface


class Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle : public Entity
{
    public:
        RedirectBundle();
        ~RedirectBundle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string
        YLeaf interface_bandwidth; //type: uint32
        YLeaf threshold_bandwidth; //type: uint32



}; // Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle


class Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes : public Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes


class Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf interval; //type: uint32
        YLeaf enable; //type: boolean



}; // Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd


class Pim::DefaultContext::Ipv4::AutoRpCandidateRps : public Entity
{
    public:
        AutoRpCandidateRps();
        ~AutoRpCandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AutoRpCandidateRp; //type: Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp> > auto_rp_candidate_rp;


}; // Pim::DefaultContext::Ipv4::AutoRpCandidateRps


class Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp : public Entity
{
    public:
        AutoRpCandidateRp();
        ~AutoRpCandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf protocol_mode; //type: AutoRpProtocolModeEnum
        YLeaf ttl; //type: uint32
        YLeaf access_list_name; //type: string
        YLeaf announce_period; //type: uint32



}; // Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp


class Pim::DefaultContext::Ipv4::AutoRpMappingAgent : public Entity
{
    public:
        AutoRpMappingAgent();
        ~AutoRpMappingAgent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Parameters; //type: Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters
        class CacheLimit; //type: Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit> cache_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters> parameters; // presence node


}; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent


class Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf ttl; //type: uint32
        YLeaf announce_period; //type: uint32



}; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters


class Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit : public Entity
{
    public:
        CacheLimit();
        ~CacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_cache_entry; //type: uint32
        YLeaf threshold_cache_entry; //type: uint32



}; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit


class Pim::DefaultContext::Ipv4::SparseModeRpAddresses : public Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SparseModeRpAddress; //type: Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;


}; // Pim::DefaultContext::Ipv4::SparseModeRpAddresses


class Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress : public Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string
        YLeaf auto_rp_override; //type: boolean



}; // Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress


class Pim::DefaultContext::Ipv4::MulticastOnlyFrr : public Entity
{
    public:
        MulticastOnlyFrr();
        ~MulticastOnlyFrr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_revertive_multicast_only_frr; //type: empty
        YLeaf flow_multicast_only_frr; //type: string
        YLeaf enable; //type: empty
        YLeaf rib_multicast_only_frr; //type: string



}; // Pim::DefaultContext::Ipv4::MulticastOnlyFrr


class Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs : public Entity
{
    public:
        CsMulticastOnlyFrrs();
        ~CsMulticastOnlyFrrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CsMulticastOnlyFrr; //type: Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr> > cs_multicast_only_frr;


}; // Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs


class Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr : public Entity
{
    public:
        CsMulticastOnlyFrr();
        ~CsMulticastOnlyFrr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: string
        YLeaf primary; //type: string
        YLeaf backup; //type: string
        YLeaf prefix_length; //type: uint8



}; // Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr


class Pim::DefaultContext::Ipv4::InheritableDefaults : public Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf convergency; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf propagation_delay; //type: uint32
        YLeaf dr_priority; //type: uint32
        YLeaf join_prune_mtu; //type: uint32
        YLeaf jp_interval; //type: uint32
        YLeaf override_interval; //type: uint32



}; // Pim::DefaultContext::Ipv4::InheritableDefaults


class Pim::DefaultContext::Ipv4::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy; //type: string



}; // Pim::DefaultContext::Ipv4::Rpf


class Pim::DefaultContext::Ipv4::SgExpiryTimer : public Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf access_list_name; //type: string



}; // Pim::DefaultContext::Ipv4::SgExpiryTimer


class Pim::DefaultContext::Ipv4::RpfVectorEnable : public Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf allow_ebgp; //type: empty
        YLeaf disable_ibgp; //type: empty



}; // Pim::DefaultContext::Ipv4::RpfVectorEnable


class Pim::DefaultContext::Ipv4::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lifetime; //type: uint32



}; // Pim::DefaultContext::Ipv4::Nsf


class Pim::DefaultContext::Ipv4::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf global_low_priority_packet_queue; //type: uint32
        YLeaf global_high_priority_packet_queue; //type: uint32

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

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache> bsr_global_candidate_rp_cache; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings> bsr_global_group_mappings; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings> bsr_group_mappings; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp> global_group_mappings_auto_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates> global_register_states; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces> global_route_interfaces; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes> global_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::RegisterStates> register_states; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces> route_interfaces; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::Routes> routes; // presence node


}; // Pim::DefaultContext::Ipv4::Maximum


class Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings : public Entity
{
    public:
        BsrGlobalGroupMappings();
        ~BsrGlobalGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_global_group_mappings; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings


class Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes : public Entity
{
    public:
        GlobalRoutes();
        ~GlobalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_routes; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes


class Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp : public Entity
{
    public:
        GlobalGroupMappingsAutoRp();
        ~GlobalGroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_global_group_ranges_auto_rp; //type: uint32
        YLeaf threshold_global_group_ranges_auto_rp; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp


class Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache : public Entity
{
    public:
        BsrGlobalCandidateRpCache();
        ~BsrGlobalCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_global_candidate_rp_cache; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache


class Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates : public Entity
{
    public:
        GlobalRegisterStates();
        ~GlobalRegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_register_states; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates


class Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces : public Entity
{
    public:
        GlobalRouteInterfaces();
        ~GlobalRouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_route_interfaces; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces


class Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp : public Entity
{
    public:
        GroupMappingsAutoRp();
        ~GroupMappingsAutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_group_ranges_auto_rp; //type: uint32
        YLeaf threshold_group_ranges_auto_rp; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp


class Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings : public Entity
{
    public:
        BsrGroupMappings();
        ~BsrGroupMappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_group_ranges; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings


class Pim::DefaultContext::Ipv4::Maximum::RegisterStates : public Entity
{
    public:
        RegisterStates();
        ~RegisterStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_register_states; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::RegisterStates


class Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces : public Entity
{
    public:
        RouteInterfaces();
        ~RouteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_route_interfaces; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces


class Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache : public Entity
{
    public:
        BsrCandidateRpCache();
        ~BsrCandidateRpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bsr_maximum_candidate_rp_cache; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache


class Pim::DefaultContext::Ipv4::Maximum::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_routes; //type: uint32
        YLeaf warning_threshold; //type: uint32



}; // Pim::DefaultContext::Ipv4::Maximum::Routes


class Pim::DefaultContext::Ipv4::Ssm : public Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: boolean
        YLeaf range; //type: string



}; // Pim::DefaultContext::Ipv4::Ssm


class Pim::DefaultContext::Ipv4::Injects : public Entity
{
    public:
        Injects();
        ~Injects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Inject; //type: Pim::DefaultContext::Ipv4::Injects::Inject

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Injects::Inject> > inject;


}; // Pim::DefaultContext::Ipv4::Injects


class Pim::DefaultContext::Ipv4::Injects::Inject : public Entity
{
    public:
        Inject();
        ~Inject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeafList rpf_proxy_address; //type: list of  string



}; // Pim::DefaultContext::Ipv4::Injects::Inject


class Pim::DefaultContext::Ipv4::BidirRpAddresses : public Entity
{
    public:
        BidirRpAddresses();
        ~BidirRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BidirRpAddress; //type: Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress> > bidir_rp_address;


}; // Pim::DefaultContext::Ipv4::BidirRpAddresses


class Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress : public Entity
{
    public:
        BidirRpAddress();
        ~BidirRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf access_list_name; //type: string
        YLeaf auto_rp_override; //type: boolean



}; // Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress


class Pim::DefaultContext::Ipv4::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateBsr; //type: Pim::DefaultContext::Ipv4::Bsr::CandidateBsr
        class CandidateRps; //type: Pim::DefaultContext::Ipv4::Bsr::CandidateRps

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateBsr> candidate_bsr; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateRps> candidate_rps;


}; // Pim::DefaultContext::Ipv4::Bsr


class Pim::DefaultContext::Ipv4::Bsr::CandidateBsr : public Entity
{
    public:
        CandidateBsr();
        ~CandidateBsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: uint32



}; // Pim::DefaultContext::Ipv4::Bsr::CandidateBsr


class Pim::DefaultContext::Ipv4::Bsr::CandidateRps : public Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp> > candidate_rp;


}; // Pim::DefaultContext::Ipv4::Bsr::CandidateRps


class Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf mode; //type: PimProtocolModeEnum
        YLeaf group_list; //type: string
        YLeaf priority; //type: uint32
        YLeaf interval; //type: uint32



}; // Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp


class Pim::DefaultContext::Ipv4::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Path; //type: Pim::DefaultContext::Ipv4::Paths::Path

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Paths::Path> > path;


}; // Pim::DefaultContext::Ipv4::Paths

class PimProtocolModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sm;
        static const Enum::YLeaf bidir;

};

class PimMultipathEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf interface_hash;
        static const Enum::YLeaf source_hash;
        static const Enum::YLeaf source_next_hop_hash;
        static const Enum::YLeaf source_group_hash;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_CFG_0_ */

