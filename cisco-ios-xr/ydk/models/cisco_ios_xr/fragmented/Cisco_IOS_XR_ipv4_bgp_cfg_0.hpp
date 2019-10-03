#ifndef _CISCO_IOS_XR_IPV4_BGP_CFG_0_
#define _CISCO_IOS_XR_IPV4_BGP_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

class Bgp : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Instance; //type: Bgp::Instance

        ydk::YList instance;
        
}; // Bgp


class Bgp::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_name; //type: string
        class InstanceAs; //type: Bgp::Instance::InstanceAs

        ydk::YList instance_as;
        
}; // Bgp::Instance


class Bgp::Instance::InstanceAs : public ydk::Entity
{
    public:
        InstanceAs();
        ~InstanceAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        class FourByteAs; //type: Bgp::Instance::InstanceAs::FourByteAs

        ydk::YList four_byte_as;
        
}; // Bgp::Instance::InstanceAs


class Bgp::Instance::InstanceAs::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf bgp_running; //type: empty
        class Vrfs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs
        class DefaultVrf; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf> default_vrf;
        
}; // Bgp::Instance::InstanceAs::FourByteAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs : public ydk::Entity
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

        class Vrf; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf : public ydk::Entity
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
        class VrfGlobal; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal
        class VrfNeighbors; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal> vrf_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors> vrf_neighbors;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal : public ydk::Entity
{
    public:
        VrfGlobal();
        ~VrfGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exists; //type: empty
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf disable_enforce_first_as; //type: empty
        ydk::YLeaf best_path_cost_community; //type: empty
        ydk::YLeaf best_path_aigp_ignore; //type: empty
        ydk::YLeaf best_path_as_path_length; //type: empty
        ydk::YLeaf igp_redist_internal; //type: empty
        ydk::YLeaf multi_path_as_path_ignore_onwards; //type: empty
        ydk::YLeaf disable_fast_external_fallover; //type: empty
        ydk::YLeaf unsafe_ebgp_policy; //type: empty
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf default_info_originate; //type: empty
        ydk::YLeaf rpki_origin_as_validity_signal_ibgp; //type: empty
        ydk::YLeaf rpki_bestpath_use_origin_as_validity; //type: empty
        ydk::YLeaf best_path_confederation_paths; //type: empty
        ydk::YLeaf best_path_as_multipath_relax; //type: empty
        ydk::YLeaf disable_auto_soft_reset; //type: empty
        ydk::YLeaf disable_msg_log; //type: empty
        ydk::YLeaf best_path_igp_metric_ignore; //type: empty
        ydk::YLeaf next_hop_res_allow_default; //type: empty
        ydk::YLeaf next_hop_mpls_fwd_ibgp; //type: empty
        ydk::YLeaf disable_neighbor_logging; //type: empty
        ydk::YLeaf best_path_med_always; //type: empty
        ydk::YLeaf best_path_router_id; //type: empty
        ydk::YLeaf best_path_med_missing; //type: empty
        ydk::YLeaf local_preference; //type: uint32
        class RouteDistinguisher; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher
        class VrfGlobalAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs
        class MplsActivatedInterfaces; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces
        class GlobalTimers; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers
        class Bfd; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd
        class SendSocketBufferSizes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes
        class ReceiveSocketBufferSizes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher> route_distinguisher;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs> vrf_global_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces> mpls_activated_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers> global_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes> send_socket_buffer_sizes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes> receive_socket_buffer_sizes;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher : public ydk::Entity
{
    public:
        RouteDistinguisher();
        ~RouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpRouteDistinguisher
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs : public ydk::Entity
{
    public:
        VrfGlobalAfs();
        ~VrfGlobalAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfGlobalAf; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf

        ydk::YList vrf_global_af;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf : public ydk::Entity
{
    public:
        VrfGlobalAf();
        ~VrfGlobalAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf rt_download; //type: empty
        ydk::YLeaf allow_vpn_default_originate; //type: boolean
        ydk::YLeaf rpki_origin_as_validation_enable; //type: empty
        ydk::YLeaf dynamic_med_interval; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf table_policy; //type: string
        ydk::YLeaf attribute_download; //type: empty
        ydk::YLeaf best_external; //type: boolean
        ydk::YLeaf rpki_origin_as_validity_signal_ibgp; //type: empty
        ydk::YLeaf additional_paths_receive; //type: BgpAfAdditionalPathsCfg
        ydk::YLeaf permanent_network; //type: string
        ydk::YLeaf rpki_bestpath_use_origin_as_validity; //type: empty
        ydk::YLeaf srv6_label_allocation_mode; //type: string
        ydk::YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        ydk::YLeaf next_hop_resolution_prefix_length_minimum; //type: uint32
        ydk::YLeaf reset_weight_on_import; //type: boolean
        ydk::YLeaf additional_paths_send; //type: BgpAfAdditionalPathsCfg
        ydk::YLeaf advertise_local_labeled_route_safi_unicast; //type: BgpAdvertiseLocalLabeledRouteCfg
        ydk::YLeaf disable_as_path_loop_check; //type: empty
        class Mvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn
        class Ebgp; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp
        class Eibgp; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp
        class Ibgp; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp
        class AggregateAddresses; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses
        class OptimalRouteReflectorGroups; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups
        class Dampening; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening
        class RipRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes
        class LispRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes
        class StaticRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes
        class Distance; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance
        class ApplicationRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes
        class LabelMode; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode
        class EigrpRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes
        class SourcedNetworks; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks
        class ConnectedRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes
        class AllocateLabel; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel
        class AdditionalPathsSelection; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection
        class OspfRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes
        class MobileRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes
        class SubscriberRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn> mvpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp> ebgp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp> eibgp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp> ibgp; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses> aggregate_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups> optimal_route_reflector_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening> dampening; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes> rip_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes> lisp_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes> static_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance> distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes> application_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode> label_mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes> eigrp_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks> sourced_networks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes> connected_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel> allocate_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection> additional_paths_selection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes> ospf_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes> mobile_routes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes> subscriber_routes; // presence node
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn : public ydk::Entity
{
    public:
        Mvpn();
        ~Mvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf single_forwarder_selection; //type: BgpMvpnSfsSelect

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paths_value; //type: uint32
        ydk::YLeaf unequal_cost; //type: boolean
        ydk::YLeaf selective; //type: boolean
        ydk::YLeaf order_by_igp_metric; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp : public ydk::Entity
{
    public:
        Eibgp();
        ~Eibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paths_value; //type: uint32
        ydk::YLeaf unequal_cost; //type: boolean
        ydk::YLeaf selective; //type: boolean
        ydk::YLeaf order_by_igp_metric; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paths_value; //type: uint32
        ydk::YLeaf unequal_cost; //type: boolean
        ydk::YLeaf selective; //type: boolean
        ydk::YLeaf order_by_igp_metric; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses : public ydk::Entity
{
    public:
        AggregateAddresses();
        ~AggregateAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AggregateAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress

        ydk::YList aggregate_address;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress : public ydk::Entity
{
    public:
        AggregateAddress();
        ~AggregateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggregate_addr; //type: string
        ydk::YLeaf aggregate_prefix; //type: uint16
        ydk::YLeaf generate_set_info; //type: boolean
        ydk::YLeaf generate_confederation_set_info; //type: boolean
        ydk::YLeaf summary_only; //type: boolean
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups : public ydk::Entity
{
    public:
        OptimalRouteReflectorGroups();
        ~OptimalRouteReflectorGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptimalRouteReflectorGroup; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup

        ydk::YList optimal_route_reflector_group;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup : public ydk::Entity
{
    public:
        OptimalRouteReflectorGroup();
        ~OptimalRouteReflectorGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf primary_root_address; //type: string
        ydk::YLeaf secondary_root_address; //type: string
        ydk::YLeaf tertiary_root_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf half_life; //type: uint32
        ydk::YLeaf reuse_threshold; //type: uint32
        ydk::YLeaf suppress_threshold; //type: uint32
        ydk::YLeaf suppress_time; //type: uint32
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes : public ydk::Entity
{
    public:
        RipRoutes();
        ~RipRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf not_used; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes : public ydk::Entity
{
    public:
        LispRoutes();
        ~LispRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes : public ydk::Entity
{
    public:
        StaticRoutes();
        ~StaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf not_used; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_routes; //type: uint32
        ydk::YLeaf internal_routes; //type: uint32
        ydk::YLeaf local_routes; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes : public ydk::Entity
{
    public:
        ApplicationRoutes();
        ~ApplicationRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationRoute; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute

        ydk::YList application_route;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute : public ydk::Entity
{
    public:
        ApplicationRoute();
        ~ApplicationRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf not_used; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode : public ydk::Entity
{
    public:
        LabelMode();
        ~LabelMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_allocation_mode; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes : public ydk::Entity
{
    public:
        EigrpRoutes();
        ~EigrpRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EigrpRoute; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute

        ydk::YList eigrp_route;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute : public ydk::Entity
{
    public:
        EigrpRoute();
        ~EigrpRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf redist_type; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks : public ydk::Entity
{
    public:
        SourcedNetworks();
        ~SourcedNetworks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourcedNetwork; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork

        ydk::YList sourced_network;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork : public ydk::Entity
{
    public:
        SourcedNetwork();
        ~SourcedNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_addr; //type: string
        ydk::YLeaf network_prefix; //type: uint16
        ydk::YLeaf backdoor; //type: boolean
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes : public ydk::Entity
{
    public:
        ConnectedRoutes();
        ~ConnectedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf not_used; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel : public ydk::Entity
{
    public:
        AllocateLabel();
        ~AllocateLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: boolean
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf un_labeled_path; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection : public ydk::Entity
{
    public:
        AdditionalPathsSelection();
        ~AdditionalPathsSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selection; //type: BgpAfAdditionalPathsCfg
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes : public ydk::Entity
{
    public:
        OspfRoutes();
        ~OspfRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OspfRoute; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute

        ydk::YList ospf_route;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute : public ydk::Entity
{
    public:
        OspfRoute();
        ~OspfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf redist_type; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes : public ydk::Entity
{
    public:
        MobileRoutes();
        ~MobileRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf not_used; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes : public ydk::Entity
{
    public:
        SubscriberRoutes();
        ~SubscriberRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf not_used; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces : public ydk::Entity
{
    public:
        MplsActivatedInterfaces();
        ~MplsActivatedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsActivatedInterface; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface

        ydk::YList mpls_activated_interface;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface : public ydk::Entity
{
    public:
        MplsActivatedInterface();
        ~MplsActivatedInterface();

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

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers : public ydk::Entity
{
    public:
        GlobalTimers();
        ~GlobalTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keepalive; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf min_accept_hold_time; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd : public ydk::Entity
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

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes : public ydk::Entity
{
    public:
        SendSocketBufferSizes();
        ~SendSocketBufferSizes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_send_size; //type: uint32
        ydk::YLeaf bgp_send_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes : public ydk::Entity
{
    public:
        ReceiveSocketBufferSizes();
        ~ReceiveSocketBufferSizes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_receive_size; //type: uint32
        ydk::YLeaf bgp_receive_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors : public ydk::Entity
{
    public:
        VrfNeighbors();
        ~VrfNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNeighbor; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor
        class VrfNeighborPrefixLength; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength

        ydk::YList vrf_neighbor;
        ydk::YList vrf_neighbor_prefix_length;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor : public ydk::Entity
{
    public:
        VrfNeighbor();
        ~VrfNeighbor();

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
        ydk::YLeaf internal_vpn_client_ibgp_ce; //type: boolean
        ydk::YLeaf session_group_add_member; //type: string
        ydk::YLeaf egress_peer_engineering; //type: boolean
        ydk::YLeaf neighbor_graceful_restart_stalepath_time; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf description; //type: string
        ydk::YLeaf neighbor_group_add_member; //type: string
        ydk::YLeaf ebgp_recv_dmz; //type: boolean
        ydk::YLeaf neighbor_graceful_restart; //type: BgpNbrgr
        ydk::YLeaf enforce_first_as; //type: boolean
        ydk::YLeaf idle_watch_time; //type: uint32
        ydk::YLeaf session_open_mode; //type: BgpTcpMode
        ydk::YLeaf rpki_origin_as_validation_disable; //type: empty
        ydk::YLeaf ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf suppress_all_capabilities; //type: boolean
        ydk::YLeaf max_peers; //type: uint32
        ydk::YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        ydk::YLeaf additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfg
        ydk::YLeaf propagate_dmz_link_bandwidth; //type: boolean
        ydk::YLeaf bfd_enable_modes; //type: BgpBfdEnableMode
        ydk::YLeaf ttl_security; //type: boolean
        ydk::YLeaf neighbor_graceful_restart_time; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf bfd_minimum_interval; //type: uint32
        ydk::YLeaf remote_as_list; //type: string
        ydk::YLeaf additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfg
        ydk::YLeaf ignore_connected_check_ebgp; //type: boolean
        ydk::YLeaf suppress_four_byte_as_capability; //type: boolean
        ydk::YLeaf update_source_interface; //type: string
        class VrfNeighborAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs
        class LocalAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress
        class BmpActivates; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates
        class EbgpMultihop; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop
        class RemoteAs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs
        class LocalAs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs
        class Password; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password
        class AdvertisementInterval; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval
        class NeighborClusterId; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId
        class Tcpmss; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss
        class Tos; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos
        class UpdateInFiltering; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering
        class MsgLogOut; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut
        class AoKeychain; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain
        class ReceiveBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize
        class MsgLogIn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn
        class SendBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize
        class Timers; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers
        class Keychain; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain
        class GracefulMaintenance; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs> vrf_neighbor_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates> bmp_activates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs> remote_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs> local_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password> password;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval> advertisement_interval; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId> neighbor_cluster_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss> tcpmss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos> tos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering> update_in_filtering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut> msg_log_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain> ao_keychain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize> receive_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn> msg_log_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize> send_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain> keychain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance> graceful_maintenance;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs : public ydk::Entity
{
    public:
        VrfNeighborAfs();
        ~VrfNeighborAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNeighborAf; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf

        ydk::YList vrf_neighbor_af;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf : public ydk::Entity
{
    public:
        VrfNeighborAf();
        ~VrfNeighborAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf neighbor_af_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf send_ext_community_ebgp; //type: boolean
        ydk::YLeaf accept_route_legacy_rt; //type: boolean
        ydk::YLeaf send_community_ebgp; //type: boolean
        ydk::YLeaf next_hop_unchanged; //type: boolean
        ydk::YLeaf advertise_local_labeled_route; //type: BgpAdvertiseLocalLabeledRouteCfg
        ydk::YLeaf rpki_origin_as_validation_disable; //type: empty
        ydk::YLeaf flowspec_validation; //type: BgpFlowspecValidationCfg
        ydk::YLeaf encapsulation_type; //type: BgpAfEncapsulation
        ydk::YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        ydk::YLeaf enforce_multiple_labels; //type: boolean
        ydk::YLeaf as_override; //type: boolean
        ydk::YLeaf multipath; //type: empty
        ydk::YLeaf send_community_ebgp_graceful_shutdown; //type: boolean
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf prefix_orf_policy; //type: string
        ydk::YLeaf aigp; //type: BgpAigpCfg
        ydk::YLeaf aigp_send_med; //type: BgpAigpCfg
        ydk::YLeaf allow_as_in; //type: uint32
        ydk::YLeaf advertise_orf; //type: BgpOrf
        ydk::YLeaf route_reflector_client; //type: boolean
        ydk::YLeaf next_hop_self; //type: boolean
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_weight; //type: uint32
        ydk::YLeaf af_group; //type: string
        ydk::YLeaf next_hop_unchanged_multipath; //type: boolean
        ydk::YLeaf optimal_route_reflection_group; //type: string
        ydk::YLeaf accept_own; //type: boolean
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf advertise_permanent_network; //type: empty
        class AigpCostCommunity; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity
        class AdvertiseDefImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6
        class AdvertiseDisable; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable
        class MaximumPrefixes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes
        class RemovePrivateAsEntireAsPathInbound; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound
        class AdvertiseDefImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4
        class AdvertiseL2vpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn
        class AdvertiseLocalL2vpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn
        class NeighborAfLongLivedGracefulRestartStaleTime; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime
        class SiteOfOrigin; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin
        class AdvertiseV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6
        class AdvertiseLocalV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6
        class Import; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import
        class DefaultOriginate; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate
        class SoftReconfiguration; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration
        class AdvertiseVrfImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6
        class AdvertiseV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4
        class AdvertiseLocalV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4
        class RemovePrivateAsEntireAsPath; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath
        class AdvertiseVrfImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity> aigp_cost_community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable> advertise_disable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes> maximum_prefixes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn> advertise_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn> advertise_local_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin> site_of_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6> advertise_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6> advertise_local_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import> import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate> default_originate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration> soft_reconfiguration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6> advertise_vrf_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4> advertise_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4> advertise_local_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4> advertise_vrf_imp_disable_v4;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity : public ydk::Entity
{
    public:
        AigpCostCommunity();
        ~AigpCostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf cost_community_id; //type: uint32
        ydk::YLeaf transitive; //type: boolean
        ydk::YLeaf cost_community_poi_type; //type: BgpAigpCfgPoi

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV6();
        ~AdvertiseDefImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable : public ydk::Entity
{
    public:
        AdvertiseDisable();
        ~AdvertiseDisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes : public ydk::Entity
{
    public:
        MaximumPrefixes();
        ~MaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_limit; //type: uint32
        ydk::YLeaf warning_percentage; //type: uint32
        ydk::YLeaf warning_only; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf discard_extra_paths; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPathInbound();
        ~RemovePrivateAsEntireAsPathInbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV4();
        ~AdvertiseDefImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn : public ydk::Entity
{
    public:
        AdvertiseL2vpnEvpn();
        ~AdvertiseL2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn : public ydk::Entity
{
    public:
        AdvertiseLocalL2vpnEvpn();
        ~AdvertiseLocalL2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime : public ydk::Entity
{
    public:
        NeighborAfLongLivedGracefulRestartStaleTime();
        ~NeighborAfLongLivedGracefulRestartStaleTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stale_time_send; //type: uint32
        ydk::YLeaf stale_time_accept; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin : public ydk::Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpSiteOfOrigin
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6 : public ydk::Entity
{
    public:
        AdvertiseV6();
        ~AdvertiseV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6 : public ydk::Entity
{
    public:
        AdvertiseLocalV6();
        ~AdvertiseLocalV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf import_stitching; //type: boolean
        ydk::YLeaf import_reoriginate; //type: boolean
        ydk::YLeaf import_reoriginate_stitching; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate : public ydk::Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration : public ydk::Entity
{
    public:
        SoftReconfiguration();
        ~SoftReconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inbound_soft; //type: boolean
        ydk::YLeaf soft_always; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseVrfImpDisableV6();
        ~AdvertiseVrfImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4 : public ydk::Entity
{
    public:
        AdvertiseV4();
        ~AdvertiseV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4 : public ydk::Entity
{
    public:
        AdvertiseLocalV4();
        ~AdvertiseLocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPath();
        ~RemovePrivateAsEntireAsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseVrfImpDisableV4();
        ~AdvertiseVrfImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress : public ydk::Entity
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

        ydk::YLeaf local_address_disable; //type: boolean
        ydk::YLeaf local_ip_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates : public ydk::Entity
{
    public:
        BmpActivates();
        ~BmpActivates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BmpActivate; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate

        ydk::YList bmp_activate;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate : public ydk::Entity
{
    public:
        BmpActivate();
        ~BmpActivate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_id; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_hop_count; //type: uint32
        ydk::YLeaf mpls_deactivation; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs : public ydk::Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

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

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs : public ydk::Entity
{
    public:
        LocalAs();
        ~LocalAs();

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
        ydk::YLeaf no_prepend; //type: empty
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf replace_as; //type: empty
        ydk::YLeaf dual_as; //type: empty

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password : public ydk::Entity
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

        ydk::YLeaf password_disable; //type: boolean
        ydk::YLeaf password; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval : public ydk::Entity
{
    public:
        AdvertisementInterval();
        ~AdvertisementInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf minimum_interval_msecs; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId : public ydk::Entity
{
    public:
        NeighborClusterId();
        ~NeighborClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster_id_number; //type: uint32
        ydk::YLeaf cluster_id_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss : public ydk::Entity
{
    public:
        Tcpmss();
        ~Tcpmss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcpmss_disable; //type: boolean
        ydk::YLeaf mss; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpTos
        ydk::YLeaf value_; //type: one of uint32, enumeration

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering : public ydk::Entity
{
    public:
        UpdateInFiltering();
        ~UpdateInFiltering();

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
        ydk::YLeaf update_in_filtering_attribute_filter_group; //type: string
        ydk::YLeaf update_in_filtering_syslog_disable; //type: empty
        class UpdateInFilteringMessageBuffers; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers : public ydk::Entity
{
    public:
        UpdateInFilteringMessageBuffers();
        ~UpdateInFilteringMessageBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_buffers; //type: uint32
        ydk::YLeaf non_circular_buffer; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut : public ydk::Entity
{
    public:
        MsgLogOut();
        ~MsgLogOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_log_disable; //type: boolean
        ydk::YLeaf msg_log_inherit_disable; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain : public ydk::Entity
{
    public:
        AoKeychain();
        ~AoKeychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ao_keychain_disable; //type: boolean
        ydk::YLeaf ao_keychain_name; //type: string
        ydk::YLeaf ao_include_tcp_options; //type: boolean
        ydk::YLeaf ao_accept_mismatch_connection; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize : public ydk::Entity
{
    public:
        ReceiveBufferSize();
        ~ReceiveBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_receive_size; //type: uint32
        ydk::YLeaf bgp_receive_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn : public ydk::Entity
{
    public:
        MsgLogIn();
        ~MsgLogIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_log_disable; //type: boolean
        ydk::YLeaf msg_log_inherit_disable; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize : public ydk::Entity
{
    public:
        SendBufferSize();
        ~SendBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_send_size; //type: uint32
        ydk::YLeaf bgp_send_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf min_accept_hold_time; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keychain_disable; //type: boolean
        ydk::YLeaf keychain_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance : public ydk::Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

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
        ydk::YLeaf graceful_maintenance_activate; //type: boolean
        class GracefulMaintenanceLocalPreference; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference
        class GracefulMaintenanceAsPrepends; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference : public ydk::Entity
{
    public:
        GracefulMaintenanceLocalPreference();
        ~GracefulMaintenanceLocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_loc_pref_disable; //type: boolean
        ydk::YLeaf local_preference; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends : public ydk::Entity
{
    public:
        GracefulMaintenanceAsPrepends();
        ~GracefulMaintenanceAsPrepends();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_prepends_disable; //type: boolean
        ydk::YLeaf as_prepends; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength : public ydk::Entity
{
    public:
        VrfNeighborPrefixLength();
        ~VrfNeighborPrefixLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf internal_vpn_client_ibgp_ce; //type: boolean
        ydk::YLeaf session_group_add_member; //type: string
        ydk::YLeaf egress_peer_engineering; //type: boolean
        ydk::YLeaf neighbor_graceful_restart_stalepath_time; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf description; //type: string
        ydk::YLeaf neighbor_group_add_member; //type: string
        ydk::YLeaf ebgp_recv_dmz; //type: boolean
        ydk::YLeaf neighbor_graceful_restart; //type: BgpNbrgr
        ydk::YLeaf enforce_first_as; //type: boolean
        ydk::YLeaf idle_watch_time; //type: uint32
        ydk::YLeaf session_open_mode; //type: BgpTcpMode
        ydk::YLeaf rpki_origin_as_validation_disable; //type: empty
        ydk::YLeaf ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf suppress_all_capabilities; //type: boolean
        ydk::YLeaf max_peers; //type: uint32
        ydk::YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        ydk::YLeaf additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfg
        ydk::YLeaf propagate_dmz_link_bandwidth; //type: boolean
        ydk::YLeaf bfd_enable_modes; //type: BgpBfdEnableMode
        ydk::YLeaf ttl_security; //type: boolean
        ydk::YLeaf neighbor_graceful_restart_time; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf bfd_minimum_interval; //type: uint32
        ydk::YLeaf remote_as_list; //type: string
        ydk::YLeaf additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfg
        ydk::YLeaf ignore_connected_check_ebgp; //type: boolean
        ydk::YLeaf suppress_four_byte_as_capability; //type: boolean
        ydk::YLeaf update_source_interface; //type: string
        class VrfNeighborAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs
        class LocalAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress
        class BmpActivates; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates
        class EbgpMultihop; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop
        class RemoteAs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs
        class LocalAs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs
        class Password; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password
        class AdvertisementInterval; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval
        class NeighborClusterId; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId
        class Tcpmss; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss
        class Tos; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos
        class UpdateInFiltering; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering
        class MsgLogOut; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut
        class AoKeychain; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain
        class ReceiveBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize
        class MsgLogIn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn
        class SendBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize
        class Timers; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers
        class Keychain; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain
        class GracefulMaintenance; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs> vrf_neighbor_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates> bmp_activates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs> remote_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs> local_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password> password;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval> advertisement_interval; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId> neighbor_cluster_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss> tcpmss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos> tos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering> update_in_filtering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut> msg_log_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain> ao_keychain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize> receive_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn> msg_log_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize> send_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain> keychain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance> graceful_maintenance;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs : public ydk::Entity
{
    public:
        VrfNeighborAfs();
        ~VrfNeighborAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNeighborAf; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf

        ydk::YList vrf_neighbor_af;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf : public ydk::Entity
{
    public:
        VrfNeighborAf();
        ~VrfNeighborAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf neighbor_af_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf send_ext_community_ebgp; //type: boolean
        ydk::YLeaf accept_route_legacy_rt; //type: boolean
        ydk::YLeaf send_community_ebgp; //type: boolean
        ydk::YLeaf next_hop_unchanged; //type: boolean
        ydk::YLeaf advertise_local_labeled_route; //type: BgpAdvertiseLocalLabeledRouteCfg
        ydk::YLeaf rpki_origin_as_validation_disable; //type: empty
        ydk::YLeaf flowspec_validation; //type: BgpFlowspecValidationCfg
        ydk::YLeaf encapsulation_type; //type: BgpAfEncapsulation
        ydk::YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        ydk::YLeaf enforce_multiple_labels; //type: boolean
        ydk::YLeaf as_override; //type: boolean
        ydk::YLeaf multipath; //type: empty
        ydk::YLeaf send_community_ebgp_graceful_shutdown; //type: boolean
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf prefix_orf_policy; //type: string
        ydk::YLeaf aigp; //type: BgpAigpCfg
        ydk::YLeaf aigp_send_med; //type: BgpAigpCfg
        ydk::YLeaf allow_as_in; //type: uint32
        ydk::YLeaf advertise_orf; //type: BgpOrf
        ydk::YLeaf route_reflector_client; //type: boolean
        ydk::YLeaf next_hop_self; //type: boolean
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_weight; //type: uint32
        ydk::YLeaf af_group; //type: string
        ydk::YLeaf next_hop_unchanged_multipath; //type: boolean
        ydk::YLeaf optimal_route_reflection_group; //type: string
        ydk::YLeaf accept_own; //type: boolean
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf advertise_permanent_network; //type: empty
        class AigpCostCommunity; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity
        class AdvertiseDefImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6
        class AdvertiseDisable; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable
        class MaximumPrefixes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes
        class RemovePrivateAsEntireAsPathInbound; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound
        class AdvertiseDefImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4
        class AdvertiseL2vpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn
        class AdvertiseLocalL2vpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn
        class NeighborAfLongLivedGracefulRestartStaleTime; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime
        class SiteOfOrigin; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin
        class AdvertiseV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6
        class AdvertiseLocalV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6
        class Import; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import
        class DefaultOriginate; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate
        class SoftReconfiguration; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration
        class AdvertiseVrfImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6
        class AdvertiseV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4
        class AdvertiseLocalV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4
        class RemovePrivateAsEntireAsPath; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath
        class AdvertiseVrfImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity> aigp_cost_community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable> advertise_disable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes> maximum_prefixes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn> advertise_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn> advertise_local_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin> site_of_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6> advertise_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6> advertise_local_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import> import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate> default_originate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration> soft_reconfiguration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6> advertise_vrf_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4> advertise_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4> advertise_local_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4> advertise_vrf_imp_disable_v4;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity : public ydk::Entity
{
    public:
        AigpCostCommunity();
        ~AigpCostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf cost_community_id; //type: uint32
        ydk::YLeaf transitive; //type: boolean
        ydk::YLeaf cost_community_poi_type; //type: BgpAigpCfgPoi

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV6();
        ~AdvertiseDefImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable : public ydk::Entity
{
    public:
        AdvertiseDisable();
        ~AdvertiseDisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes : public ydk::Entity
{
    public:
        MaximumPrefixes();
        ~MaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_limit; //type: uint32
        ydk::YLeaf warning_percentage; //type: uint32
        ydk::YLeaf warning_only; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf discard_extra_paths; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPathInbound();
        ~RemovePrivateAsEntireAsPathInbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV4();
        ~AdvertiseDefImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn : public ydk::Entity
{
    public:
        AdvertiseL2vpnEvpn();
        ~AdvertiseL2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn : public ydk::Entity
{
    public:
        AdvertiseLocalL2vpnEvpn();
        ~AdvertiseLocalL2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime : public ydk::Entity
{
    public:
        NeighborAfLongLivedGracefulRestartStaleTime();
        ~NeighborAfLongLivedGracefulRestartStaleTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stale_time_send; //type: uint32
        ydk::YLeaf stale_time_accept; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin : public ydk::Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpSiteOfOrigin
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6 : public ydk::Entity
{
    public:
        AdvertiseV6();
        ~AdvertiseV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6 : public ydk::Entity
{
    public:
        AdvertiseLocalV6();
        ~AdvertiseLocalV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf import_stitching; //type: boolean
        ydk::YLeaf import_reoriginate; //type: boolean
        ydk::YLeaf import_reoriginate_stitching; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate : public ydk::Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration : public ydk::Entity
{
    public:
        SoftReconfiguration();
        ~SoftReconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inbound_soft; //type: boolean
        ydk::YLeaf soft_always; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseVrfImpDisableV6();
        ~AdvertiseVrfImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4 : public ydk::Entity
{
    public:
        AdvertiseV4();
        ~AdvertiseV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4 : public ydk::Entity
{
    public:
        AdvertiseLocalV4();
        ~AdvertiseLocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPath();
        ~RemovePrivateAsEntireAsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseVrfImpDisableV4();
        ~AdvertiseVrfImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress : public ydk::Entity
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

        ydk::YLeaf local_address_disable; //type: boolean
        ydk::YLeaf local_ip_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates : public ydk::Entity
{
    public:
        BmpActivates();
        ~BmpActivates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BmpActivate; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate

        ydk::YList bmp_activate;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate : public ydk::Entity
{
    public:
        BmpActivate();
        ~BmpActivate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_id; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_hop_count; //type: uint32
        ydk::YLeaf mpls_deactivation; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs : public ydk::Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

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

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs : public ydk::Entity
{
    public:
        LocalAs();
        ~LocalAs();

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
        ydk::YLeaf no_prepend; //type: empty
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf replace_as; //type: empty
        ydk::YLeaf dual_as; //type: empty

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password : public ydk::Entity
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

        ydk::YLeaf password_disable; //type: boolean
        ydk::YLeaf password; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval : public ydk::Entity
{
    public:
        AdvertisementInterval();
        ~AdvertisementInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf minimum_interval_msecs; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId : public ydk::Entity
{
    public:
        NeighborClusterId();
        ~NeighborClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster_id_number; //type: uint32
        ydk::YLeaf cluster_id_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss : public ydk::Entity
{
    public:
        Tcpmss();
        ~Tcpmss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcpmss_disable; //type: boolean
        ydk::YLeaf mss; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpTos
        ydk::YLeaf value_; //type: one of uint32, enumeration

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering : public ydk::Entity
{
    public:
        UpdateInFiltering();
        ~UpdateInFiltering();

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
        ydk::YLeaf update_in_filtering_attribute_filter_group; //type: string
        ydk::YLeaf update_in_filtering_syslog_disable; //type: empty
        class UpdateInFilteringMessageBuffers; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers : public ydk::Entity
{
    public:
        UpdateInFilteringMessageBuffers();
        ~UpdateInFilteringMessageBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_buffers; //type: uint32
        ydk::YLeaf non_circular_buffer; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut : public ydk::Entity
{
    public:
        MsgLogOut();
        ~MsgLogOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_log_disable; //type: boolean
        ydk::YLeaf msg_log_inherit_disable; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain : public ydk::Entity
{
    public:
        AoKeychain();
        ~AoKeychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ao_keychain_disable; //type: boolean
        ydk::YLeaf ao_keychain_name; //type: string
        ydk::YLeaf ao_include_tcp_options; //type: boolean
        ydk::YLeaf ao_accept_mismatch_connection; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize : public ydk::Entity
{
    public:
        ReceiveBufferSize();
        ~ReceiveBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_receive_size; //type: uint32
        ydk::YLeaf bgp_receive_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn : public ydk::Entity
{
    public:
        MsgLogIn();
        ~MsgLogIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_log_disable; //type: boolean
        ydk::YLeaf msg_log_inherit_disable; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize : public ydk::Entity
{
    public:
        SendBufferSize();
        ~SendBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_send_size; //type: uint32
        ydk::YLeaf bgp_send_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf min_accept_hold_time; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keychain_disable; //type: boolean
        ydk::YLeaf keychain_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance : public ydk::Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

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
        ydk::YLeaf graceful_maintenance_activate; //type: boolean
        class GracefulMaintenanceLocalPreference; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference
        class GracefulMaintenanceAsPrepends; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference : public ydk::Entity
{
    public:
        GracefulMaintenanceLocalPreference();
        ~GracefulMaintenanceLocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_loc_pref_disable; //type: boolean
        ydk::YLeaf local_preference; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends : public ydk::Entity
{
    public:
        GracefulMaintenanceAsPrepends();
        ~GracefulMaintenanceAsPrepends();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_prepends_disable; //type: boolean
        ydk::YLeaf as_prepends; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf : public ydk::Entity
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

        class BgpEntity; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity
        class Global; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity> bgp_entity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global> global;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity : public ydk::Entity
{
    public:
        BgpEntity();
        ~BgpEntity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbors; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors
        class NeighborGroups; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups
        class AfGroups; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups
        class SessionGroups; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups> neighbor_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups> af_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups> session_groups;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor
        class NeighborPrefixLength; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength

        ydk::YList neighbor;
        ydk::YList neighbor_prefix_length;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf internal_vpn_client_ibgp_ce; //type: boolean
        ydk::YLeaf session_group_add_member; //type: string
        ydk::YLeaf egress_peer_engineering; //type: boolean
        ydk::YLeaf neighbor_graceful_restart_stalepath_time; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf description; //type: string
        ydk::YLeaf neighbor_group_add_member; //type: string
        ydk::YLeaf ebgp_recv_dmz; //type: boolean
        ydk::YLeaf neighbor_graceful_restart; //type: BgpNbrgr
        ydk::YLeaf enforce_first_as; //type: boolean
        ydk::YLeaf idle_watch_time; //type: uint32
        ydk::YLeaf session_open_mode; //type: BgpTcpMode
        ydk::YLeaf rpki_origin_as_validation_disable; //type: empty
        ydk::YLeaf ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf suppress_all_capabilities; //type: boolean
        ydk::YLeaf max_peers; //type: uint32
        ydk::YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        ydk::YLeaf additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfg
        ydk::YLeaf propagate_dmz_link_bandwidth; //type: boolean
        ydk::YLeaf bfd_enable_modes; //type: BgpBfdEnableMode
        ydk::YLeaf ttl_security; //type: boolean
        ydk::YLeaf neighbor_graceful_restart_time; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf bfd_minimum_interval; //type: uint32
        ydk::YLeaf remote_as_list; //type: string
        ydk::YLeaf additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfg
        ydk::YLeaf ignore_connected_check_ebgp; //type: boolean
        ydk::YLeaf suppress_four_byte_as_capability; //type: boolean
        ydk::YLeaf update_source_interface; //type: string
        class NeighborAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs
        class LocalAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress
        class BmpActivates; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates
        class EbgpMultihop; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop
        class RemoteAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs
        class LocalAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs
        class Password; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password
        class AdvertisementInterval; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval
        class NeighborClusterId; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId
        class Tcpmss; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss
        class Tos; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos
        class UpdateInFiltering; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering
        class MsgLogOut; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut
        class AoKeychain; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AoKeychain
        class ReceiveBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize
        class MsgLogIn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn
        class SendBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize
        class Timers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers
        class Keychain; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain
        class GracefulMaintenance; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs> neighbor_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates> bmp_activates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs> remote_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs> local_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password> password;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval> advertisement_interval; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId> neighbor_cluster_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss> tcpmss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos> tos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering> update_in_filtering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut> msg_log_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AoKeychain> ao_keychain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize> receive_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn> msg_log_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize> send_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain> keychain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance> graceful_maintenance;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs : public ydk::Entity
{
    public:
        NeighborAfs();
        ~NeighborAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborAf; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf

        ydk::YList neighbor_af;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf : public ydk::Entity
{
    public:
        NeighborAf();
        ~NeighborAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf neighbor_af_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf l2vpn_signalling; //type: BgpSignal
        ydk::YLeaf send_ext_community_ebgp; //type: boolean
        ydk::YLeaf accept_route_legacy_rt; //type: boolean
        ydk::YLeaf send_community_ebgp; //type: boolean
        ydk::YLeaf send_multicast_attr; //type: BgpSendMcastAttrCfg
        ydk::YLeaf next_hop_unchanged; //type: boolean
        ydk::YLeaf advertise_local_labeled_route; //type: BgpAdvertiseLocalLabeledRouteCfg
        ydk::YLeaf rpki_origin_as_validation_disable; //type: empty
        ydk::YLeaf flowspec_validation; //type: BgpFlowspecValidationCfg
        ydk::YLeaf encapsulation_type; //type: BgpAfEncapsulation
        ydk::YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        ydk::YLeaf enforce_multiple_labels; //type: boolean
        ydk::YLeaf as_override; //type: boolean
        ydk::YLeaf multipath; //type: empty
        ydk::YLeaf send_community_ebgp_graceful_shutdown; //type: boolean
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf prefix_orf_policy; //type: string
        ydk::YLeaf aigp; //type: BgpAigpCfg
        ydk::YLeaf aigp_send_med; //type: BgpAigpCfg
        ydk::YLeaf allow_as_in; //type: uint32
        ydk::YLeaf advertise_orf; //type: BgpOrf
        ydk::YLeaf route_reflector_client; //type: boolean
        ydk::YLeaf next_hop_self; //type: boolean
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_weight; //type: uint32
        ydk::YLeaf af_group; //type: string
        ydk::YLeaf next_hop_unchanged_multipath; //type: boolean
        ydk::YLeaf optimal_route_reflection_group; //type: string
        ydk::YLeaf accept_own; //type: boolean
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf advertise_permanent_network; //type: empty
        class AigpCostCommunity; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity
        class AdvertiseDefImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6
        class AdvertiseDisable; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable
        class MaximumPrefixes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes
        class RemovePrivateAsEntireAsPathInbound; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound
        class AdvertiseDefImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4
        class AdvertiseL2vpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn
        class AdvertiseLocalL2vpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn
        class NeighborAfLongLivedGracefulRestartStaleTime; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime
        class AdvertiseV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6
        class AdvertiseLocalV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6
        class Import; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import
        class DefaultOriginate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate
        class SoftReconfiguration; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration
        class AdvertiseVrfImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6
        class AdvertiseV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4
        class AdvertiseLocalV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4
        class RemovePrivateAsEntireAsPath; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath
        class AdvertiseVrfImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity> aigp_cost_community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable> advertise_disable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes> maximum_prefixes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn> advertise_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn> advertise_local_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6> advertise_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6> advertise_local_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import> import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate> default_originate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration> soft_reconfiguration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6> advertise_vrf_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4> advertise_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4> advertise_local_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4> advertise_vrf_imp_disable_v4;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity : public ydk::Entity
{
    public:
        AigpCostCommunity();
        ~AigpCostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf cost_community_id; //type: uint32
        ydk::YLeaf transitive; //type: boolean
        ydk::YLeaf cost_community_poi_type; //type: BgpAigpCfgPoi

}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV6();
        ~AdvertiseDefImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable : public ydk::Entity
{
    public:
        AdvertiseDisable();
        ~AdvertiseDisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes : public ydk::Entity
{
    public:
        MaximumPrefixes();
        ~MaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_limit; //type: uint32
        ydk::YLeaf warning_percentage; //type: uint32
        ydk::YLeaf warning_only; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf discard_extra_paths; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPathInbound();
        ~RemovePrivateAsEntireAsPathInbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV4();
        ~AdvertiseDefImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn : public ydk::Entity
{
    public:
        AdvertiseL2vpnEvpn();
        ~AdvertiseL2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn : public ydk::Entity
{
    public:
        AdvertiseLocalL2vpnEvpn();
        ~AdvertiseLocalL2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn

class BgpSiteOfOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf four_byte_as;

        static int get_enum_value(const std::string & name) {
            if (name == "as") return 0;
            if (name == "ipv4-address") return 1;
            if (name == "four-byte-as") return 2;
            return -1;
        }
};

class BgpAsn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf as_plain;
        static const ydk::Enum::YLeaf asdot;

        static int get_enum_value(const std::string & name) {
            if (name == "as-plain") return 1;
            if (name == "asdot") return 2;
            return -1;
        }
};

class BgpAdvRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_regular_rt;
        static const ydk::Enum::YLeaf bgp_stitching_rt;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-regular-rt") return 0;
            if (name == "bgp-stitching-rt") return 1;
            return -1;
        }
};

class BgpAfEncapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vx_lan;

        static int get_enum_value(const std::string & name) {
            if (name == "vx-lan") return 1;
            return -1;
        }
};

class BgpMvpnSfsSelect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all_paths;
        static const ydk::Enum::YLeaf highest_ip_address;

        static int get_enum_value(const std::string & name) {
            if (name == "all-paths") return 1;
            if (name == "highest-ip-address") return 2;
            return -1;
        }
};

class BgpNbrgr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 0;
            if (name == "false") return 1;
            return -1;
        }
};

class BgpAigpCfgPoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pre_best_path;
        static const ydk::Enum::YLeaf igp_cost;

        static int get_enum_value(const std::string & name) {
            if (name == "pre-best-path") return 1;
            if (name == "igp-cost") return 2;
            return -1;
        }
};

class BgpBfdEnableMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf strict;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "default") return 1;
            if (name == "strict") return 2;
            return -1;
        }
};

class BgpRpkiTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf ssh;

        static int get_enum_value(const std::string & name) {
            if (name == "tcp") return 0;
            if (name == "ssh") return 1;
            return -1;
        }
};

class BmpRouteDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 1;
            return -1;
        }
};

class BgpSendMcastAttrCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class BgpRnhInstallFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ext_comm;
        static const ydk::Enum::YLeaf ext_comm_only;

        static int get_enum_value(const std::string & name) {
            if (name == "ext-comm") return 0;
            if (name == "ext-comm-only") return 1;
            return -1;
        }
};

class BgpRouteDistinguisher : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf four_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "as") return 2;
            if (name == "four-byte-as") return 3;
            if (name == "ipv4-address") return 4;
            return -1;
        }
};

class BgpOrf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "receive") return 1;
            if (name == "send") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class BgpVrfRouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf four_byte_as;

        static int get_enum_value(const std::string & name) {
            if (name == "as") return 0;
            if (name == "ipv4-address") return 1;
            if (name == "four-byte-as") return 2;
            return -1;
        }
};

class BgpEbgpSendDmzEnableMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf cumulative;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "default") return 1;
            if (name == "cumulative") return 2;
            return -1;
        }
};

class BgpClusterId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf number;
        static const ydk::Enum::YLeaf ipv4_address;

        static int get_enum_value(const std::string & name) {
            if (name == "number") return 1;
            if (name == "ipv4-address") return 2;
            return -1;
        }
};

class BgpTcpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf either;
        static const ydk::Enum::YLeaf active_only;
        static const ydk::Enum::YLeaf passive_only;

        static int get_enum_value(const std::string & name) {
            if (name == "either") return 0;
            if (name == "active-only") return 1;
            if (name == "passive-only") return 2;
            return -1;
        }
};

class BgpAigpCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class BmpPolicySelect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf post_policy;

        static int get_enum_value(const std::string & name) {
            if (name == "post-policy") return 2;
            return -1;
        }
};

class BgpFlowspecValidationCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf redirect_nexhop_disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            if (name == "redirect-nexhop-disable") return 3;
            return -1;
        }
};

class BgpSignal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_disable;
        static const ydk::Enum::YLeaf ldp_disable;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-disable") return 1;
            if (name == "ldp-disable") return 2;
            return -1;
        }
};

class BgpGlobalRouteDistinguisher : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf four_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;

        static int get_enum_value(const std::string & name) {
            if (name == "as") return 2;
            if (name == "four-byte-as") return 3;
            if (name == "ipv4-address") return 4;
            return -1;
        }
};

class BgpReorgOpt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_cfg_adv;
        static const ydk::Enum::YLeaf bgp_cfg_adv_reorg;
        static const ydk::Enum::YLeaf bgp_cfg_adv_disable;
        static const ydk::Enum::YLeaf bgp_cfg_adv_local;
        static const ydk::Enum::YLeaf bgp_cfg_adv_def_vrf_imp_disable;
        static const ydk::Enum::YLeaf bgp_cfg_adv_vrf_re_imp_disable;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-cfg-adv") return 1;
            if (name == "bgp-cfg-adv-reorg") return 2;
            if (name == "bgp-cfg-adv-disable") return 3;
            if (name == "bgp-cfg-adv-local") return 4;
            if (name == "bgp-cfg-adv-def-vrf-imp-disable") return 5;
            if (name == "bgp-cfg-adv-vrf-re-imp-disable") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_CFG_0_ */

