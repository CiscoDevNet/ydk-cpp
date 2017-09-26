#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_0_
#define _CISCO_IOS_XR_MPLS_TE_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

class MplsLcac : public ydk::Entity
{
    public:
        MplsLcac();
        ~MplsLcac();

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

        class Neighbors; //type: MplsLcac::Neighbors
        class PreemptionEvents; //type: MplsLcac::PreemptionEvents
        class Advertisements; //type: MplsLcac::Advertisements
        class Statistics; //type: MplsLcac::Statistics
        class BandwidthAllocation; //type: MplsLcac::BandwidthAllocation
        class Gmpls; //type: MplsLcac::Gmpls
        class BfdNeighbors; //type: MplsLcac::BfdNeighbors
        class BandwidthAccount; //type: MplsLcac::BandwidthAccount
        class LinkSummary; //type: MplsLcac::LinkSummary
        class LinkInformation; //type: MplsLcac::LinkInformation
        class AdmissionControl; //type: MplsLcac::AdmissionControl
        class SoftPreemptionGlobalInfo; //type: MplsLcac::SoftPreemptionGlobalInfo
        class SoftPreemptions; //type: MplsLcac::SoftPreemptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl> admission_control;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements> advertisements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount> bandwidth_account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation> bandwidth_allocation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors> bfd_neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls> gmpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation> link_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary> link_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents> preemption_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptionGlobalInfo> soft_preemption_global_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions> soft_preemptions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics> statistics;
        
}; // MplsLcac


class MplsLcac::AdmissionControl : public ydk::Entity
{
    public:
        AdmissionControl();
        ~AdmissionControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Global; //type: MplsLcac::AdmissionControl::Global
        class AdmittedTunnels; //type: MplsLcac::AdmissionControl::AdmittedTunnels
        class LinkInterfaces; //type: MplsLcac::AdmissionControl::LinkInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::AdmittedTunnels> admitted_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::LinkInterfaces> link_interfaces;
        
}; // MplsLcac::AdmissionControl


class MplsLcac::AdmissionControl::AdmittedTunnels : public ydk::Entity
{
    public:
        AdmittedTunnels();
        ~AdmittedTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AdmittedTunnel; //type: MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel> > admitted_tunnel;
        
}; // MplsLcac::AdmissionControl::AdmittedTunnels


class MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel : public ydk::Entity
{
    public:
        AdmittedTunnel();
        ~AdmittedTunnel();

        bool has_data() const override;
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
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf bandwidth_state; //type: BandwidthStateEnum
        ydk::YLeaf bandwidth_pool; //type: BandwidthTypeEnum
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf up_link_name; //type: string
        ydk::YLeaf down_link_name; //type: string
        ydk::YLeaf tunnel_state; //type: TunnelStateEnum
        ydk::YLeaf bandwidth; //type: uint64
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf backup_interface; //type: string
        ydk::YLeaf is_rerouted; //type: boolean

}; // MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel


class MplsLcac::AdmissionControl::Global : public ydk::Entity
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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf total_tunnels; //type: uint32
        ydk::YLeaf total_p2mp_tunnels; //type: uint32
        ydk::YLeaf selected_tunnels; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum

}; // MplsLcac::AdmissionControl::Global


class MplsLcac::AdmissionControl::LinkInterfaces : public ydk::Entity
{
    public:
        LinkInterfaces();
        ~LinkInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LinkInterface; //type: MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface> > link_interface;
        
}; // MplsLcac::AdmissionControl::LinkInterfaces


class MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface : public ydk::Entity
{
    public:
        LinkInterface();
        ~LinkInterface();

        bool has_data() const override;
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
        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf total_tunnels; //type: uint32
        ydk::YLeaf total_p2mp_tunnels; //type: uint32
        ydk::YLeaf selected_tunnels; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum

}; // MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface


class MplsLcac::Advertisements : public ydk::Entity
{
    public:
        Advertisements();
        ~Advertisements();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flooding_status_message; //type: string
        ydk::YLeaf last_flooding_time; //type: uint32
        ydk::YLeaf last_flooding_trigger; //type: FloodingTrigger
        ydk::YLeaf next_flooding_time; //type: uint32
        ydk::YLeaf ds_te_mode; //type: RrrDsteMigrationMode
        class AdvertizedAreas; //type: MplsLcac::Advertisements::AdvertizedAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas> > advertized_areas;
        
}; // MplsLcac::Advertisements


class MplsLcac::Advertisements::AdvertizedAreas : public ydk::Entity
{
    public:
        AdvertizedAreas();
        ~AdvertizedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf igp_area_id; //type: string
        ydk::YLeaf protocol; //type: IgpProtocol
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf router_id; //type: string
        class FloodedLink; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink> > flooded_link;
        
}; // MplsLcac::Advertisements::AdvertizedAreas


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink : public ydk::Entity
{
    public:
        FloodedLink();
        ~FloodedLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf link_id; //type: uint16
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf subnet_type; //type: IgpSubnet
        ydk::YLeaf outgoing_interface_id; //type: uint32
        ydk::YLeaf is_designated_router; //type: boolean
        ydk::YLeaf designated_router_igp_id; //type: string
        ydk::YLeaf neighbor_igp_id; //type: string
        ydk::YLeaf igp_neighbor_address; //type: string
        ydk::YLeaf incoming_interface_id; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf uni_link_delay; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        ydk::YLeaf physical_bandwidth; //type: uint32
        ydk::YLeaf bcm_id; //type: uint16
        ydk::YLeaf link_maximum_reservable_bandwidth; //type: uint32
        ydk::YLeaf reservable_pool0_bandwidth; //type: uint32
        ydk::YLeaf reservable_pool1_bandwidth; //type: uint32
        ydk::YLeaf is_receiving_reservable_bandwidth_enabled; //type: boolean
        ydk::YLeaf receiving_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_transmitting_reservable_bandwidth_enabled; //type: boolean
        ydk::YLeaf transmitting_direction; //type: LinkDirectionEnum
        ydk::YLeaf affinity_attribute_flags; //type: uint32
        class OduLinkCapabilities; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities
        class ExtendedAffinityAttributeFlag; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag
        class SharedRiskLinkGroup; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup
        class ReceivingReservableBandwidth; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth
        class TransmittingReservableBandwidth; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag> > extended_affinity_attribute_flag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth> > receiving_reservable_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth> > transmitting_reservable_bandwidth;
        
}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag : public ydk::Entity
{
    public:
        ExtendedAffinityAttributeFlag();
        ~ExtendedAffinityAttributeFlag();

        bool has_data() const override;
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

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MaxLspBandwidth; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth
        class OduCapability; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth> > max_lsp_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability> > odu_capability;
        
}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class BandwidthInfo; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: TeOduCapability
        class Fixed; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_od_us; //type: uint8
        ydk::YLeaf unreserved_od_us; //type: uint8

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf max_bandwidth; //type: uint32
        ydk::YLeaf unreserved_bandwidth; //type: uint32
        ydk::YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth : public ydk::Entity
{
    public:
        ReceivingReservableBandwidth();
        ~ReceivingReservableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf pool0_bandwidth; //type: uint32
        ydk::YLeaf pool1_bandwidth; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth : public ydk::Entity
{
    public:
        TransmittingReservableBandwidth();
        ~TransmittingReservableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf pool0_bandwidth; //type: uint32
        ydk::YLeaf pool1_bandwidth; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth


class MplsLcac::BandwidthAccount : public ydk::Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BandwidthAccountLinks; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks> bandwidth_account_links;
        
}; // MplsLcac::BandwidthAccount


class MplsLcac::BandwidthAccount::BandwidthAccountLinks : public ydk::Entity
{
    public:
        BandwidthAccountLinks();
        ~BandwidthAccountLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BandwidthAccountLink; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink> > bandwidth_account_link;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink : public ydk::Entity
{
    public:
        BandwidthAccountLink();
        ~BandwidthAccountLink();

        bool has_data() const override;
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
        ydk::YLeaf link_id; //type: string
        class CommonInfo; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo
        class RsvpTeSampleHistory; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory
        class SrSampleHistory; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo> common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory> rsvp_te_sample_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory> sr_sample_history;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo : public ydk::Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bandwidth_account_enabled; //type: boolean
        ydk::YLeaf application_enforced; //type: boolean
        ydk::YLeaf collection_type; //type: BandwidthAccountingCollection
        ydk::YLeaf sample_time_remaining_timestamp_nanosec; //type: uint64
        ydk::YLeaf last_sample_collection_timestamp_nanosec; //type: uint64
        ydk::YLeaf next_sample_collection_nanosec; //type: uint64
        ydk::YLeaf application_time_remaining_nanosec; //type: uint64
        ydk::YLeaf last_application_timestamp_nanosec; //type: uint64
        ydk::YLeaf next_application_timestamp_nanosec; //type: uint64
        ydk::YLeaf effective_maximum_reservable_bandwidth; //type: uint64
        class RsvpTeBandwidthUtilization; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization
        class SrBandwidthUtilization; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization> rsvp_te_bandwidth_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization> sr_bandwidth_utilization;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization : public ydk::Entity
{
    public:
        RsvpTeBandwidthUtilization();
        ~RsvpTeBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_link_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization : public ydk::Entity
{
    public:
        SrBandwidthUtilization();
        ~SrBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory : public ydk::Entity
{
    public:
        RsvpTeSampleHistory();
        ~RsvpTeSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpTeActiveIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample
        class RsvpTePreviousIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample> > rsvp_te_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample> > rsvp_te_previous_interval_sample;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample : public ydk::Entity
{
    public:
        RsvpTeActiveIntervalSample();
        ~RsvpTeActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf total_packet_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf rsvp_te_packet_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_packet_rate; //type: uint64

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample : public ydk::Entity
{
    public:
        RsvpTePreviousIntervalSample();
        ~RsvpTePreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf total_packet_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf rsvp_te_packet_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_packet_rate; //type: uint64

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory : public ydk::Entity
{
    public:
        SrSampleHistory();
        ~SrSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrActiveIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample
        class SrPreviousIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample> > sr_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample> > sr_previous_interval_sample;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample : public ydk::Entity
{
    public:
        SrActiveIntervalSample();
        ~SrActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf sr_rate; //type: uint64
        ydk::YLeaf sr_packet_rate; //type: uint64

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample : public ydk::Entity
{
    public:
        SrPreviousIntervalSample();
        ~SrPreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf sr_rate; //type: uint64
        ydk::YLeaf sr_packet_rate; //type: uint64

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample


class MplsLcac::BandwidthAllocation : public ydk::Entity
{
    public:
        BandwidthAllocation();
        ~BandwidthAllocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Global; //type: MplsLcac::BandwidthAllocation::Global
        class BandwidthAllocationLinks; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks> bandwidth_allocation_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::Global> global;
        
}; // MplsLcac::BandwidthAllocation


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks : public ydk::Entity
{
    public:
        BandwidthAllocationLinks();
        ~BandwidthAllocationLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BandwidthAllocationLink; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink> > bandwidth_allocation_link;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink : public ydk::Entity
{
    public:
        BandwidthAllocationLink();
        ~BandwidthAllocationLink();

        bool has_data() const override;
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
        ydk::YLeaf total_bandwidth_descriptors; //type: uint16
        ydk::YLeaf bandwidth_descriptors; //type: uint16
        ydk::YLeaf bandwidth_pool; //type: BandwidthTypeEnum
        ydk::YLeaf flooding_up_thresholds_are_default; //type: boolean
        ydk::YLeaf flooding_down_thresholds_are_default; //type: boolean
        ydk::YLeaf flooding_up_thresholds_are_global; //type: boolean
        ydk::YLeaf flooding_down_thresholds_are_global; //type: boolean
        class LinkCommon; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon
        class UpstreamBandwidth; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth
        class DownstreamBandwidth; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth
        class FloodingUpThreshold; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold
        class FloodingDownThreshold; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth> downstream_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold> > flooding_down_threshold;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold> > flooding_up_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon> link_common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth> upstream_bandwidth;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth : public ydk::Entity
{
    public:
        DownstreamBandwidth();
        ~DownstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        class BandwidthPool0; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1> > bandwidth_pool1;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0 : public ydk::Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1 : public ydk::Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold : public ydk::Entity
{
    public:
        FloodingDownThreshold();
        ~FloodingDownThreshold();

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

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold : public ydk::Entity
{
    public:
        FloodingUpThreshold();
        ~FloodingUpThreshold();

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

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon : public ydk::Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf is_unnumbered; //type: boolean
        ydk::YLeaf has_protection; //type: boolean
        ydk::YLeaf capability; //type: uint32
        ydk::YLeaf working_priority; //type: uint32
        ydk::YLeaf resource_provider; //type: ResourceProvider
        ydk::YLeaf is_resource_provider_installed; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        ydk::YLeaf physical_bandwidth; //type: uint64
        ydk::YLeaf bcm_id; //type: uint16
        ydk::YLeaf maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf inbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf outbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf igp_neighbors; //type: uint16
        class LinkFlags; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas> > flooded_areas;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas : public ydk::Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flooded_area; //type: string

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public ydk::Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint8
        ydk::YLeaf switching_capability; //type: uint8
        ydk::YLeaf encoding; //type: uint8

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags : public ydk::Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_te_on; //type: boolean
        ydk::YLeaf signaling_agent; //type: SignalingAgentEnum
        ydk::YLeaf is_admin_up; //type: boolean

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth : public ydk::Entity
{
    public:
        UpstreamBandwidth();
        ~UpstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        class BandwidthPool0; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1> > bandwidth_pool1;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0 : public ydk::Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1 : public ydk::Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1


class MplsLcac::BandwidthAllocation::Global : public ydk::Entity
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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf links; //type: uint16
        ydk::YLeaf bandwidth_hold_time; //type: uint16

}; // MplsLcac::BandwidthAllocation::Global


class MplsLcac::BfdNeighbors : public ydk::Entity
{
    public:
        BfdNeighbors();
        ~BfdNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BfdNeighbor; //type: MplsLcac::BfdNeighbors::BfdNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors::BfdNeighbor> > bfd_neighbor;
        
}; // MplsLcac::BfdNeighbors


class MplsLcac::BfdNeighbors::BfdNeighbor : public ydk::Entity
{
    public:
        BfdNeighbor();
        ~BfdNeighbor();

        bool has_data() const override;
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
        class Neighbor; //type: MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor> > neighbor;
        
}; // MplsLcac::BfdNeighbors::BfdNeighbor


class MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor : public ydk::Entity
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

}; // MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor


class MplsLcac::Gmpls : public ydk::Entity
{
    public:
        Gmpls();
        ~Gmpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Nni; //type: MplsLcac::Gmpls::Nni
        class Uni; //type: MplsLcac::Gmpls::Uni

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls::Nni> nni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls::Uni> uni;
        
}; // MplsLcac::Gmpls


class MplsLcac::Gmpls::Nni : public ydk::Entity
{
    public:
        Nni();
        ~Nni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // MplsLcac::Gmpls::Nni


class MplsLcac::Gmpls::Uni : public ydk::Entity
{
    public:
        Uni();
        ~Uni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // MplsLcac::Gmpls::Uni


class MplsLcac::LinkInformation : public ydk::Entity
{
    public:
        LinkInformation();
        ~LinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Global; //type: MplsLcac::LinkInformation::Global
        class Links; //type: MplsLcac::LinkInformation::Links

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links> links;
        
}; // MplsLcac::LinkInformation


class MplsLcac::LinkInformation::Global : public ydk::Entity
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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf links; //type: uint16
        ydk::YLeaf maximum_links; //type: uint16

}; // MplsLcac::LinkInformation::Global


class MplsLcac::LinkInformation::Links : public ydk::Entity
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

        class Link; //type: MplsLcac::LinkInformation::Links::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link> > link;
        
}; // MplsLcac::LinkInformation::Links


class MplsLcac::LinkInformation::Links::Link : public ydk::Entity
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
        ydk::YLeaf reason_not_flooded; //type: string
        ydk::YLeaf maximum_reservation_bandwidth_rdm; //type: uint64
        ydk::YLeaf reservable_pool0_bandwidth_rdm; //type: uint64
        ydk::YLeaf reservable_pool1_bandwidth_rdm; //type: uint64
        ydk::YLeaf maximum_reservation_bandwidth_mam; //type: uint64
        ydk::YLeaf reservable_pool0_bandwidth_mam; //type: uint64
        ydk::YLeaf reservable_pool1_bandwidth_mam; //type: uint64
        ydk::YLeaf link_attributes; //type: uint32
        ydk::YLeaf is_attribute_incomplete; //type: boolean
        ydk::YLeaf is_name_based_attribute; //type: boolean
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf is_te_metric_valid; //type: boolean
        class LinkCommon; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon
        class BandwidthAccount; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount
        class HwOor; //type: MplsLcac::LinkInformation::Links::Link::HwOor
        class LinkExtendedAttribute; //type: MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute
        class LinkForwadRefValue; //type: MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue
        class AffinityMap; //type: MplsLcac::LinkInformation::Links::Link::AffinityMap
        class Areas; //type: MplsLcac::LinkInformation::Links::Link::Areas
        class Lockout; //type: MplsLcac::LinkInformation::Links::Link::Lockout

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::AffinityMap> > affinity_map;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::Areas> > areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount> bandwidth_account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::HwOor> hw_oor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon> link_common;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute> > link_extended_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue> > link_forwad_ref_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::Lockout> > lockout;
        
}; // MplsLcac::LinkInformation::Links::Link


class MplsLcac::LinkInformation::Links::Link::AffinityMap : public ydk::Entity
{
    public:
        AffinityMap();
        ~AffinityMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_name; //type: string
        ydk::YLeaf affinity_value; //type: uint32
        ydk::YLeaf affinity_bit_position; //type: uint8
        ydk::YLeaf affinity_table_id; //type: TeAffinityTable
        class AffinityExtendedValue; //type: MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue> > affinity_extended_value;
        
}; // MplsLcac::LinkInformation::Links::Link::AffinityMap


class MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue : public ydk::Entity
{
    public:
        AffinityExtendedValue();
        ~AffinityExtendedValue();

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

}; // MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue


class MplsLcac::LinkInformation::Links::Link::Areas : public ydk::Entity
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

        ydk::YLeaf area_id; //type: string
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf is_neighbor_up; //type: boolean
        ydk::YLeaf igp_metric; //type: uint32

}; // MplsLcac::LinkInformation::Links::Link::Areas


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount : public ydk::Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BandwidthAccountCommonInfo; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo
        class RsvpTeBandwidthSampleHistory; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory
        class SrBandwidthSampleHistory; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo> bandwidth_account_common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory> rsvp_te_bandwidth_sample_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory> sr_bandwidth_sample_history;
        
}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo : public ydk::Entity
{
    public:
        BandwidthAccountCommonInfo();
        ~BandwidthAccountCommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bandwidth_account_enabled; //type: boolean
        ydk::YLeaf application_enforced; //type: boolean
        ydk::YLeaf collection_type; //type: BandwidthAccountingCollection
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_time_remaining; //type: uint32
        ydk::YLeaf last_sample_collection_timestamp; //type: uint32
        ydk::YLeaf next_sample_collection; //type: uint32
        ydk::YLeaf application_interval; //type: uint32
        ydk::YLeaf application_time_remaining; //type: uint32
        ydk::YLeaf last_application_timestamp; //type: uint32
        ydk::YLeaf next_application; //type: uint32
        ydk::YLeaf adjustment_factor; //type: uint32
        ydk::YLeaf max_reservable_bandwidth_threshold_are_default; //type: boolean
        ydk::YLeaf up_threshold_max_reservable_bandwidth; //type: uint8
        ydk::YLeaf down_threshold_max_reservable_bandwidth; //type: uint8
        class RsvpTeBandwidthUtilization; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization
        class SrBandwidthUtilization; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization> rsvp_te_bandwidth_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization> sr_bandwidth_utilization;
        
}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization : public ydk::Entity
{
    public:
        RsvpTeBandwidthUtilization();
        ~RsvpTeBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_link_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization : public ydk::Entity
{
    public:
        SrBandwidthUtilization();
        ~SrBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory : public ydk::Entity
{
    public:
        RsvpTeBandwidthSampleHistory();
        ~RsvpTeBandwidthSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpTeActiveIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample
        class RsvpTePreviousIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample> > rsvp_te_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample> > rsvp_te_previous_interval_sample;
        
}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample : public ydk::Entity
{
    public:
        RsvpTeActiveIntervalSample();
        ~RsvpTeActiveIntervalSample();

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
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample : public ydk::Entity
{
    public:
        RsvpTePreviousIntervalSample();
        ~RsvpTePreviousIntervalSample();

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
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory : public ydk::Entity
{
    public:
        SrBandwidthSampleHistory();
        ~SrBandwidthSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrActiveIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample
        class SrPreviousIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample> > sr_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample> > sr_previous_interval_sample;
        
}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample : public ydk::Entity
{
    public:
        SrActiveIntervalSample();
        ~SrActiveIntervalSample();

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
        ydk::YLeaf sr_rate; //type: uint64

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample : public ydk::Entity
{
    public:
        SrPreviousIntervalSample();
        ~SrPreviousIntervalSample();

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
        ydk::YLeaf sr_rate; //type: uint64

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample


class MplsLcac::LinkInformation::Links::Link::HwOor : public ydk::Entity
{
    public:
        HwOor();
        ~HwOor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_oor_state; //type: HwOorState
        ydk::YLeaf hw_oor_timestamp; //type: uint32
        ydk::YLeaf hw_o_or_green_recovery_time; //type: uint32
        class HwOOrLinkStatistic; //type: MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic> > hw_o_or_link_statistic;
        
}; // MplsLcac::LinkInformation::Links::Link::HwOor


class MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic : public ydk::Entity
{
    public:
        HwOOrLinkStatistic();
        ~HwOOrLinkStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_oor_state; //type: HwOorState
        ydk::YLeaf transitions; //type: uint32
        ydk::YLeaf node_protection_disable_number; //type: uint32
        ydk::YLeaf rejected_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_reopt_ls_ps_number; //type: uint32
        ydk::YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic


class MplsLcac::LinkInformation::Links::Link::LinkCommon : public ydk::Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf is_unnumbered; //type: boolean
        ydk::YLeaf has_protection; //type: boolean
        ydk::YLeaf capability; //type: uint32
        ydk::YLeaf working_priority; //type: uint32
        ydk::YLeaf resource_provider; //type: ResourceProvider
        ydk::YLeaf is_resource_provider_installed; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        ydk::YLeaf physical_bandwidth; //type: uint64
        ydk::YLeaf bcm_id; //type: uint16
        ydk::YLeaf maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf inbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf outbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf igp_neighbors; //type: uint16
        class LinkFlags; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas> > flooded_areas;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;
        
}; // MplsLcac::LinkInformation::Links::Link::LinkCommon


class MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas : public ydk::Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flooded_area; //type: string

}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas


class MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public ydk::Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint8
        ydk::YLeaf switching_capability; //type: uint8
        ydk::YLeaf encoding; //type: uint8

}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags : public ydk::Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_te_on; //type: boolean
        ydk::YLeaf signaling_agent; //type: SignalingAgentEnum
        ydk::YLeaf is_admin_up; //type: boolean

}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags


class MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup


class MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute : public ydk::Entity
{
    public:
        LinkExtendedAttribute();
        ~LinkExtendedAttribute();

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

}; // MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute


class MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue : public ydk::Entity
{
    public:
        LinkForwadRefValue();
        ~LinkForwadRefValue();

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

}; // MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue


class MplsLcac::LinkInformation::Links::Link::Lockout : public ydk::Entity
{
    public:
        Lockout();
        ~Lockout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_lockout; //type: boolean
        ydk::YLeaf lockout_on_timestamp; //type: uint32
        ydk::YLeaf lockout_off_timestamp; //type: uint32

}; // MplsLcac::LinkInformation::Links::Link::Lockout


class MplsLcac::LinkSummary : public ydk::Entity
{
    public:
        LinkSummary();
        ~LinkSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf links; //type: uint16
        ydk::YLeaf maximum_links; //type: uint16
        ydk::YLeaf is_flooding_enabled; //type: boolean
        class BandwidthAccountSummary; //type: MplsLcac::LinkSummary::BandwidthAccountSummary
        class AreasSummary; //type: MplsLcac::LinkSummary::AreasSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary::AreasSummary> > areas_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary::BandwidthAccountSummary> bandwidth_account_summary;
        
}; // MplsLcac::LinkSummary


class MplsLcac::LinkSummary::AreasSummary : public ydk::Entity
{
    public:
        AreasSummary();
        ~AreasSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf area_id; //type: string
        ydk::YLeaf protocol; //type: IgpProtocol
        ydk::YLeaf is_flooded; //type: boolean
        ydk::YLeaf is_periodic_flooding_on; //type: boolean
        ydk::YLeaf periodic_flooding_interval; //type: uint16
        ydk::YLeaf links_flooded; //type: uint16
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf local_node_router_id; //type: string
        ydk::YLeaf igp_neighbors; //type: uint16

}; // MplsLcac::LinkSummary::AreasSummary


class MplsLcac::LinkSummary::BandwidthAccountSummary : public ydk::Entity
{
    public:
        BandwidthAccountSummary();
        ~BandwidthAccountSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_bandwidth_account_enabled; //type: boolean
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_time_remaining; //type: uint32
        ydk::YLeaf application_interval; //type: uint32
        ydk::YLeaf application_time_remaining; //type: uint32

}; // MplsLcac::LinkSummary::BandwidthAccountSummary


class MplsLcac::Neighbors : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Neighbor; //type: MplsLcac::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors::Neighbor> > neighbor;
        
}; // MplsLcac::Neighbors


class MplsLcac::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        class Neighbor_; //type: MplsLcac::Neighbors::Neighbor::Neighbor_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors::Neighbor::Neighbor_> > neighbor;
        
}; // MplsLcac::Neighbors::Neighbor


class MplsLcac::Neighbors::Neighbor::Neighbor_ : public ydk::Entity
{
    public:
        Neighbor_();
        ~Neighbor_();

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
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf neighbor_address; //type: string

}; // MplsLcac::Neighbors::Neighbor::Neighbor_


class MplsLcac::PreemptionEvents : public ydk::Entity
{
    public:
        PreemptionEvents();
        ~PreemptionEvents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PreemptionEvent; //type: MplsLcac::PreemptionEvents::PreemptionEvent

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents::PreemptionEvent> > preemption_event;
        
}; // MplsLcac::PreemptionEvents


class MplsLcac::PreemptionEvents::PreemptionEvent : public ydk::Entity
{
    public:
        PreemptionEvent();
        ~PreemptionEvent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf event_index; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf requested_bandwidth; //type: uint64
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf bandwidth_type; //type: uint8
        ydk::YLeaf old_bandwidth_bc0; //type: uint64
        ydk::YLeaf old_bandwidth_bc1; //type: uint64
        ydk::YLeaf new_bandwidth_bc0; //type: uint64
        ydk::YLeaf new_bandwidth_bc1; //type: uint64
        ydk::YLeaf bandwidth_overshoot0; //type: uint64
        ydk::YLeaf bandwidth_overshoot1; //type: uint64
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf event_time; //type: uint32
        ydk::YLeaf ls_ps; //type: uint16
        ydk::YLeaf soft_preempted_ls_ps; //type: uint16
        ydk::YLeaf soft_preempted_ls_ps_fr_rrewrite; //type: uint16
        ydk::YLeaf hard_preempted_ls_ps; //type: uint16
        ydk::YLeaf total_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf total_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf softly_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf softly_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf soft_preempted_fr_rrewrite_bandwidth_bc0; //type: uint64
        ydk::YLeaf soft_preempted_fr_rrewrite_bandwidth_bc1; //type: uint64
        ydk::YLeaf hard_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf hard_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf tunnels; //type: uint16
        ydk::YLeaf soft_preempted_tunnels; //type: uint16
        ydk::YLeaf soft_preempted_tunnels_fr_rrewrite; //type: uint16
        ydk::YLeaf hard_preempted_tunnels; //type: uint16
        class Lsp; //type: MplsLcac::PreemptionEvents::PreemptionEvent::Lsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents::PreemptionEvent::Lsp> > lsp;
        
}; // MplsLcac::PreemptionEvents::PreemptionEvent


class MplsLcac::PreemptionEvents::PreemptionEvent::Lsp : public ydk::Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf requested_bandwidth; //type: uint64
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf bandwidth_type; //type: uint8
        ydk::YLeaf soft_preempted; //type: boolean
        ydk::YLeaf soft_preemption_timeout; //type: uint16
        ydk::YLeaf bandwidth_preempted; //type: boolean
        ydk::YLeaf soft_preempted_fr_rrewrite; //type: boolean

}; // MplsLcac::PreemptionEvents::PreemptionEvent::Lsp


class MplsLcac::SoftPreemptionGlobalInfo : public ydk::Entity
{
    public:
        SoftPreemptionGlobalInfo();
        ~SoftPreemptionGlobalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf is_timeout_interval_configured; //type: boolean
        ydk::YLeaf timeout_interval; //type: uint32

}; // MplsLcac::SoftPreemptionGlobalInfo


class MplsLcac::SoftPreemptions : public ydk::Entity
{
    public:
        SoftPreemptions();
        ~SoftPreemptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SoftPreemption; //type: MplsLcac::SoftPreemptions::SoftPreemption

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions::SoftPreemption> > soft_preemption;
        
}; // MplsLcac::SoftPreemptions


class MplsLcac::SoftPreemptions::SoftPreemption : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf total_soft_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf total_soft_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf current_soft_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf current_soft_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf release_soft_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf release_soft_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf current_over_subscribed_bandwidth_bc0; //type: uint64
        ydk::YLeaf current_over_subscribed_bandwidth_bc1; //type: uint64
        class CurrentSoftPreemptionLsp; //type: MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp> > current_soft_preemption_lsp;
        
}; // MplsLcac::SoftPreemptions::SoftPreemption


class MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp : public ydk::Entity
{
    public:
        CurrentSoftPreemptionLsp();
        ~CurrentSoftPreemptionLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf requested_bandwidth; //type: uint64
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf bandwidth_type; //type: uint8
        ydk::YLeaf soft_preempted; //type: boolean
        ydk::YLeaf soft_preemption_timeout; //type: uint16
        ydk::YLeaf bandwidth_preempted; //type: boolean
        ydk::YLeaf soft_preempted_fr_rrewrite; //type: boolean

}; // MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp


class MplsLcac::Statistics : public ydk::Entity
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

        class Summary; //type: MplsLcac::Statistics::Summary
        class StatsticsLinks; //type: MplsLcac::Statistics::StatsticsLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks> statstics_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary> summary;
        
}; // MplsLcac::Statistics


class MplsLcac::Statistics::StatsticsLinks : public ydk::Entity
{
    public:
        StatsticsLinks();
        ~StatsticsLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StatsticsLink; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink> > statstics_link;
        
}; // MplsLcac::Statistics::StatsticsLinks


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink : public ydk::Entity
{
    public:
        StatsticsLink();
        ~StatsticsLink();

        bool has_data() const override;
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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf link_address; //type: string
        class IncomingPathStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics
        class IncomingReservationStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics
        class OutgoingPathStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics
        class OutgoingReservationStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics
        class IncomingPathStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit
        class IncomingReservationStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit
        class OutgoingPathStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit
        class OutgoingReservationStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics> incoming_path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit> incoming_path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics> incoming_reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit> incoming_reservation_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics> outgoing_path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit> outgoing_path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics> outgoing_reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit> outgoing_reservation_statistics32_bit;
        
}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics : public ydk::Entity
{
    public:
        IncomingPathStatistics();
        ~IncomingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit : public ydk::Entity
{
    public:
        IncomingPathStatistics32Bit();
        ~IncomingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics : public ydk::Entity
{
    public:
        IncomingReservationStatistics();
        ~IncomingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit : public ydk::Entity
{
    public:
        IncomingReservationStatistics32Bit();
        ~IncomingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics : public ydk::Entity
{
    public:
        OutgoingPathStatistics();
        ~OutgoingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit : public ydk::Entity
{
    public:
        OutgoingPathStatistics32Bit();
        ~OutgoingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics : public ydk::Entity
{
    public:
        OutgoingReservationStatistics();
        ~OutgoingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit : public ydk::Entity
{
    public:
        OutgoingReservationStatistics32Bit();
        ~OutgoingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit


class MplsLcac::Statistics::Summary : public ydk::Entity
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

        ydk::YLeaf is_role_standby; //type: boolean
        class PathStatistics; //type: MplsLcac::Statistics::Summary::PathStatistics
        class ReservationStatistics; //type: MplsLcac::Statistics::Summary::ReservationStatistics
        class PathStatistics32Bit; //type: MplsLcac::Statistics::Summary::PathStatistics32Bit
        class ReservationStatistics32Bit; //type: MplsLcac::Statistics::Summary::ReservationStatistics32Bit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::PathStatistics> path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::PathStatistics32Bit> path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::ReservationStatistics> reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::ReservationStatistics32Bit> reservation_statistics32_bit;
        
}; // MplsLcac::Statistics::Summary


class MplsLcac::Statistics::Summary::PathStatistics : public ydk::Entity
{
    public:
        PathStatistics();
        ~PathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::Summary::PathStatistics


class MplsLcac::Statistics::Summary::PathStatistics32Bit : public ydk::Entity
{
    public:
        PathStatistics32Bit();
        ~PathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::Summary::PathStatistics32Bit


class MplsLcac::Statistics::Summary::ReservationStatistics : public ydk::Entity
{
    public:
        ReservationStatistics();
        ~ReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::Summary::ReservationStatistics


class MplsLcac::Statistics::Summary::ReservationStatistics32Bit : public ydk::Entity
{
    public:
        ReservationStatistics32Bit();
        ~ReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::Summary::ReservationStatistics32Bit

class MplsLcacStandby : public ydk::Entity
{
    public:
        MplsLcacStandby();
        ~MplsLcacStandby();

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

        class Neighbors; //type: MplsLcacStandby::Neighbors
        class PreemptionEvents; //type: MplsLcacStandby::PreemptionEvents
        class Advertisements; //type: MplsLcacStandby::Advertisements
        class Statistics; //type: MplsLcacStandby::Statistics
        class BandwidthAllocation; //type: MplsLcacStandby::BandwidthAllocation
        class Gmpls; //type: MplsLcacStandby::Gmpls
        class BfdNeighbors; //type: MplsLcacStandby::BfdNeighbors
        class BandwidthAccount; //type: MplsLcacStandby::BandwidthAccount
        class LinkSummary; //type: MplsLcacStandby::LinkSummary
        class LinkInformation; //type: MplsLcacStandby::LinkInformation
        class AdmissionControl; //type: MplsLcacStandby::AdmissionControl
        class SoftPreemptionGlobalInfo; //type: MplsLcacStandby::SoftPreemptionGlobalInfo
        class SoftPreemptions; //type: MplsLcacStandby::SoftPreemptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl> admission_control;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements> advertisements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount> bandwidth_account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation> bandwidth_allocation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BfdNeighbors> bfd_neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Gmpls> gmpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation> link_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkSummary> link_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::PreemptionEvents> preemption_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptionGlobalInfo> soft_preemption_global_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptions> soft_preemptions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics> statistics;
        
}; // MplsLcacStandby


class MplsLcacStandby::AdmissionControl : public ydk::Entity
{
    public:
        AdmissionControl();
        ~AdmissionControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Global; //type: MplsLcacStandby::AdmissionControl::Global
        class AdmittedTunnels; //type: MplsLcacStandby::AdmissionControl::AdmittedTunnels
        class LinkInterfaces; //type: MplsLcacStandby::AdmissionControl::LinkInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::AdmittedTunnels> admitted_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::LinkInterfaces> link_interfaces;
        
}; // MplsLcacStandby::AdmissionControl


class MplsLcacStandby::AdmissionControl::AdmittedTunnels : public ydk::Entity
{
    public:
        AdmittedTunnels();
        ~AdmittedTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AdmittedTunnel; //type: MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel> > admitted_tunnel;
        
}; // MplsLcacStandby::AdmissionControl::AdmittedTunnels


class MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel : public ydk::Entity
{
    public:
        AdmittedTunnel();
        ~AdmittedTunnel();

        bool has_data() const override;
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
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf bandwidth_state; //type: BandwidthStateEnum
        ydk::YLeaf bandwidth_pool; //type: BandwidthTypeEnum
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf up_link_name; //type: string
        ydk::YLeaf down_link_name; //type: string
        ydk::YLeaf tunnel_state; //type: TunnelStateEnum
        ydk::YLeaf bandwidth; //type: uint64
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf backup_interface; //type: string
        ydk::YLeaf is_rerouted; //type: boolean

}; // MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel


class MplsLcacStandby::AdmissionControl::Global : public ydk::Entity
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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf total_tunnels; //type: uint32
        ydk::YLeaf total_p2mp_tunnels; //type: uint32
        ydk::YLeaf selected_tunnels; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum

}; // MplsLcacStandby::AdmissionControl::Global


class MplsLcacStandby::AdmissionControl::LinkInterfaces : public ydk::Entity
{
    public:
        LinkInterfaces();
        ~LinkInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LinkInterface; //type: MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface> > link_interface;
        
}; // MplsLcacStandby::AdmissionControl::LinkInterfaces


class MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface : public ydk::Entity
{
    public:
        LinkInterface();
        ~LinkInterface();

        bool has_data() const override;
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
        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf total_tunnels; //type: uint32
        ydk::YLeaf total_p2mp_tunnels; //type: uint32
        ydk::YLeaf selected_tunnels; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum

}; // MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface


class MplsLcacStandby::Advertisements : public ydk::Entity
{
    public:
        Advertisements();
        ~Advertisements();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flooding_status_message; //type: string
        ydk::YLeaf last_flooding_time; //type: uint32
        ydk::YLeaf last_flooding_trigger; //type: FloodingTrigger
        ydk::YLeaf next_flooding_time; //type: uint32
        ydk::YLeaf ds_te_mode; //type: RrrDsteMigrationMode
        class AdvertizedAreas; //type: MplsLcacStandby::Advertisements::AdvertizedAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas> > advertized_areas;
        
}; // MplsLcacStandby::Advertisements


class MplsLcacStandby::Advertisements::AdvertizedAreas : public ydk::Entity
{
    public:
        AdvertizedAreas();
        ~AdvertizedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf igp_area_id; //type: string
        ydk::YLeaf protocol; //type: IgpProtocol
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf router_id; //type: string
        class FloodedLink; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink> > flooded_link;
        
}; // MplsLcacStandby::Advertisements::AdvertizedAreas


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink : public ydk::Entity
{
    public:
        FloodedLink();
        ~FloodedLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf link_id; //type: uint16
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf subnet_type; //type: IgpSubnet
        ydk::YLeaf outgoing_interface_id; //type: uint32
        ydk::YLeaf is_designated_router; //type: boolean
        ydk::YLeaf designated_router_igp_id; //type: string
        ydk::YLeaf neighbor_igp_id; //type: string
        ydk::YLeaf igp_neighbor_address; //type: string
        ydk::YLeaf incoming_interface_id; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf uni_link_delay; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        ydk::YLeaf physical_bandwidth; //type: uint32
        ydk::YLeaf bcm_id; //type: uint16
        ydk::YLeaf link_maximum_reservable_bandwidth; //type: uint32
        ydk::YLeaf reservable_pool0_bandwidth; //type: uint32
        ydk::YLeaf reservable_pool1_bandwidth; //type: uint32
        ydk::YLeaf is_receiving_reservable_bandwidth_enabled; //type: boolean
        ydk::YLeaf receiving_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_transmitting_reservable_bandwidth_enabled; //type: boolean
        ydk::YLeaf transmitting_direction; //type: LinkDirectionEnum
        ydk::YLeaf affinity_attribute_flags; //type: uint32
        class OduLinkCapabilities; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities
        class ExtendedAffinityAttributeFlag; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag
        class SharedRiskLinkGroup; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup
        class ReceivingReservableBandwidth; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth
        class TransmittingReservableBandwidth; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag> > extended_affinity_attribute_flag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth> > receiving_reservable_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth> > transmitting_reservable_bandwidth;
        
}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag : public ydk::Entity
{
    public:
        ExtendedAffinityAttributeFlag();
        ~ExtendedAffinityAttributeFlag();

        bool has_data() const override;
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

}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MaxLspBandwidth; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth
        class OduCapability; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth> > max_lsp_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability> > odu_capability;
        
}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class BandwidthInfo; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: TeOduCapability
        class Fixed; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_od_us; //type: uint8
        ydk::YLeaf unreserved_od_us; //type: uint8

}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf max_bandwidth; //type: uint32
        ydk::YLeaf unreserved_bandwidth; //type: uint32
        ydk::YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth : public ydk::Entity
{
    public:
        ReceivingReservableBandwidth();
        ~ReceivingReservableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf pool0_bandwidth; //type: uint32
        ydk::YLeaf pool1_bandwidth; //type: uint32

}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth : public ydk::Entity
{
    public:
        TransmittingReservableBandwidth();
        ~TransmittingReservableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf pool0_bandwidth; //type: uint32
        ydk::YLeaf pool1_bandwidth; //type: uint32

}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth


class MplsLcacStandby::BandwidthAccount : public ydk::Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BandwidthAccountLinks; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks> bandwidth_account_links;
        
}; // MplsLcacStandby::BandwidthAccount


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks : public ydk::Entity
{
    public:
        BandwidthAccountLinks();
        ~BandwidthAccountLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BandwidthAccountLink; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink> > bandwidth_account_link;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink : public ydk::Entity
{
    public:
        BandwidthAccountLink();
        ~BandwidthAccountLink();

        bool has_data() const override;
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
        ydk::YLeaf link_id; //type: string
        class CommonInfo; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo
        class RsvpTeSampleHistory; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory
        class SrSampleHistory; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo> common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory> rsvp_te_sample_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory> sr_sample_history;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo : public ydk::Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bandwidth_account_enabled; //type: boolean
        ydk::YLeaf application_enforced; //type: boolean
        ydk::YLeaf collection_type; //type: BandwidthAccountingCollection
        ydk::YLeaf sample_time_remaining_timestamp_nanosec; //type: uint64
        ydk::YLeaf last_sample_collection_timestamp_nanosec; //type: uint64
        ydk::YLeaf next_sample_collection_nanosec; //type: uint64
        ydk::YLeaf application_time_remaining_nanosec; //type: uint64
        ydk::YLeaf last_application_timestamp_nanosec; //type: uint64
        ydk::YLeaf next_application_timestamp_nanosec; //type: uint64
        ydk::YLeaf effective_maximum_reservable_bandwidth; //type: uint64
        class RsvpTeBandwidthUtilization; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization
        class SrBandwidthUtilization; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization> rsvp_te_bandwidth_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization> sr_bandwidth_utilization;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization : public ydk::Entity
{
    public:
        RsvpTeBandwidthUtilization();
        ~RsvpTeBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_link_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization : public ydk::Entity
{
    public:
        SrBandwidthUtilization();
        ~SrBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory : public ydk::Entity
{
    public:
        RsvpTeSampleHistory();
        ~RsvpTeSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpTeActiveIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample
        class RsvpTePreviousIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample> > rsvp_te_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample> > rsvp_te_previous_interval_sample;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample : public ydk::Entity
{
    public:
        RsvpTeActiveIntervalSample();
        ~RsvpTeActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf total_packet_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf rsvp_te_packet_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_packet_rate; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample : public ydk::Entity
{
    public:
        RsvpTePreviousIntervalSample();
        ~RsvpTePreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf total_packet_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf rsvp_te_packet_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_packet_rate; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory : public ydk::Entity
{
    public:
        SrSampleHistory();
        ~SrSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrActiveIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample
        class SrPreviousIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample> > sr_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample> > sr_previous_interval_sample;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample : public ydk::Entity
{
    public:
        SrActiveIntervalSample();
        ~SrActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf sr_rate; //type: uint64
        ydk::YLeaf sr_packet_rate; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample : public ydk::Entity
{
    public:
        SrPreviousIntervalSample();
        ~SrPreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf sr_rate; //type: uint64
        ydk::YLeaf sr_packet_rate; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample


class MplsLcacStandby::BandwidthAllocation : public ydk::Entity
{
    public:
        BandwidthAllocation();
        ~BandwidthAllocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Global; //type: MplsLcacStandby::BandwidthAllocation::Global
        class BandwidthAllocationLinks; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks> bandwidth_allocation_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::Global> global;
        
}; // MplsLcacStandby::BandwidthAllocation


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks : public ydk::Entity
{
    public:
        BandwidthAllocationLinks();
        ~BandwidthAllocationLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BandwidthAllocationLink; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink> > bandwidth_allocation_link;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink : public ydk::Entity
{
    public:
        BandwidthAllocationLink();
        ~BandwidthAllocationLink();

        bool has_data() const override;
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
        ydk::YLeaf total_bandwidth_descriptors; //type: uint16
        ydk::YLeaf bandwidth_descriptors; //type: uint16
        ydk::YLeaf bandwidth_pool; //type: BandwidthTypeEnum
        ydk::YLeaf flooding_up_thresholds_are_default; //type: boolean
        ydk::YLeaf flooding_down_thresholds_are_default; //type: boolean
        ydk::YLeaf flooding_up_thresholds_are_global; //type: boolean
        ydk::YLeaf flooding_down_thresholds_are_global; //type: boolean
        class LinkCommon; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon
        class UpstreamBandwidth; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth
        class DownstreamBandwidth; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth
        class FloodingUpThreshold; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold
        class FloodingDownThreshold; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth> downstream_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold> > flooding_down_threshold;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold> > flooding_up_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon> link_common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth> upstream_bandwidth;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth : public ydk::Entity
{
    public:
        DownstreamBandwidth();
        ~DownstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        class BandwidthPool0; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1> > bandwidth_pool1;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0 : public ydk::Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1 : public ydk::Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold : public ydk::Entity
{
    public:
        FloodingDownThreshold();
        ~FloodingDownThreshold();

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

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold

class MplsTeAttrSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_used;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf lsp;
        static const ydk::Enum::YLeaf unassigned;
        static const ydk::Enum::YLeaf auto_backup;
        static const ydk::Enum::YLeaf auto_mesh;
        static const ydk::Enum::YLeaf xro;
        static const ydk::Enum::YLeaf p2mp_te;
        static const ydk::Enum::YLeaf otn_pp;
        static const ydk::Enum::YLeaf p2p_te;

};

class PceSrSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown_segment_id;
        static const ydk::Enum::YLeaf ipv4_node_segment_id;
        static const ydk::Enum::YLeaf ipv4_adjacency_segment_id;

};

class MplsTeTunnelRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_unknown;
        static const ydk::Enum::YLeaf tunnel_head;
        static const ydk::Enum::YLeaf tunnel_mid;
        static const ydk::Enum::YLeaf tunnel_tail;

};

class TePathInvalAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tear;
        static const ydk::Enum::YLeaf drop;

};

class TeAffinityTable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf affinity_table_mapping;
        static const ydk::Enum::YLeaf affinity_table_forward_reference;
        static const ydk::Enum::YLeaf affinity_table_count;

};

class OcMplsTeLsp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oc_mpls_te_lsp_type_not_set;
        static const ydk::Enum::YLeaf oc_mpls_te_lsp_type_p2p;
        static const ydk::Enum::YLeaf oc_mpls_te_lsp_type_p2mp;

};

class TePceDisjoint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;

};

class TeSchFreq : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sch_freq_not_set;
        static const ydk::Enum::YLeaf sch_freq_set_once;
        static const ydk::Enum::YLeaf sch_freq_set_daily;
        static const ydk::Enum::YLeaf sch_freq_set_weekly;

};

class OcMplsTeTunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf p2mp;

};

class MplsTeLspMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_not_set;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_current;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_reopt;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_clean;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_standby;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_pp_clean;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_restore;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_reopt_standby;

};

class TeAttributeSetSrPrepend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_attribute_set_sr_prepend_not_set;
        static const ydk::Enum::YLeaf te_attribute_set_sr_prepend_next_label;
        static const ydk::Enum::YLeaf te_attribute_set_sr_prepend_bgp_nhop;

};

class PceTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_state_none;
        static const ydk::Enum::YLeaf tunnel_state_admin_down;
        static const ydk::Enum::YLeaf tunnel_state_down;
        static const ydk::Enum::YLeaf tunnel_state_up;

};

class GmplsUniMgmtWdmGrid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dwdm;
        static const ydk::Enum::YLeaf cwdm;

};

class TeXroExclusion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mandatory;
        static const ydk::Enum::YLeaf best_effort;

};

class LspOorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsp_oor_green;
        static const ydk::Enum::YLeaf lsp_oor_yellow;
        static const ydk::Enum::YLeaf lsp_oor_red;

};

class RrrDsteMigrationMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rrr_dste_mode_none;
        static const ydk::Enum::YLeaf rrr_dste_mode_prestandard;
        static const ydk::Enum::YLeaf rrr_dste_mode_standard;

};

class MplsTeTunnelAnnounce : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf announce_type_not_set;
        static const ydk::Enum::YLeaf autoroute;
        static const ydk::Enum::YLeaf forward_adjacency;

};

class TeApsSncMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snc_mode_not_set;
        static const ydk::Enum::YLeaf snc_mode_n;
        static const ydk::Enum::YLeaf snc_mode_i;
        static const ydk::Enum::YLeaf snc_mode_s;

};

class BandwidthUnitEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf kilo_bits_per_second;
        static const ydk::Enum::YLeaf kilo_bytes_per_second;

};

class TeVifBfdEncapMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf gal;

};

class TunnelAttributeSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_attribute_set_none;
        static const ydk::Enum::YLeaf tunnel_attribute_set_static;
        static const ydk::Enum::YLeaf tunnel_attribute_set_path_option;
        static const ydk::Enum::YLeaf tunnel_attribute_set_not_used;
        static const ydk::Enum::YLeaf tunnel_attribute_set_auto_backup;
        static const ydk::Enum::YLeaf tunnel_attribute_set_auto_mesh;
        static const ydk::Enum::YLeaf tunnel_attribute_set_xro;
        static const ydk::Enum::YLeaf tunnel_attribute_set_p2mpte;
        static const ydk::Enum::YLeaf tunnel_attribute_aps_pp;
        static const ydk::Enum::YLeaf tunnel_attribute_set_p2p_te;

};

class TeHopLimitIgnore : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ignore_unknown;
        static const ydk::Enum::YLeaf ignore_explicit;
        static const ydk::Enum::YLeaf ignore_pce;

};

class MplsTeNextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egress_resolve;
        static const ydk::Enum::YLeaf autoroute_dest;

};

class AutoBackupSrlgMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srlg_not_set;
        static const ydk::Enum::YLeaf srlg_strict;
        static const ydk::Enum::YLeaf srlg_preferred;
        static const ydk::Enum::YLeaf srlg_weighted;

};

class IgpOspfAreaFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp_area_format_number;
        static const ydk::Enum::YLeaf igp_area_format_ip_addr;

};

class LspOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_lsp_oper_up;
        static const ydk::Enum::YLeaf mpls_te_lsp_oper_down;

};

class MplsTeSoftPreemptionResolution : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf soft_preemption_resolution_none;
        static const ydk::Enum::YLeaf soft_preemption_resolution_pending;
        static const ydk::Enum::YLeaf soft_preemption_resolution_reopt_completed;
        static const ydk::Enum::YLeaf soft_preemption_resolution_teardown;
        static const ydk::Enum::YLeaf soft_preemption_resolution_frr_triggered;
        static const ydk::Enum::YLeaf soft_preemption_resolution_path_protetion_switchover;

};

class MplsTePceFailReasons : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_pce_fail_no_reason;
        static const ydk::Enum::YLeaf te_pce_fail_no_pce;
        static const ydk::Enum::YLeaf te_pce_fail_sub_pool;
        static const ydk::Enum::YLeaf te_pce_fail_intra_area;
        static const ydk::Enum::YLeaf te_pce_fail_gmpls;
        static const ydk::Enum::YLeaf te_pce_fail_pending;
        static const ydk::Enum::YLeaf te_pce_fail_oor;
        static const ydk::Enum::YLeaf te_pce_fail_bidirectional;
        static const ydk::Enum::YLeaf te_pce_fail_no_path;
        static const ydk::Enum::YLeaf te_pce_fail_request_timeout;

};

class TeMgmtGenericTspec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_generic_tspec_type_g709otn;

};

class IgpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;

};

class MplsTeMetricQualifier : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf metric_default;
        static const ydk::Enum::YLeaf metric_global;
        static const ydk::Enum::YLeaf metric_interface;

};

class BandwidthAccountingCollection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf segment_routing;

};

class MplsTeMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf metric_not_set;
        static const ydk::Enum::YLeaf metric_igp;
        static const ydk::Enum::YLeaf metric_te;
        static const ydk::Enum::YLeaf metric_delay;

};

class GmplsUniMgmtDwdmCs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dwdm100g_hz;
        static const ydk::Enum::YLeaf dwdm50g_hz;
        static const ydk::Enum::YLeaf dwdm25g_hz;
        static const ydk::Enum::YLeaf dwdm12g_hz;

};

class TeP2MpS2LDeletionCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_cause;
        static const ydk::Enum::YLeaf hpath_cr_err;
        static const ydk::Enum::YLeaf hpath_chg_setup;
        static const ydk::Enum::YLeaf hpath_chg_up_err;
        static const ydk::Enum::YLeaf hresv_cr_err;
        static const ydk::Enum::YLeaf hresv_chg_err;
        static const ydk::Enum::YLeaf hresv_chg_err_up;
        static const ydk::Enum::YLeaf hlbl_avail_err;
        static const ydk::Enum::YLeaf hup_lbl_avail_err;
        static const ydk::Enum::YLeaf hfrr_act_err;
        static const ydk::Enum::YLeaf hbkup_ch_err;
        static const ydk::Enum::YLeaf hpath_ch_frr_err;
        static const ydk::Enum::YLeaf hcleanup;
        static const ydk::Enum::YLeaf hlingering_cleanup;
        static const ydk::Enum::YLeaf hpat_err;
        static const ydk::Enum::YLeaf hresv_err;
        static const ydk::Enum::YLeaf hresv_del;
        static const ydk::Enum::YLeaf hrw_fail;
        static const ydk::Enum::YLeaf hup_rw_fail;
        static const ydk::Enum::YLeaf ha_failure;
        static const ydk::Enum::YLeaf rw_del;
        static const ydk::Enum::YLeaf up_rw_del;
        static const ydk::Enum::YLeaf mpath_cr;
        static const ydk::Enum::YLeaf mpath_chg_setup_err;
        static const ydk::Enum::YLeaf mpath_chg_up_err;
        static const ydk::Enum::YLeaf mresv_cr_err;
        static const ydk::Enum::YLeaf mresv_chg_err;
        static const ydk::Enum::YLeaf mresv_chg_err_up;
        static const ydk::Enum::YLeaf mlbl_avail_err;
        static const ydk::Enum::YLeaf mlbl_rel_err;
        static const ydk::Enum::YLeaf mup_lbl_avail_err;
        static const ydk::Enum::YLeaf mup_lbl_rel_err;
        static const ydk::Enum::YLeaf mfrr_act_err;
        static const ydk::Enum::YLeaf mbkup_ch_err;
        static const ydk::Enum::YLeaf mpath_ch_frr_err;
        static const ydk::Enum::YLeaf mresv_del;
        static const ydk::Enum::YLeaf mresv_err;
        static const ydk::Enum::YLeaf mpreempt;
        static const ydk::Enum::YLeaf mcleanup;
        static const ydk::Enum::YLeaf mlingering_cleanup;
        static const ydk::Enum::YLeaf mrw_fail;
        static const ydk::Enum::YLeaf mup_rw_fail;
        static const ydk::Enum::YLeaf tpath_cr_err;
        static const ydk::Enum::YLeaf tpath_chg_err;
        static const ydk::Enum::YLeaf tresv_cr_err;
        static const ydk::Enum::YLeaf tlbl_avail_err;
        static const ydk::Enum::YLeaf tcleanup;
        static const ydk::Enum::YLeaf tlingering_cleanup;
        static const ydk::Enum::YLeaf lbl_err;
        static const ydk::Enum::YLeaf qfailure;
        static const ydk::Enum::YLeaf rsvp_recovery;
        static const ydk::Enum::YLeaf lsd_recovery;
        static const ydk::Enum::YLeaf lmrib_recovery;
        static const ydk::Enum::YLeaf te_restart;
        static const ydk::Enum::YLeaf switchover;
        static const ydk::Enum::YLeaf master_te_recovery;
        static const ydk::Enum::YLeaf optical_r_mgr_recovery;
        static const ydk::Enum::YLeaf te_exit;
        static const ydk::Enum::YLeaf bkup_assign_fail;
        static const ydk::Enum::YLeaf bfd_fail;
        static const ydk::Enum::YLeaf bfd_recovery;
        static const ydk::Enum::YLeaf lsp_wrap_act_err;
        static const ydk::Enum::YLeaf lsp_wrap_rw_err;
        static const ydk::Enum::YLeaf fsm_cause_must_be_last;

};

class MplsTeBackup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf backup_static;
        static const ydk::Enum::YLeaf backup_auto;

};

class OcMplsTeMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oc_mpls_te_metric_type_igp;
        static const ydk::Enum::YLeaf oc_mpls_te_metric_type_te;

};

class MplsTeTunnelsSignalingStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf recovering;
        static const ydk::Enum::YLeaf recovered;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf proceeding;
        static const ydk::Enum::YLeaf wait_bfd_session_up;
        static const ydk::Enum::YLeaf wait_sr_segment_path_up;
        static const ydk::Enum::YLeaf wait_local_label;
        static const ydk::Enum::YLeaf wait_local_label_rewrite;

};

class MplsTeSoftPreemptionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf soft_preemption_not_pending;
        static const ydk::Enum::YLeaf soft_preemption_pending;

};

class AutoBackupProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protection_none;
        static const ydk::Enum::YLeaf protection_next_hop;
        static const ydk::Enum::YLeaf protection_next_next_hop;

};

class TeDestinationState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf destination_disabled;
        static const ydk::Enum::YLeaf destination_down;
        static const ydk::Enum::YLeaf destination_up;

};

class MplsTePath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_name;
        static const ydk::Enum::YLeaf explicit_id;
        static const ydk::Enum::YLeaf no_ero;
        static const ydk::Enum::YLeaf segment_routing;

};

class MplsTpTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf admin_up;
        static const ydk::Enum::YLeaf oper_up;
        static const ydk::Enum::YLeaf oper_down;

};

class MplsTpLspOamState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ldi;
        static const ydk::Enum::YLeaf lkr;
        static const ydk::Enum::YLeaf ais;

};

class TeRestorationStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restoration_style_not_set;
        static const ydk::Enum::YLeaf restoration_style_keep_failed_lsp;
        static const ydk::Enum::YLeaf restoration_style_delete_failed_lsp;

};

class TeSrSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srsid_not_set;
        static const ydk::Enum::YLeaf srsid_node;
        static const ydk::Enum::YLeaf srsid_adj;
        static const ydk::Enum::YLeaf srsid_unknown;

};

class PceLspOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf going_down;
        static const ydk::Enum::YLeaf going_up;

};

class MplsTeBwLimit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bandwidth_limited;
        static const ydk::Enum::YLeaf bandwidth_unlimited;
        static const ydk::Enum::YLeaf bandwidth_none;

};

class MplsTePathoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf path_option_unknown;
        static const ydk::Enum::YLeaf path_option_dynamic;
        static const ydk::Enum::YLeaf path_option_explicit_name;
        static const ydk::Enum::YLeaf path_option_explicit_id;
        static const ydk::Enum::YLeaf path_option_pce;
        static const ydk::Enum::YLeaf path_option_no_ero;
        static const ydk::Enum::YLeaf path_option_segment_routing;

};

class TeSyncStatusShow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf master_sync_status_show;
        static const ydk::Enum::YLeaf slave_sync_status_show;

};

class TePpDiversity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf diversity_none;
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf node_link;
        static const ydk::Enum::YLeaf srlg;
        static const ydk::Enum::YLeaf diversity_user;
        static const ydk::Enum::YLeaf diversity_reverse_ero;

};

class IgpteLibBwModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rdm;
        static const ydk::Enum::YLeaf mam;
        static const ydk::Enum::YLeaf not_set;

};

class TePathProtProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf path_prot_profile_type1_plus0;
        static const ydk::Enum::YLeaf path_prot_profile_type1_plus_r;
        static const ydk::Enum::YLeaf path_prot_profile_type1_plus1;
        static const ydk::Enum::YLeaf path_prot_profile_type1_plus1_plus_r;
        static const ydk::Enum::YLeaf path_prot_profile_type_invalid;

};

class TpMidLspStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class MplsLibC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_lib_c_type_null;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4_p2p_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv6_p2p_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4_uni;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4_p2mp_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv6_p2mp_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4_tp_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv6_tp_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_p2p_binding_label;

};

class TeSyncNotReadyReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idt_in_progress;
        static const ydk::Enum::YLeaf standby_not_connected;
        static const ydk::Enum::YLeaf collaborator_disconnected;
        static const ydk::Enum::YLeaf collaborator_timeout;
        static const ydk::Enum::YLeaf unknown;

};

class MplsTeReoptDecisionReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf decision_reason_none;
        static const ydk::Enum::YLeaf not_superset;
        static const ydk::Enum::YLeaf superset;
        static const ydk::Enum::YLeaf lsp_frr_active;
        static const ydk::Enum::YLeaf bandwidth_change;
        static const ydk::Enum::YLeaf metric_type_change;
        static const ydk::Enum::YLeaf better_path_option_indexes;
        static const ydk::Enum::YLeaf inter_area_preferred_path_exists;
        static const ydk::Enum::YLeaf inter_area_preferred_tree_exists;
        static const ydk::Enum::YLeaf worse_path_option_indexes;
        static const ydk::Enum::YLeaf better_cumulative_metric;
        static const ydk::Enum::YLeaf worse_cumulative_metric;
        static const ydk::Enum::YLeaf identical;
        static const ydk::Enum::YLeaf no_s2_ls;
        static const ydk::Enum::YLeaf no_current_lsp;
        static const ydk::Enum::YLeaf user_path_option_switchover;
        static const ydk::Enum::YLeaf better_hops;
        static const ydk::Enum::YLeaf worse_hops;
        static const ydk::Enum::YLeaf pce_force;
        static const ydk::Enum::YLeaf affinity_changed;
        static const ydk::Enum::YLeaf cost_limit;
        static const ydk::Enum::YLeaf sig_timeout;
        static const ydk::Enum::YLeaf not_superset_inst_timer_expired;
        static const ydk::Enum::YLeaf path_verifiction_failed;
        static const ydk::Enum::YLeaf soft_preemption_recovery;
        static const ydk::Enum::YLeaf iep_changed;
        static const ydk::Enum::YLeaf po_changed;
        static const ydk::Enum::YLeaf dest_changed;
        static const ydk::Enum::YLeaf better_igp_area;
        static const ydk::Enum::YLeaf worse_igp_area;
        static const ydk::Enum::YLeaf better_bandwidth_load_balancing;
        static const ydk::Enum::YLeaf worse_bandwidth_load_balancing;
        static const ydk::Enum::YLeaf bfd_session_down;
        static const ydk::Enum::YLeaf auto_pcc_reopt;
        static const ydk::Enum::YLeaf sr_egress_path_changed;
        static const ydk::Enum::YLeaf overload_bit_set;
        static const ydk::Enum::YLeaf better_diversity;
        static const ydk::Enum::YLeaf worse_diversity;
        static const ydk::Enum::YLeaf bfd_session_type_changed;
        static const ydk::Enum::YLeaf lsp_drop_mode;
        static const ydk::Enum::YLeaf strict_spf;
        static const ydk::Enum::YLeaf not_used;

};

class MplsTeBackupStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf backup_none;
        static const ydk::Enum::YLeaf backup_unused;
        static const ydk::Enum::YLeaf backup_next_next_hop;
        static const ydk::Enum::YLeaf backup_next_hop;
        static const ydk::Enum::YLeaf backup_next_next_hop_srlg;
        static const ydk::Enum::YLeaf backup_next_hop_srlg;

};

class MplsProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_protection_type_unprotected;
        static const ydk::Enum::YLeaf mpls_protection_type_link;
        static const ydk::Enum::YLeaf mpls_protection_type_link_node;

};

class SignalingAgentEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_signaling;
        static const ydk::Enum::YLeaf rsvp_signaling;

};

class MplsTeTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_down;
        static const ydk::Enum::YLeaf state_up;
        static const ydk::Enum::YLeaf state_down_policy;
        static const ydk::Enum::YLeaf state_lockout;

};

class TeSigNameAppend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf address;
        static const ydk::Enum::YLeaf name;

};

class LinkDirectionEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_direction_up_stream;
        static const ydk::Enum::YLeaf link_direction_down_stream;
        static const ydk::Enum::YLeaf link_direction_unknown;

};

class MplsMteTunnelFailReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mtunnel_fail_reason_unapplicable;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_shutdown;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_destination;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_path_option;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_source;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_collaborator_disc;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_unmatched_class_type_priority;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_invalid_bidir_cfg;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_po_switchover;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_tunnel_id;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_link;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_link_shutdown;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_link_lmp_down;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_source_destination_same;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_otn_no_odu_level;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_bidir_assoc_id_missing;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_bfdgal_on_unidirectional;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_destination_invalid;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_termination_bandwidth_mismatch;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_termination_has_protection;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_termination_has_invalid_src_dest_ifindex;

};

class TeMgmtGenericFspec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_generic_fspec_type_g709otn;

};

class MplsTeLspWrapState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsp_wrap_not_ready;
        static const ydk::Enum::YLeaf lsp_wrap_active;
        static const ydk::Enum::YLeaf lsp_wrap_ready;

};

class MplsTeMgmtGmplsLabelOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf uni_c;
        static const ydk::Enum::YLeaf uni_n;

};

class HwOorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oor_green;
        static const ydk::Enum::YLeaf oor_yellow;
        static const ydk::Enum::YLeaf oor_red;

};

class MplsTeUni : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf xc;
        static const ydk::Enum::YLeaf term;

};

class TeSyncPendingReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf current_lspoos;
        static const ydk::Enum::YLeaf reopt_lspoos;
        static const ydk::Enum::YLeaf standby_lspoos;
        static const ydk::Enum::YLeaf standby_reopt_lspoos;
        static const ydk::Enum::YLeaf restore_lspoos;
        static const ydk::Enum::YLeaf invalid_sync_id;
        static const ydk::Enum::YLeaf null_pointer;
        static const ydk::Enum::YLeaf pending_flag;
        static const ydk::Enum::YLeaf del_from_act_flag;
        static const ydk::Enum::YLeaf oos_from_act_flag;
        static const ydk::Enum::YLeaf unknown;

};

class TeProcRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf v1_active;
        static const ydk::Enum::YLeaf v2_active;
        static const ydk::Enum::YLeaf v1_standby;
        static const ydk::Enum::YLeaf v2_standby;
        static const ydk::Enum::YLeaf v1_active_post_big_bang;
        static const ydk::Enum::YLeaf v1_standby_post_big_bang;
        static const ydk::Enum::YLeaf number_of_role;

};

class TunnelStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_state_unknown;
        static const ydk::Enum::YLeaf new_;
        static const ydk::Enum::YLeaf preempting;
        static const ydk::Enum::YLeaf admitting;
        static const ydk::Enum::YLeaf half_admitted;
        static const ydk::Enum::YLeaf admitted;
        static const ydk::Enum::YLeaf reservation_admitting;
        static const ydk::Enum::YLeaf reservation_half_admitted;
        static const ydk::Enum::YLeaf reservation_admitted;

};

class TeXroAttribute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srl_gs;

};

class TePathSelectionTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf min_fill;
        static const ydk::Enum::YLeaf max_fill;
        static const ydk::Enum::YLeaf random;

};

class FlexLspLockoutOrigination : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lockout_origination_none;
        static const ydk::Enum::YLeaf lockout_origination_local;
        static const ydk::Enum::YLeaf lockout_origination_remote;

};

class BandwidthStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bandwidth_held;
        static const ydk::Enum::YLeaf bandwidth_reserved;
        static const ydk::Enum::YLeaf bandwidth_unknown;

};

class MplsTeFrrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frr_inactive;
        static const ydk::Enum::YLeaf frr_active;
        static const ydk::Enum::YLeaf frr_ready;

};

class TeAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv4_unnumbered;

};

class TeBfdLspSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_none;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_created;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_up;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_down;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_admin_down;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_deleted;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_create_failed;

};

class PceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp_close;
        static const ydk::Enum::YLeaf tcp_listen;
        static const ydk::Enum::YLeaf tcp_connect;
        static const ydk::Enum::YLeaf pcep_closed;
        static const ydk::Enum::YLeaf pcep_opening;
        static const ydk::Enum::YLeaf pcep_open;

};

class MtePathOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf no_ero;
        static const ydk::Enum::YLeaf segment_routing;
        static const ydk::Enum::YLeaf po_count;

};

class TeControllerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notready;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf error_disabled;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf unknown;

};

class TePnrRevertOptions : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pnr_optionnot_set;
        static const ydk::Enum::YLeaf pnr_option_revertive;
        static const ydk::Enum::YLeaf pnr_option_non_revertive;

};

class TeXroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf unnumbered;
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf srlg;
        static const ydk::Enum::YLeaf p2p_lsp;

};

class TeOduLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_odu_level_not_set;
        static const ydk::Enum::YLeaf te_odu_level_one;
        static const ydk::Enum::YLeaf te_odu_level_two;
        static const ydk::Enum::YLeaf te_odu_level_three;
        static const ydk::Enum::YLeaf te_odu_level_four;
        static const ydk::Enum::YLeaf te_odu_zero;
        static const ydk::Enum::YLeaf te_odu_level_two_e;
        static const ydk::Enum::YLeaf te_odu_level_flex_cbr;
        static const ydk::Enum::YLeaf te_odu_level_flex_gfpf_resizeable;
        static const ydk::Enum::YLeaf te_odu_level_flex_gfpf_non_resizable;
        static const ydk::Enum::YLeaf te_odu_level_one_e;
        static const ydk::Enum::YLeaf te_odu_level_one_f;
        static const ydk::Enum::YLeaf te_odu_level_two_f;
        static const ydk::Enum::YLeaf te_odu_level_three_e_one;
        static const ydk::Enum::YLeaf te_odu_level_three_e_two;
        static const ydk::Enum::YLeaf te_odu_level_c_two;
        static const ydk::Enum::YLeaf te_odu_level_c_three;
        static const ydk::Enum::YLeaf te_odu_level_c_four;

};

class TeProtect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect_type1_plus1_unidir_no_aps;
        static const ydk::Enum::YLeaf protect_type1_plus1_unidir_aps;
        static const ydk::Enum::YLeaf protect_type1_plus1_bidir_aps;
        static const ydk::Enum::YLeaf protect_type_not_set;

};

class MplsTeProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_signaling_type_unknown;
        static const ydk::Enum::YLeaf mpls_te_signaling_type_rsvp;

};

class MplsTeBfdSessionDownAction1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reopt;
        static const ydk::Enum::YLeaf re_setup;

};

class MplsTeNode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf network;

};

class TeAutobwAppRej : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf application_allowed;
        static const ydk::Enum::YLeaf auto_bw_disabled;
        static const ydk::Enum::YLeaf tunnel_is_down;
        static const ydk::Enum::YLeaf tunnel_is_frr;
        static const ydk::Enum::YLeaf tunnel_is_backup;
        static const ydk::Enum::YLeaf tunnel_is_lock_down;

};

class MplsTeFrrSharing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sharing_none;
        static const ydk::Enum::YLeaf sharing_pri_oi_backup_oi_parent;
        static const ydk::Enum::YLeaf sharing_pri_oi_parent_backup_oi;
        static const ydk::Enum::YLeaf sharing_pri_oi_parent_backup_oi_parent;

};

class TeAutoTunExpPathHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_address_type;
        static const ydk::Enum::YLeaf mpls_label_type;
        static const ydk::Enum::YLeaf ipv4_and_label_type;

};

class MplsTpLspState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf unknown;

};

class TpLinkState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf unknown;

};

class FloodingTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flooding_reason_unknown;
        static const ydk::Enum::YLeaf link_up;
        static const ydk::Enum::YLeaf link_down;
        static const ydk::Enum::YLeaf threshold_up;
        static const ydk::Enum::YLeaf threshold_down;
        static const ydk::Enum::YLeaf threshold_up_pool1;
        static const ydk::Enum::YLeaf threshold_down_pool1;
        static const ydk::Enum::YLeaf timer_expired;
        static const ydk::Enum::YLeaf bandwidth_change;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf rsvp_timeout;
        static const ydk::Enum::YLeaf rsvp_reconnect;
        static const ydk::Enum::YLeaf te_exited;
        static const ydk::Enum::YLeaf srlg_change;
        static const ydk::Enum::YLeaf hw_oor_green;
        static const ydk::Enum::YLeaf hw_oor_yellow;
        static const ydk::Enum::YLeaf hw_oor_red;
        static const ydk::Enum::YLeaf hw_oor_recovery_duration_expired;
        static const ydk::Enum::YLeaf lsp_oor_green;
        static const ydk::Enum::YLeaf lsp_oor_yellow;
        static const ydk::Enum::YLeaf lsp_oor_red;
        static const ydk::Enum::YLeaf lsp_oor_recovery_duration_expired;
        static const ydk::Enum::YLeaf max_res_bandwidth_threshold_up;
        static const ydk::Enum::YLeaf max_res_bandwidth_threshold_down;

};

class TeS2LSrPathSelection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_s2l_sr_path_selection_any;
        static const ydk::Enum::YLeaf te_s2l_sr_path_selection_adj_unprotected;
        static const ydk::Enum::YLeaf te_s2l_sr_path_selection_adj_protected;

};

class MteTunnelOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_state_oper_unknown;
        static const ydk::Enum::YLeaf operational_down;
        static const ydk::Enum::YLeaf operational_up;

};

class IgpSubnet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp_subnet_type_none;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast_multiaccess;
        static const ydk::Enum::YLeaf p2mp;
        static const ydk::Enum::YLeaf loopback;

};

class TeStatsSigFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_stat_sig_filter_vif;
        static const ydk::Enum::YLeaf te_stat_sig_filter_lsp;

};

class MplsTeLsp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_lsp_type_not_set;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_p2p;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_p2mp;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_gmpls_ouni;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_gmpls_nni;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_p2p_bidir;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_gmpls_tp;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_gmpls_nni_otn;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_segment_routing_p2p;

};

class TeMeshgroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf meshgroup_type_automesh;
        static const ydk::Enum::YLeaf meshgroup_type_onehop;

};

class TeAssociationTieRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class RsvpMgmtEroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_type_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_type_un_num;

};

class MplsTpTunnelSwitchoverTrig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf bfd;
        static const ydk::Enum::YLeaf local_lockout;
        static const ydk::Enum::YLeaf remote_lockout;
        static const ydk::Enum::YLeaf ais;
        static const ydk::Enum::YLeaf ldi;
        static const ydk::Enum::YLeaf lkr;
        static const ydk::Enum::YLeaf link_down;

};

class BandwidthTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pool0;
        static const ydk::Enum::YLeaf pool1;
        static const ydk::Enum::YLeaf unknown;

};

class MplsTeIepHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iep_hop_type_unknown;
        static const ydk::Enum::YLeaf iep_hop_type_strict_next;
        static const ydk::Enum::YLeaf iep_hop_type_exclude;
        static const ydk::Enum::YLeaf iep_hop_type_exclude_node;
        static const ydk::Enum::YLeaf iep_hop_type_exclude_srlg;
        static const ydk::Enum::YLeaf iep_hop_type_loose_next;
        static const ydk::Enum::YLeaf iep_hop_type_next;
        static const ydk::Enum::YLeaf iep_hop_type_share_srlg;

};

class LspAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_lsp_admin_up;
        static const ydk::Enum::YLeaf mpls_te_lsp_admin_shutdown;

};

class MplsTeTunnelsProcessStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_running;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf not_registered_with_rsvp;

};

class TeS2LOutputRwExplicitNull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tes2l_output_rw_exp_null;
        static const ydk::Enum::YLeaf tes2l_output_rw_exp_null_v4;
        static const ydk::Enum::YLeaf tes2l_output_rw_exp_null_v6;

};

class MplsTeP2MpTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lmrib_restart;
        static const ydk::Enum::YLeaf lmrib_recovery;
        static const ydk::Enum::YLeaf rsvp_restart;
        static const ydk::Enum::YLeaf lsd_restart;
        static const ydk::Enum::YLeaf lsd_recovery;
        static const ydk::Enum::YLeaf clear_in_progress_bandwidth;
        static const ydk::Enum::YLeaf rsi_restart;
        static const ydk::Enum::YLeaf rsi_recovery;
        static const ydk::Enum::YLeaf ipv4_caps_replay;
        static const ydk::Enum::YLeaf retry_acl_registration_timer;
        static const ydk::Enum::YLeaf mpls_te_exit;
        static const ydk::Enum::YLeaf mpls_te_nsr_peer_restart;
        static const ydk::Enum::YLeaf mpls_te_issu_peer_restart;
        static const ydk::Enum::YLeaf bfd_restart;
        static const ydk::Enum::YLeaf bfd_recovery;
        static const ydk::Enum::YLeaf im_oc_restart;
        static const ydk::Enum::YLeaf im_oc_recovery;
        static const ydk::Enum::YLeaf rib_restart;
        static const ydk::Enum::YLeaf rib_recovery;
        static const ydk::Enum::YLeaf rib_next_hop_route_cleanup;
        static const ydk::Enum::YLeaf rsi_srlg_producer_retry;
        static const ydk::Enum::YLeaf eoc_reg_retry;
        static const ydk::Enum::YLeaf fib_restart;
        static const ydk::Enum::YLeaf fib_recovery;
        static const ydk::Enum::YLeaf fib_next_hop_route_cleanup;
        static const ydk::Enum::YLeaf fib_next_hop_register_retry;
        static const ydk::Enum::YLeaf tun_backend_scan_retry;
        static const ydk::Enum::YLeaf tunnel_checkpoint_list_service;
        static const ydk::Enum::YLeaf tunnel_service_binding_sid_allocation_retry;
        static const ydk::Enum::YLeaf timer_not_used;

};

class MplsTeLspRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_lsp_role_unknown;
        static const ydk::Enum::YLeaf mpls_te_lsp_role_head;
        static const ydk::Enum::YLeaf mpls_te_lsp_role_transit;
        static const ydk::Enum::YLeaf mpls_te_lsp_role_tail;

};

class MplsTeTermination : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ether;

};

class MplsTpLspBfdState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class MteReoptTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_trigger;
        static const ydk::Enum::YLeaf timer_trigger;
        static const ydk::Enum::YLeaf bandwidth_change_trigger;
        static const ydk::Enum::YLeaf auto_bandwidth_overflow_trigger;
        static const ydk::Enum::YLeaf auto_bandwidth_underflow_trigger;
        static const ydk::Enum::YLeaf auto_bandwidth_adjustment_trigger;
        static const ydk::Enum::YLeaf metric_type_change_trigger;
        static const ydk::Enum::YLeaf user_trigger;
        static const ydk::Enum::YLeaf frr_trigger;
        static const ydk::Enum::YLeaf remerge_error_trigger;
        static const ydk::Enum::YLeaf preferred_path_trigger;
        static const ydk::Enum::YLeaf preferred_tree_trigger;
        static const ydk::Enum::YLeaf due_to_maximum_metric;
        static const ydk::Enum::YLeaf path_option_switchover_trigger;
        static const ydk::Enum::YLeaf path_protection_switchover_trigger;
        static const ydk::Enum::YLeaf iep_enable_reoptimization_trigger;
        static const ydk::Enum::YLeaf affinity_path_verification_fail_trigger;
        static const ydk::Enum::YLeaf cost_limit_path_verification_fail_trigger;
        static const ydk::Enum::YLeaf soft_preemption_trigger;
        static const ydk::Enum::YLeaf iep_changed;
        static const ydk::Enum::YLeaf po_changed;
        static const ydk::Enum::YLeaf dest_changed;
        static const ydk::Enum::YLeaf reopt_try_to_force_it;
        static const ydk::Enum::YLeaf topology_change_trigger;
        static const ydk::Enum::YLeaf reopt_link_up_event;
        static const ydk::Enum::YLeaf bfd_session_down_trigger;
        static const ydk::Enum::YLeaf reverse_assoc_s2l_received_trigger;
        static const ydk::Enum::YLeaf gmpls_uni_multilayer_trigger;
        static const ydk::Enum::YLeaf gmpls_uni_user_trigger;
        static const ydk::Enum::YLeaf path_selection_tiebreaker_change_trigger;
        static const ydk::Enum::YLeaf sr_egress_path_change_trigger;
        static const ydk::Enum::YLeaf overload_bit_trigger;
        static const ydk::Enum::YLeaf pce_trigger;
        static const ydk::Enum::YLeaf lockout_metric_trigger;
        static const ydk::Enum::YLeaf bfd_session_config_change_trigger;
        static const ydk::Enum::YLeaf higher_priority_po_change_trigger;
        static const ydk::Enum::YLeaf sr_area_spf_support_change_trigger;
        static const ydk::Enum::YLeaf trigger_not_used;

};

class TeP2MpS2LDeletionSubcause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_subcause;
        static const ydk::Enum::YLeaf cleanup_req;
        static const ydk::Enum::YLeaf invalid_data;
        static const ydk::Enum::YLeaf fsm_inv_ctxt;
        static const ydk::Enum::YLeaf fsm_inv_ctxt_data;
        static const ydk::Enum::YLeaf fsm_inv_role;
        static const ydk::Enum::YLeaf ll_failure;
        static const ydk::Enum::YLeaf ll_rel_fail;
        static const ydk::Enum::YLeaf ll_mismatch;
        static const ydk::Enum::YLeaf ll_invalid;
        static const ydk::Enum::YLeaf ll_set_failure;
        static const ydk::Enum::YLeaf bad_out_label;
        static const ydk::Enum::YLeaf sl_err;
        static const ydk::Enum::YLeaf rl_mismatch;
        static const ydk::Enum::YLeaf sl_alloc_err;
        static const ydk::Enum::YLeaf upstream_downstream_label_mismatch;
        static const ydk::Enum::YLeaf upstream_label_failure;
        static const ydk::Enum::YLeaf upstream_label_rel_fail;
        static const ydk::Enum::YLeaf upstream_label_mismatch;
        static const ydk::Enum::YLeaf upstream_label_invalid;
        static const ydk::Enum::YLeaf bad_upstream_label;
        static const ydk::Enum::YLeaf ul_set_failure;
        static const ydk::Enum::YLeaf gmpls_label_alloc_err;
        static const ydk::Enum::YLeaf gmpls_label_clone_err;
        static const ydk::Enum::YLeaf rw_err;
        static const ydk::Enum::YLeaf up_rw_err;
        static const ydk::Enum::YLeaf path_admit;
        static const ydk::Enum::YLeaf bw;
        static const ydk::Enum::YLeaf admit_resv;
        static const ydk::Enum::YLeaf rrrm_err;
        static const ydk::Enum::YLeaf hardware_out_of_resources;
        static const ydk::Enum::YLeaf comp_rid;
        static const ydk::Enum::YLeaf comp_lcl_rid;
        static const ydk::Enum::YLeaf comp_up_rid;
        static const ydk::Enum::YLeaf comp_down_rid;
        static const ydk::Enum::YLeaf rest_if_hop;
        static const ydk::Enum::YLeaf inv_in_if;
        static const ydk::Enum::YLeaf nh_err;
        static const ydk::Enum::YLeaf inv_in_ero;
        static const ydk::Enum::YLeaf out_ero_fail;
        static const ydk::Enum::YLeaf frr_bk_asssign;
        static const ydk::Enum::YLeaf frr_bk_rm;
        static const ydk::Enum::YLeaf frr_bk_send;
        static const ydk::Enum::YLeaf frr_needs_del;
        static const ydk::Enum::YLeaf frr_reopt_lsp;
        static const ydk::Enum::YLeaf rsvp_api_h;
        static const ydk::Enum::YLeaf insane_path;
        static const ydk::Enum::YLeaf remerge_chk_fail;
        static const ydk::Enum::YLeaf remerge_detected;
        static const ydk::Enum::YLeaf xro;
        static const ydk::Enum::YLeaf resv_bw_set;
        static const ydk::Enum::YLeaf resv_prep_fail;
        static const ydk::Enum::YLeaf path_ch_proc;
        static const ydk::Enum::YLeaf path_ch_frr;
        static const ydk::Enum::YLeaf path_ch_sess_attri_fl;
        static const ydk::Enum::YLeaf path_ch_bw_ch;
        static const ydk::Enum::YLeaf path_err_proc;
        static const ydk::Enum::YLeaf path_err;
        static const ydk::Enum::YLeaf path_err_wpsr;
        static const ydk::Enum::YLeaf path_del;
        static const ydk::Enum::YLeaf resv_ch_proc;
        static const ydk::Enum::YLeaf resv_ch_rro;
        static const ydk::Enum::YLeaf resv_del;
        static const ydk::Enum::YLeaf resv_err;
        static const ydk::Enum::YLeaf perr_send_fail;
        static const ydk::Enum::YLeaf perr_proc_fail;
        static const ydk::Enum::YLeaf perr_rcv;
        static const ydk::Enum::YLeaf resv_err_rcv;
        static const ydk::Enum::YLeaf flowspec;
        static const ydk::Enum::YLeaf setup_conn_api_fail;
        static const ydk::Enum::YLeaf path_not_replayed;
        static const ydk::Enum::YLeaf resv_not_replayed;
        static const ydk::Enum::YLeaf rewrite_not_replayed;
        static const ydk::Enum::YLeaf label_not_replayed;
        static const ydk::Enum::YLeaf connection_not_ready;
        static const ydk::Enum::YLeaf master_did_not_replay;
        static const ydk::Enum::YLeaf head_s2l_has_no_vif;
        static const ydk::Enum::YLeaf frr_assigned_s2l_has_no_backup;
        static const ydk::Enum::YLeaf frr_assigned_s2l_has_down_backup;
        static const ydk::Enum::YLeaf out_link_down_and_no_frr;
        static const ydk::Enum::YLeaf collaborator_timeout_rsvp;
        static const ydk::Enum::YLeaf collaborator_timeout_lsd;
        static const ydk::Enum::YLeaf collaborator_timeout_lmrib;
        static const ydk::Enum::YLeaf collaborator_timeout_im;
        static const ydk::Enum::YLeaf collaborator_timeout_error;
        static const ydk::Enum::YLeaf topo_flush;
        static const ydk::Enum::YLeaf area_shut;
        static const ydk::Enum::YLeaf active_po_del;
        static const ydk::Enum::YLeaf path_verify_failed;
        static const ydk::Enum::YLeaf srlg_path_verify_failed;
        static const ydk::Enum::YLeaf affinity_path_verify_failed;
        static const ydk::Enum::YLeaf aff_fail_delayed_tear_timeout_failed;
        static const ydk::Enum::YLeaf cost_limit_verify_failed;
        static const ydk::Enum::YLeaf path_setup_timeout;
        static const ydk::Enum::YLeaf vif_destroyed;
        static const ydk::Enum::YLeaf vif_shut;
        static const ydk::Enum::YLeaf lsp_shut;
        static const ydk::Enum::YLeaf gmpls_uni_head;
        static const ydk::Enum::YLeaf head_resetup;
        static const ydk::Enum::YLeaf none_head_resetup;
        static const ydk::Enum::YLeaf dest_disabled;
        static const ydk::Enum::YLeaf iep_ch_act_po;
        static const ydk::Enum::YLeaf iep_ch_reopt;
        static const ydk::Enum::YLeaf iep_ch_standby;
        static const ydk::Enum::YLeaf dste_mode_ch;
        static const ydk::Enum::YLeaf reopt_del_frr_act;
        static const ydk::Enum::YLeaf new_reopt_tear_old;
        static const ydk::Enum::YLeaf reopt_failed_verify;
        static const ydk::Enum::YLeaf reopt_failed_install;
        static const ydk::Enum::YLeaf reopt_failed_rw;
        static const ydk::Enum::YLeaf reopt_failed_not_superset;
        static const ydk::Enum::YLeaf dclean_at_install_time;
        static const ydk::Enum::YLeaf dclean_at_clean_timer;
        static const ydk::Enum::YLeaf dclean_at_reopt_active;
        static const ydk::Enum::YLeaf lcl_notif_head;
        static const ydk::Enum::YLeaf in_if_fail;
        static const ydk::Enum::YLeaf out_if_fail;
        static const ydk::Enum::YLeaf if_fail_lc_oir;
        static const ydk::Enum::YLeaf te_rid_rm;
        static const ydk::Enum::YLeaf te_rsvp_oos_bkup;
        static const ydk::Enum::YLeaf in_if_fail_exp_null_cfg_ch;
        static const ydk::Enum::YLeaf new_curr_lsp_sig;
        static const ydk::Enum::YLeaf new_reopt_lsp_sig;
        static const ydk::Enum::YLeaf new_stdby_lsp_sig;
        static const ydk::Enum::YLeaf new_restore_lsp_sig;
        static const ydk::Enum::YLeaf new_cl_pp_lsp_sig;
        static const ydk::Enum::YLeaf chkpt_recovery_failed;
        static const ydk::Enum::YLeaf stdby_cr_failed;
        static const ydk::Enum::YLeaf reopt_lsp_rej;
        static const ydk::Enum::YLeaf reopt_po_sw_failed;
        static const ydk::Enum::YLeaf failed_to_find_path;
        static const ydk::Enum::YLeaf sig_rcv_fail_path_cr_ch;
        static const ydk::Enum::YLeaf lsp_db_shut;
        static const ydk::Enum::YLeaf reopt_hold_start;
        static const ydk::Enum::YLeaf vif_lspid_mismatch;
        static const ydk::Enum::YLeaf s2l_has_no_vif;
        static const ydk::Enum::YLeaf overload_reopt_timeout;
        static const ydk::Enum::YLeaf hop_limit_exceeded;
        static const ydk::Enum::YLeaf lingering_current_lsp;
        static const ydk::Enum::YLeaf lingering_standby_lsp;
        static const ydk::Enum::YLeaf lingering_restore_lsp;
        static const ydk::Enum::YLeaf double_lockout;
        static const ydk::Enum::YLeaf lockout_no_protection;
        static const ydk::Enum::YLeaf lockout_cleanup;
        static const ydk::Enum::YLeaf te_ppsw_lsp_mismatch;
        static const ydk::Enum::YLeaf te_stdbyup_no_curr_lsp;
        static const ydk::Enum::YLeaf stdby_failed_rw;
        static const ydk::Enum::YLeaf reopt_lsp_tear_ppsw;
        static const ydk::Enum::YLeaf delay_pp_lsp_tear_ppsw;
        static const ydk::Enum::YLeaf stdby_failed_verify;
        static const ydk::Enum::YLeaf stdby_not_needed_due_to_restore;
        static const ydk::Enum::YLeaf restore_failed_verify;
        static const ydk::Enum::YLeaf restore_failed_install;
        static const ydk::Enum::YLeaf restore_failed_rewrite;
        static const ydk::Enum::YLeaf te_ppsw_cfg_rmvd;
        static const ydk::Enum::YLeaf te_ppsw_manual_ppsw;
        static const ydk::Enum::YLeaf te_ppsw_bidir_p_chg_ppsw;
        static const ydk::Enum::YLeaf te_ppsw_bidir_lockout_ppsw;
        static const ydk::Enum::YLeaf dclean_at_pp_clean_timer;
        static const ydk::Enum::YLeaf reopt_standby_failed;
        static const ydk::Enum::YLeaf standby_reoptimized;
        static const ydk::Enum::YLeaf standby_reoptimize_aborted;
        static const ydk::Enum::YLeaf te_reoptup_no_curr_lsp;
        static const ydk::Enum::YLeaf te_reopt_curr_lsp_down;
        static const ydk::Enum::YLeaf te_cleanedt_curr_lsp_down;
        static const ydk::Enum::YLeaf te_delay_lsp_up;
        static const ydk::Enum::YLeaf no_route_due_to_affinity;
        static const ydk::Enum::YLeaf no_rib_lkup_bad_ero_gmpls;
        static const ydk::Enum::YLeaf cleanup_lingering;
        static const ydk::Enum::YLeaf te_s2l_del_sc_soft_preemption_timeout;
        static const ydk::Enum::YLeaf te_s2l_del_sc_soft_preempted_non_current;
        static const ydk::Enum::YLeaf te_s2l_del_sc_vif_sync_lsp_del;
        static const ydk::Enum::YLeaf rsvp_api_cleanup_req;
        static const ydk::Enum::YLeaf te_s2l_del_sc_frr_wrong_backup;
        static const ydk::Enum::YLeaf te_s2l_del_sc_bfd_session_create_failed;
        static const ydk::Enum::YLeaf te_s2l_del_sc_bfd_session_bringup_timeout;
        static const ydk::Enum::YLeaf te_s2l_del_sc_bfd_session_down;
        static const ydk::Enum::YLeaf te_s2l_del_sc_bfd_session_not_replayed;
        static const ydk::Enum::YLeaf te_s2l_del_sc_reopt_p2mp_egress_info_fail;
        static const ydk::Enum::YLeaf non_curr_frr_lcl_notif_event;
        static const ydk::Enum::YLeaf unsupported_encoding;
        static const ydk::Enum::YLeaf unsupported_gpid;
        static const ydk::Enum::YLeaf unsupported_switching_type;
        static const ydk::Enum::YLeaf upstream_label_change_not_permitted;
        static const ydk::Enum::YLeaf encoding_type_change_not_permitted;
        static const ydk::Enum::YLeaf aps_protect_info_change_failed;
        static const ydk::Enum::YLeaf incorrect_lsp_type;
        static const ydk::Enum::YLeaf local_hop_error;
        static const ydk::Enum::YLeaf unsupported_gmpls_attributes;
        static const ydk::Enum::YLeaf gmpls_uni_reopt_triggered;
        static const ydk::Enum::YLeaf maximum_acceptable_label_retries;
        static const ydk::Enum::YLeaf invalid_direction;
        static const ydk::Enum::YLeaf invalid_rewrite_context;
        static const ydk::Enum::YLeaf invalid_label_context;
        static const ydk::Enum::YLeaf dwdm_capability_changed;
        static const ydk::Enum::YLeaf dwdm_capability_removed;
        static const ydk::Enum::YLeaf dwdm_wavelength_removed;
        static const ydk::Enum::YLeaf gmpls_uni_multilayer_restoration;
        static const ydk::Enum::YLeaf gmpls_uni_user_triggered_reoptimization;
        static const ydk::Enum::YLeaf gmpls_uni_active_path_change_triggered_reopt;
        static const ydk::Enum::YLeaf passive_match_err;
        static const ydk::Enum::YLeaf egress_control_err;
        static const ydk::Enum::YLeaf egress_control_map_err;
        static const ydk::Enum::YLeaf restore_not_needed_for_current;
        static const ydk::Enum::YLeaf restore_not_needed_for_standby;
        static const ydk::Enum::YLeaf restore_dp_down;
        static const ydk::Enum::YLeaf current_not_needed_dp_down;
        static const ydk::Enum::YLeaf bad_protct_obj;
        static const ydk::Enum::YLeaf optical_link_down;
        static const ydk::Enum::YLeaf optical_link_lsp_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_owner_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_interface_handle_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_hop_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_role_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_downstream_router_id_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_upstream_router_id_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_encoding_type_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_switching_type_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_gpid_out_of_sync;
        static const ydk::Enum::YLeaf egress_optical_link_not_found;
        static const ydk::Enum::YLeaf ingress_optical_link_not_found;
        static const ydk::Enum::YLeaf sync_dest_state;
        static const ydk::Enum::YLeaf prot_object_err;
        static const ydk::Enum::YLeaf reverse_s2l_deleted;
        static const ydk::Enum::YLeaf cancel_inprogress_by_slave;
        static const ydk::Enum::YLeaf invalid_reverse_ero;
        static const ydk::Enum::YLeaf reverse_lsp_not_found;
        static const ydk::Enum::YLeaf reverse_lsp_not_present;
        static const ydk::Enum::YLeaf associated_vif_down;
        static const ydk::Enum::YLeaf vif_sync_processing;
        static const ydk::Enum::YLeaf incoming_interface_lockout;
        static const ydk::Enum::YLeaf sr_egress_path_changed;
        static const ydk::Enum::YLeaf in_if_fail_imp_null_cfg_ch;
        static const ydk::Enum::YLeaf reverse_lsp_failure;
        static const ydk::Enum::YLeaf lsp_wrap_label_error;
        static const ydk::Enum::YLeaf lsp_wrap_rewrite_error;
        static const ydk::Enum::YLeaf transit_lsp_out_of_resources;
        static const ydk::Enum::YLeaf fsm_sc_must_be_last;

};

class TeOduCapability : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf fixed;
        static const ydk::Enum::YLeaf flex;

};

class PceTunPathState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_none;
        static const ydk::Enum::YLeaf state_pending;
        static const ydk::Enum::YLeaf state_received_path;
        static const ydk::Enum::YLeaf state_no_peer;
        static const ydk::Enum::YLeaf state_pcep_down;
        static const ydk::Enum::YLeaf state_received_no_path;

};

class MteTunnelAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_state_admin_unknown;
        static const ydk::Enum::YLeaf admin_shutdown;
        static const ydk::Enum::YLeaf admin_up;

};

class Ctype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ctype_null;
        static const ydk::Enum::YLeaf ctype_ipv4;
        static const ydk::Enum::YLeaf ctype_ipv4_p2p_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv6_p2p_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv4_uni;
        static const ydk::Enum::YLeaf ctype_ipv4_p2mp_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv6_p2mp_tunnel;

};

class MplsTpTunnelActiveLsp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf working;
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf none;

};

class MplsTeIgpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;

};

class MplsTeDsteClassStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configured;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf unused;

};

class PceLspAutorouteMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;

};

class TeAcl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acl_type_unknown;
        static const ydk::Enum::YLeaf acl_type_access_list;
        static const ydk::Enum::YLeaf acl_type_prefix_list;
        static const ydk::Enum::YLeaf acl_type_unregistered;

};

class MplsTeLoadshare : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loadshare_equal;
        static const ydk::Enum::YLeaf loadshare_bandwidth_based;
        static const ydk::Enum::YLeaf loadshare_configured;

};

class IgpteAaMetricMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf metric_mode_none;
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf constant;

};

class MplsTeBwPool : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_bandwidth_pool0;
        static const ydk::Enum::YLeaf te_bandwidth_pool1;
        static const ydk::Enum::YLeaf te_bandwidth_any_pool;

};

class TeTargetAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid_te_target_type;
        static const ydk::Enum::YLeaf te_target_type_ipv4;
        static const ydk::Enum::YLeaf te_target_type_label;

};

class TeAutobwAppTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf application_none;
        static const ydk::Enum::YLeaf application_periodic;
        static const ydk::Enum::YLeaf application_manual;
        static const ydk::Enum::YLeaf application_overflow;
        static const ydk::Enum::YLeaf application_underflow;

};

class AdmissionPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reject_all;
        static const ydk::Enum::YLeaf allow_all;
        static const ydk::Enum::YLeaf reject_huge;
        static const ydk::Enum::YLeaf allow_if_room;

};

class MplsTeAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_unicast;
        static const ydk::Enum::YLeaf ipv4_multicast;
        static const ydk::Enum::YLeaf ipv6_unicast;
        static const ydk::Enum::YLeaf ipv6_multicast;

};

class MplsTeBackupUsage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf backup_not_protecting;
        static const ydk::Enum::YLeaf backup_protecting;

};

class TeBfdReversePath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_reverse_path_none;
        static const ydk::Enum::YLeaf bfd_reverse_path_binding_label;

};

class MplsTeMgmtGmplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf fixed_wdm;
        static const ydk::Enum::YLeaf fixed_g709otn;

};

class RsvpMgmtEroSubobjStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_not_available;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_available;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_bw_not_available;

};

class TeRevEroRejectReasons : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf bad_reverse_ero;
        static const ydk::Enum::YLeaf tie_rejected;
        static const ydk::Enum::YLeaf standby_not_required;
        static const ydk::Enum::YLeaf admin_state;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf class_type;
        static const ydk::Enum::YLeaf bad_association;

};

class RsvpMgmtRroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4rro_type;
        static const ydk::Enum::YLeaf label_rro_type;
        static const ydk::Enum::YLeaf unnumbered_rro_type;
        static const ydk::Enum::YLeaf srlg_rro_type;

};

class TeVifBfd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_disabled;
        static const ydk::Enum::YLeaf bfd_enabled;
        static const ydk::Enum::YLeaf sbfd_enabled;

};

class TeServTunClient : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_serv_auto_tun_client_invalid;
        static const ydk::Enum::YLeaf te_serv_p2mp_tun_client_mvpn;
        static const ydk::Enum::YLeaf te_serv_p2mp_tun_client_vpls;
        static const ydk::Enum::YLeaf te_serv_p2mp_tun_client_mvpn6;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_bgp;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_staticv4;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_staticv6;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_isis;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_ospf;
        static const ydk::Enum::YLeaf te_serv_auto_tun_client_count;

};

class TeSrlgCollectRequest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mandatory;
        static const ydk::Enum::YLeaf optional;

};

class ResourceProvider : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf resource_provider_none;
        static const ydk::Enum::YLeaf packet_switch_capable;
        static const ydk::Enum::YLeaf time_division_multiplex;
        static const ydk::Enum::YLeaf lambda_switch_capable;
        static const ydk::Enum::YLeaf fiber_switch_capable;
        static const ydk::Enum::YLeaf g709odu_capable;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_0_ */

