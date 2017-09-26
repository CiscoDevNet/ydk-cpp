#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_1_
#define _CISCO_IOS_XR_MPLS_TE_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold : public ydk::Entity
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

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon : public ydk::Entity
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
        class LinkFlags; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas> > flooded_areas;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas : public ydk::Entity
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

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public ydk::Entity
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

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags : public ydk::Entity
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

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth : public ydk::Entity
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
        class BandwidthPool0; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1> > bandwidth_pool1;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0 : public ydk::Entity
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

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1 : public ydk::Entity
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

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1


class MplsLcacStandby::BandwidthAllocation::Global : public ydk::Entity
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

}; // MplsLcacStandby::BandwidthAllocation::Global


class MplsLcacStandby::BfdNeighbors : public ydk::Entity
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

        class BfdNeighbor; //type: MplsLcacStandby::BfdNeighbors::BfdNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BfdNeighbors::BfdNeighbor> > bfd_neighbor;
        
}; // MplsLcacStandby::BfdNeighbors


class MplsLcacStandby::BfdNeighbors::BfdNeighbor : public ydk::Entity
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
        class Neighbor; //type: MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor> > neighbor;
        
}; // MplsLcacStandby::BfdNeighbors::BfdNeighbor


class MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor : public ydk::Entity
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

}; // MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor


class MplsLcacStandby::Gmpls : public ydk::Entity
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

        class Nni; //type: MplsLcacStandby::Gmpls::Nni
        class Uni; //type: MplsLcacStandby::Gmpls::Uni

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Gmpls::Nni> nni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Gmpls::Uni> uni;
        
}; // MplsLcacStandby::Gmpls


class MplsLcacStandby::Gmpls::Nni : public ydk::Entity
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


}; // MplsLcacStandby::Gmpls::Nni


class MplsLcacStandby::Gmpls::Uni : public ydk::Entity
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


}; // MplsLcacStandby::Gmpls::Uni


class MplsLcacStandby::LinkInformation : public ydk::Entity
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

        class Global; //type: MplsLcacStandby::LinkInformation::Global
        class Links; //type: MplsLcacStandby::LinkInformation::Links

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links> links;
        
}; // MplsLcacStandby::LinkInformation


class MplsLcacStandby::LinkInformation::Global : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Global


class MplsLcacStandby::LinkInformation::Links : public ydk::Entity
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

        class Link; //type: MplsLcacStandby::LinkInformation::Links::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link> > link;
        
}; // MplsLcacStandby::LinkInformation::Links


class MplsLcacStandby::LinkInformation::Links::Link : public ydk::Entity
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
        class LinkCommon; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon
        class BandwidthAccount; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount
        class HwOor; //type: MplsLcacStandby::LinkInformation::Links::Link::HwOor
        class LinkExtendedAttribute; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute
        class LinkForwadRefValue; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue
        class AffinityMap; //type: MplsLcacStandby::LinkInformation::Links::Link::AffinityMap
        class Areas; //type: MplsLcacStandby::LinkInformation::Links::Link::Areas
        class Lockout; //type: MplsLcacStandby::LinkInformation::Links::Link::Lockout

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::AffinityMap> > affinity_map;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::Areas> > areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount> bandwidth_account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::HwOor> hw_oor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon> link_common;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute> > link_extended_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue> > link_forwad_ref_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::Lockout> > lockout;
        
}; // MplsLcacStandby::LinkInformation::Links::Link


class MplsLcacStandby::LinkInformation::Links::Link::AffinityMap : public ydk::Entity
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
        class AffinityExtendedValue; //type: MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue> > affinity_extended_value;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::AffinityMap


class MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue


class MplsLcacStandby::LinkInformation::Links::Link::Areas : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::Areas


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount : public ydk::Entity
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

        class BandwidthAccountCommonInfo; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo
        class RsvpTeBandwidthSampleHistory; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory
        class SrBandwidthSampleHistory; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo> bandwidth_account_common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory> rsvp_te_bandwidth_sample_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory> sr_bandwidth_sample_history;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo : public ydk::Entity
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
        class RsvpTeBandwidthUtilization; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization
        class SrBandwidthUtilization; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization> rsvp_te_bandwidth_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization> sr_bandwidth_utilization;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory : public ydk::Entity
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

        class RsvpTeActiveIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample
        class RsvpTePreviousIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample> > rsvp_te_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample> > rsvp_te_previous_interval_sample;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory : public ydk::Entity
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

        class SrActiveIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample
        class SrPreviousIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample> > sr_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample> > sr_previous_interval_sample;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::HwOor : public ydk::Entity
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
        class HwOOrLinkStatistic; //type: MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic> > hw_o_or_link_statistic;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::HwOor


class MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon : public ydk::Entity
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
        class LinkFlags; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas> > flooded_areas;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup


class MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute


class MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue


class MplsLcacStandby::LinkInformation::Links::Link::Lockout : public ydk::Entity
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

}; // MplsLcacStandby::LinkInformation::Links::Link::Lockout


class MplsLcacStandby::LinkSummary : public ydk::Entity
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
        class BandwidthAccountSummary; //type: MplsLcacStandby::LinkSummary::BandwidthAccountSummary
        class AreasSummary; //type: MplsLcacStandby::LinkSummary::AreasSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkSummary::AreasSummary> > areas_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkSummary::BandwidthAccountSummary> bandwidth_account_summary;
        
}; // MplsLcacStandby::LinkSummary


class MplsLcacStandby::LinkSummary::AreasSummary : public ydk::Entity
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

}; // MplsLcacStandby::LinkSummary::AreasSummary


class MplsLcacStandby::LinkSummary::BandwidthAccountSummary : public ydk::Entity
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

}; // MplsLcacStandby::LinkSummary::BandwidthAccountSummary


class MplsLcacStandby::Neighbors : public ydk::Entity
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

        class Neighbor; //type: MplsLcacStandby::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Neighbors::Neighbor> > neighbor;
        
}; // MplsLcacStandby::Neighbors


class MplsLcacStandby::Neighbors::Neighbor : public ydk::Entity
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
        class Neighbor_; //type: MplsLcacStandby::Neighbors::Neighbor::Neighbor_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Neighbors::Neighbor::Neighbor_> > neighbor;
        
}; // MplsLcacStandby::Neighbors::Neighbor


class MplsLcacStandby::Neighbors::Neighbor::Neighbor_ : public ydk::Entity
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

}; // MplsLcacStandby::Neighbors::Neighbor::Neighbor_


class MplsLcacStandby::PreemptionEvents : public ydk::Entity
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

        class PreemptionEvent; //type: MplsLcacStandby::PreemptionEvents::PreemptionEvent

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::PreemptionEvents::PreemptionEvent> > preemption_event;
        
}; // MplsLcacStandby::PreemptionEvents


class MplsLcacStandby::PreemptionEvents::PreemptionEvent : public ydk::Entity
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
        class Lsp; //type: MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp> > lsp;
        
}; // MplsLcacStandby::PreemptionEvents::PreemptionEvent


class MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp : public ydk::Entity
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

}; // MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp


class MplsLcacStandby::SoftPreemptionGlobalInfo : public ydk::Entity
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

}; // MplsLcacStandby::SoftPreemptionGlobalInfo


class MplsLcacStandby::SoftPreemptions : public ydk::Entity
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

        class SoftPreemption; //type: MplsLcacStandby::SoftPreemptions::SoftPreemption

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptions::SoftPreemption> > soft_preemption;
        
}; // MplsLcacStandby::SoftPreemptions


class MplsLcacStandby::SoftPreemptions::SoftPreemption : public ydk::Entity
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
        class CurrentSoftPreemptionLsp; //type: MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp> > current_soft_preemption_lsp;
        
}; // MplsLcacStandby::SoftPreemptions::SoftPreemption


class MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp : public ydk::Entity
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

}; // MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp


class MplsLcacStandby::Statistics : public ydk::Entity
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

        class Summary; //type: MplsLcacStandby::Statistics::Summary
        class StatsticsLinks; //type: MplsLcacStandby::Statistics::StatsticsLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks> statstics_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary> summary;
        
}; // MplsLcacStandby::Statistics


class MplsLcacStandby::Statistics::StatsticsLinks : public ydk::Entity
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

        class StatsticsLink; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink> > statstics_link;
        
}; // MplsLcacStandby::Statistics::StatsticsLinks


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink : public ydk::Entity
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
        class IncomingPathStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics
        class IncomingReservationStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics
        class OutgoingPathStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics
        class OutgoingReservationStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics
        class IncomingPathStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit
        class IncomingReservationStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit
        class OutgoingPathStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit
        class OutgoingReservationStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics> incoming_path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit> incoming_path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics> incoming_reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit> incoming_reservation_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics> outgoing_path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit> outgoing_path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics> outgoing_reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit> outgoing_reservation_statistics32_bit;
        
}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit


class MplsLcacStandby::Statistics::Summary : public ydk::Entity
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
        class PathStatistics; //type: MplsLcacStandby::Statistics::Summary::PathStatistics
        class ReservationStatistics; //type: MplsLcacStandby::Statistics::Summary::ReservationStatistics
        class PathStatistics32Bit; //type: MplsLcacStandby::Statistics::Summary::PathStatistics32Bit
        class ReservationStatistics32Bit; //type: MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary::PathStatistics> path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary::PathStatistics32Bit> path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary::ReservationStatistics> reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit> reservation_statistics32_bit;
        
}; // MplsLcacStandby::Statistics::Summary


class MplsLcacStandby::Statistics::Summary::PathStatistics : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::Summary::PathStatistics


class MplsLcacStandby::Statistics::Summary::PathStatistics32Bit : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::Summary::PathStatistics32Bit


class MplsLcacStandby::Statistics::Summary::ReservationStatistics : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::Summary::ReservationStatistics


class MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit : public ydk::Entity
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

}; // MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit

class MplsPce : public ydk::Entity
{
    public:
        MplsPce();
        ~MplsPce();

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

        class Lsps; //type: MplsPce::Lsps
        class Statistics; //type: MplsPce::Statistics
        class Peers; //type: MplsPce::Peers
        class Topology; //type: MplsPce::Topology
        class Tunnels; //type: MplsPce::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps> lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers> peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology> topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Tunnels> tunnels;
        
}; // MplsPce


class MplsPce::Lsps : public ydk::Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf symbolic_name_xr; //type: string
        ydk::YLeaf session_internal_lsp_id; //type: uint32
        ydk::YLeaf stateful_request_parameter_id; //type: uint32
        ydk::YLeaf request_queue_size; //type: uint8
        ydk::YLeaf delegatable; //type: boolean
        ydk::YLeaf operational; //type: PceLspOperState
        ydk::YLeaf administrative; //type: boolean
        ydk::YLeaf cleanup_timer_exp; //type: int32
        ydk::YLeaf delegation_timer_exp; //type: int32
        ydk::YLeaf create; //type: boolean
        ydk::YLeaf state_timer_exp; //type: int32
        ydk::YLeaf lspo_is_used; //type: boolean
        ydk::YLeaf forward_class_id; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeafList backup_path; //type: list of  string
        class Lsp; //type: MplsPce::Lsps::Lsp
        class Creator; //type: MplsPce::Lsps::Creator
        class Delegated; //type: MplsPce::Lsps::Delegated
        class Identifiers; //type: MplsPce::Lsps::Identifiers
        class Autoroute; //type: MplsPce::Lsps::Autoroute
        class Paths; //type: MplsPce::Lsps::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Autoroute> autoroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Creator> creator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Delegated> delegated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Identifiers> identifiers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp> > lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths> > paths;
        
}; // MplsPce::Lsps


class MplsPce::Lsps::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf announced; //type: boolean
        ydk::YLeaf metric_type; //type: PceLspAutorouteMetric
        ydk::YLeaf metric; //type: uint32
        ydk::YLeafList destination; //type: list of  string

}; // MplsPce::Lsps::Autoroute


class MplsPce::Lsps::Creator : public ydk::Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPce::Lsps::Creator


class MplsPce::Lsps::Delegated : public ydk::Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPce::Lsps::Delegated


class MplsPce::Lsps::Identifiers : public ydk::Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf sender; //type: string
        ydk::YLeaf te_lsp_id; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32

}; // MplsPce::Lsps::Identifiers


class MplsPce::Lsps::Lsp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf symbolic_name_xr; //type: string
        ydk::YLeaf session_internal_lsp_id; //type: uint32
        ydk::YLeaf stateful_request_parameter_id; //type: uint32
        ydk::YLeaf request_queue_size; //type: uint8
        ydk::YLeaf delegatable; //type: boolean
        ydk::YLeaf operational; //type: PceLspOperState
        ydk::YLeaf administrative; //type: boolean
        ydk::YLeaf cleanup_timer_exp; //type: int32
        ydk::YLeaf delegation_timer_exp; //type: int32
        ydk::YLeaf create; //type: boolean
        ydk::YLeaf state_timer_exp; //type: int32
        ydk::YLeaf lspo_is_used; //type: boolean
        ydk::YLeaf forward_class_id; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeafList backup_path; //type: list of  string
        class Creator; //type: MplsPce::Lsps::Lsp::Creator
        class Delegated; //type: MplsPce::Lsps::Lsp::Delegated
        class Identifiers; //type: MplsPce::Lsps::Lsp::Identifiers
        class Autoroute; //type: MplsPce::Lsps::Lsp::Autoroute
        class Paths; //type: MplsPce::Lsps::Lsp::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Autoroute> autoroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Creator> creator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Delegated> delegated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Identifiers> identifiers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths> > paths;
        
}; // MplsPce::Lsps::Lsp


class MplsPce::Lsps::Lsp::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf announced; //type: boolean
        ydk::YLeaf metric_type; //type: PceLspAutorouteMetric
        ydk::YLeaf metric; //type: uint32
        ydk::YLeafList destination; //type: list of  string

}; // MplsPce::Lsps::Lsp::Autoroute


class MplsPce::Lsps::Lsp::Creator : public ydk::Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPce::Lsps::Lsp::Creator


class MplsPce::Lsps::Lsp::Delegated : public ydk::Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPce::Lsps::Lsp::Delegated


class MplsPce::Lsps::Lsp::Identifiers : public ydk::Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf sender; //type: string
        ydk::YLeaf te_lsp_id; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32

}; // MplsPce::Lsps::Lsp::Identifiers


class MplsPce::Lsps::Lsp::Paths : public ydk::Entity
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

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf is_bw_used; //type: boolean
        ydk::YLeaf reopt_bw; //type: uint32
        ydk::YLeaf is_reopt_bw_used; //type: boolean
        ydk::YLeaf applied_bw; //type: uint32
        ydk::YLeaf is_applied_bw_used; //type: boolean
        class Ero; //type: MplsPce::Lsps::Lsp::Paths::Ero
        class Lspa; //type: MplsPce::Lsps::Lsp::Paths::Lspa
        class Rro; //type: MplsPce::Lsps::Lsp::Paths::Rro
        class Metric; //type: MplsPce::Lsps::Lsp::Paths::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Ero> ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Lspa> lspa;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Metric> > metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Rro> rro;
        
}; // MplsPce::Lsps::Lsp::Paths


class MplsPce::Lsps::Lsp::Paths::Ero : public ydk::Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPce::Lsps::Lsp::Paths::Ero::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Ero::Subobject> > subobject;
        
}; // MplsPce::Lsps::Lsp::Paths::Ero


class MplsPce::Lsps::Lsp::Paths::Ero::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPce::Lsps::Lsp::Paths::Ero::Subobject


class MplsPce::Lsps::Lsp::Paths::Lspa : public ydk::Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf exlude_any; //type: uint32
        ydk::YLeaf include_any; //type: uint32
        ydk::YLeaf include_all; //type: uint32
        ydk::YLeaf setup; //type: uint8
        ydk::YLeaf hold; //type: uint8
        ydk::YLeaf lbit; //type: boolean

}; // MplsPce::Lsps::Lsp::Paths::Lspa


class MplsPce::Lsps::Lsp::Paths::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // MplsPce::Lsps::Lsp::Paths::Metric


class MplsPce::Lsps::Lsp::Paths::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPce::Lsps::Lsp::Paths::Rro::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Rro::Subobject> > subobject;
        
}; // MplsPce::Lsps::Lsp::Paths::Rro


class MplsPce::Lsps::Lsp::Paths::Rro::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPce::Lsps::Lsp::Paths::Rro::Subobject


class MplsPce::Lsps::Paths : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf is_bw_used; //type: boolean
        ydk::YLeaf reopt_bw; //type: uint32
        ydk::YLeaf is_reopt_bw_used; //type: boolean
        ydk::YLeaf applied_bw; //type: uint32
        ydk::YLeaf is_applied_bw_used; //type: boolean
        class Ero; //type: MplsPce::Lsps::Paths::Ero
        class Lspa; //type: MplsPce::Lsps::Paths::Lspa
        class Rro; //type: MplsPce::Lsps::Paths::Rro
        class Metric; //type: MplsPce::Lsps::Paths::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Ero> ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Lspa> lspa;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Metric> > metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Rro> rro;
        
}; // MplsPce::Lsps::Paths


class MplsPce::Lsps::Paths::Ero : public ydk::Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPce::Lsps::Paths::Ero::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Ero::Subobject> > subobject;
        
}; // MplsPce::Lsps::Paths::Ero


class MplsPce::Lsps::Paths::Ero::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPce::Lsps::Paths::Ero::Subobject


class MplsPce::Lsps::Paths::Lspa : public ydk::Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf exlude_any; //type: uint32
        ydk::YLeaf include_any; //type: uint32
        ydk::YLeaf include_all; //type: uint32
        ydk::YLeaf setup; //type: uint8
        ydk::YLeaf hold; //type: uint8
        ydk::YLeaf lbit; //type: boolean

}; // MplsPce::Lsps::Paths::Lspa


class MplsPce::Lsps::Paths::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // MplsPce::Lsps::Paths::Metric


class MplsPce::Lsps::Paths::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPce::Lsps::Paths::Rro::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Rro::Subobject> > subobject;
        
}; // MplsPce::Lsps::Paths::Rro


class MplsPce::Lsps::Paths::Rro::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPce::Lsps::Paths::Rro::Subobject


class MplsPce::Peers : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Peer; //type: MplsPce::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer> > peer;
        
}; // MplsPce::Peers


class MplsPce::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf error; //type: string
        ydk::YLeaf pce_state; //type: PceState
        ydk::YLeaf precedence; //type: uint32
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf triggered_sync_capability; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf delta_sync_capability; //type: boolean
        ydk::YLeaf pcep_up_time; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf candidate; //type: boolean
        ydk::YLeaf statically_configured; //type: boolean
        ydk::YLeaf md5_enabled; //type: boolean
        ydk::YLeaf keychain_enabled; //type: boolean
        ydk::YLeaf negotiated_keepalive; //type: uint32
        ydk::YLeaf negotated_dead_time; //type: uint32
        ydk::YLeaf pce_req_rx; //type: uint32
        ydk::YLeaf pce_req_tx; //type: uint32
        ydk::YLeaf pce_rep_rx; //type: uint32
        ydk::YLeaf pce_rep_tx; //type: uint32
        ydk::YLeaf pce_err_rx; //type: uint32
        ydk::YLeaf pce_err_tx; //type: uint32
        ydk::YLeaf pce_open_tx; //type: uint32
        ydk::YLeaf pce_open_rx; //type: uint32
        ydk::YLeaf pce_rpt_rx; //type: uint32
        ydk::YLeaf pce_rpt_tx; //type: uint32
        ydk::YLeaf pce_upd_rx; //type: uint32
        ydk::YLeaf pce_upd_tx; //type: uint32
        ydk::YLeaf pce_init_rx; //type: uint32
        ydk::YLeaf pce_init_tx; //type: uint32
        ydk::YLeaf pce_keepalive_tx; //type: uint64
        ydk::YLeaf pce_keepalive_rx; //type: uint64
        ydk::YLeaf req_reply_min; //type: uint64
        ydk::YLeaf req_reply_max; //type: uint64
        ydk::YLeaf req_reply_avg; //type: uint64
        ydk::YLeaf request_timeouts; //type: uint64
        ydk::YLeaf local_sid; //type: uint8
        ydk::YLeaf remote_sid; //type: uint8
        ydk::YLeaf min_keepalive_interval; //type: uint8
        ydk::YLeaf max_dead_interval; //type: uint8
        class LastTxPceErr; //type: MplsPce::Peers::Peer::LastTxPceErr
        class LastRxPceErr; //type: MplsPce::Peers::Peer::LastRxPceErr
        class IgPs; //type: MplsPce::Peers::Peer::IgPs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::IgPs> > ig_ps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::LastRxPceErr> last_rx_pce_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::LastTxPceErr> last_tx_pce_err;
        
}; // MplsPce::Peers::Peer


class MplsPce::Peers::Peer::IgPs : public ydk::Entity
{
    public:
        IgPs();
        ~IgPs();

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
        ydk::YLeaf igp_instance_id; //type: string

}; // MplsPce::Peers::Peer::IgPs


class MplsPce::Peers::Peer::LastRxPceErr : public ydk::Entity
{
    public:
        LastRxPceErr();
        ~LastRxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_err_type; //type: uint32
        ydk::YLeaf pce_err_value; //type: uint32
        ydk::YLeaf has_open_object; //type: boolean
        ydk::YLeaf openversion; //type: uint32
        ydk::YLeaf open_keepalive; //type: uint32
        ydk::YLeaf open_dead_time; //type: uint32
        ydk::YLeaf has_rp_object; //type: boolean
        ydk::YLeaf rp_request_id; //type: uint32

}; // MplsPce::Peers::Peer::LastRxPceErr


class MplsPce::Peers::Peer::LastTxPceErr : public ydk::Entity
{
    public:
        LastTxPceErr();
        ~LastTxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_err_type; //type: uint32
        ydk::YLeaf pce_err_value; //type: uint32
        ydk::YLeaf has_open_object; //type: boolean
        ydk::YLeaf openversion; //type: uint32
        ydk::YLeaf open_keepalive; //type: uint32
        ydk::YLeaf open_dead_time; //type: uint32
        ydk::YLeaf has_rp_object; //type: boolean
        ydk::YLeaf rp_request_id; //type: uint32

}; // MplsPce::Peers::Peer::LastTxPceErr


class MplsPce::Statistics : public ydk::Entity
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

        ydk::YLeaf neighbors; //type: uint32
        ydk::YLeaf tunnels; //type: uint32
        ydk::YLeaf pce_req_total; //type: uint32
        ydk::YLeaf pce_req_pending; //type: uint32
        ydk::YLeaf pce_req_timed_out; //type: uint32
        ydk::YLeaf max_file_descriptors; //type: uint32
        ydk::YLeaf current_file_descriptors; //type: uint32
        ydk::YLeaf current_pceq_length; //type: uint32
        ydk::YLeaf current_teq_length; //type: uint32
        ydk::YLeaf max_pceq_length; //type: uint32
        ydk::YLeaf max_teq_length; //type: uint32
        ydk::YLeafList maximum_in_queue_depth; //type: list of  uint32
        ydk::YLeafList average_in_queue_depth; //type: list of  uint32
        class IgpStatistics; //type: MplsPce::Statistics::IgpStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Statistics::IgpStatistics> igp_statistics;
        
}; // MplsPce::Statistics


class MplsPce::Statistics::IgpStatistics : public ydk::Entity
{
    public:
        IgpStatistics();
        ~IgpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf abr_lookup_min; //type: uint64
        ydk::YLeaf abr_lookup_max; //type: uint64
        ydk::YLeaf abr_lookup_avg; //type: uint64
        ydk::YLeaf abr_lookup_timeout; //type: uint64
        ydk::YLeaf abr_lookup_complete; //type: uint64

}; // MplsPce::Statistics::IgpStatistics


class MplsPce::Topology : public ydk::Entity
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

        class Global; //type: MplsPce::Topology::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology::Global> global;
        
}; // MplsPce::Topology


class MplsPce::Topology::Global : public ydk::Entity
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

        class Nodes; //type: MplsPce::Topology::Global::Nodes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology::Global::Nodes> > nodes;
        
}; // MplsPce::Topology::Global


class MplsPce::Topology::Global::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
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
        ydk::YLeaf igp_area_id; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf pce_cost; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf is_pce_border_node; //type: boolean

}; // MplsPce::Topology::Global::Nodes


class MplsPce::Tunnels : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf is_curr_path_option_pce; //type: boolean
        ydk::YLeaf curr_path_option_index; //type: uint32
        ydk::YLeaf configured_pce_address; //type: string
        ydk::YLeaf sender_pce_address; //type: string
        ydk::YLeaf path_state; //type: PceTunPathState
        ydk::YLeaf tunnel_state; //type: PceTunnelState
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf hop_count; //type: uint32
        class Tunnel; //type: MplsPce::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Tunnels::Tunnel> > tunnel;
        
}; // MplsPce::Tunnels


class MplsPce::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
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
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf is_curr_path_option_pce; //type: boolean
        ydk::YLeaf curr_path_option_index; //type: uint32
        ydk::YLeaf configured_pce_address; //type: string
        ydk::YLeaf sender_pce_address; //type: string
        ydk::YLeaf path_state; //type: PceTunPathState
        ydk::YLeaf tunnel_state; //type: PceTunnelState
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf hop_count; //type: uint32

}; // MplsPce::Tunnels::Tunnel

class MplsPceStdby : public ydk::Entity
{
    public:
        MplsPceStdby();
        ~MplsPceStdby();

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

        class Lsps; //type: MplsPceStdby::Lsps
        class Statistics; //type: MplsPceStdby::Statistics
        class Peers; //type: MplsPceStdby::Peers
        class Topology; //type: MplsPceStdby::Topology
        class Tunnels; //type: MplsPceStdby::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps> lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers> peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology> topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Tunnels> tunnels;
        
}; // MplsPceStdby


class MplsPceStdby::Lsps : public ydk::Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf symbolic_name_xr; //type: string
        ydk::YLeaf session_internal_lsp_id; //type: uint32
        ydk::YLeaf stateful_request_parameter_id; //type: uint32
        ydk::YLeaf request_queue_size; //type: uint8
        ydk::YLeaf delegatable; //type: boolean
        ydk::YLeaf operational; //type: PceLspOperState
        ydk::YLeaf administrative; //type: boolean
        ydk::YLeaf cleanup_timer_exp; //type: int32
        ydk::YLeaf delegation_timer_exp; //type: int32
        ydk::YLeaf create; //type: boolean
        ydk::YLeaf state_timer_exp; //type: int32
        ydk::YLeaf lspo_is_used; //type: boolean
        ydk::YLeaf forward_class_id; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeafList backup_path; //type: list of  string
        class Lsp; //type: MplsPceStdby::Lsps::Lsp
        class Creator; //type: MplsPceStdby::Lsps::Creator
        class Delegated; //type: MplsPceStdby::Lsps::Delegated
        class Identifiers; //type: MplsPceStdby::Lsps::Identifiers
        class Autoroute; //type: MplsPceStdby::Lsps::Autoroute
        class Paths; //type: MplsPceStdby::Lsps::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Autoroute> autoroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Creator> creator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Delegated> delegated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Identifiers> identifiers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp> > lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths> > paths;
        
}; // MplsPceStdby::Lsps


class MplsPceStdby::Lsps::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf announced; //type: boolean
        ydk::YLeaf metric_type; //type: PceLspAutorouteMetric
        ydk::YLeaf metric; //type: uint32
        ydk::YLeafList destination; //type: list of  string

}; // MplsPceStdby::Lsps::Autoroute


class MplsPceStdby::Lsps::Creator : public ydk::Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPceStdby::Lsps::Creator


class MplsPceStdby::Lsps::Delegated : public ydk::Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPceStdby::Lsps::Delegated


class MplsPceStdby::Lsps::Identifiers : public ydk::Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf sender; //type: string
        ydk::YLeaf te_lsp_id; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32

}; // MplsPceStdby::Lsps::Identifiers


class MplsPceStdby::Lsps::Lsp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf symbolic_name_xr; //type: string
        ydk::YLeaf session_internal_lsp_id; //type: uint32
        ydk::YLeaf stateful_request_parameter_id; //type: uint32
        ydk::YLeaf request_queue_size; //type: uint8
        ydk::YLeaf delegatable; //type: boolean
        ydk::YLeaf operational; //type: PceLspOperState
        ydk::YLeaf administrative; //type: boolean
        ydk::YLeaf cleanup_timer_exp; //type: int32
        ydk::YLeaf delegation_timer_exp; //type: int32
        ydk::YLeaf create; //type: boolean
        ydk::YLeaf state_timer_exp; //type: int32
        ydk::YLeaf lspo_is_used; //type: boolean
        ydk::YLeaf forward_class_id; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeafList backup_path; //type: list of  string
        class Creator; //type: MplsPceStdby::Lsps::Lsp::Creator
        class Delegated; //type: MplsPceStdby::Lsps::Lsp::Delegated
        class Identifiers; //type: MplsPceStdby::Lsps::Lsp::Identifiers
        class Autoroute; //type: MplsPceStdby::Lsps::Lsp::Autoroute
        class Paths; //type: MplsPceStdby::Lsps::Lsp::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Autoroute> autoroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Creator> creator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Delegated> delegated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Identifiers> identifiers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths> > paths;
        
}; // MplsPceStdby::Lsps::Lsp


class MplsPceStdby::Lsps::Lsp::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf announced; //type: boolean
        ydk::YLeaf metric_type; //type: PceLspAutorouteMetric
        ydk::YLeaf metric; //type: uint32
        ydk::YLeafList destination; //type: list of  string

}; // MplsPceStdby::Lsps::Lsp::Autoroute


class MplsPceStdby::Lsps::Lsp::Creator : public ydk::Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPceStdby::Lsps::Lsp::Creator


class MplsPceStdby::Lsps::Lsp::Delegated : public ydk::Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPceStdby::Lsps::Lsp::Delegated


class MplsPceStdby::Lsps::Lsp::Identifiers : public ydk::Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf sender; //type: string
        ydk::YLeaf te_lsp_id; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32

}; // MplsPceStdby::Lsps::Lsp::Identifiers


class MplsPceStdby::Lsps::Lsp::Paths : public ydk::Entity
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

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf is_bw_used; //type: boolean
        ydk::YLeaf reopt_bw; //type: uint32
        ydk::YLeaf is_reopt_bw_used; //type: boolean
        ydk::YLeaf applied_bw; //type: uint32
        ydk::YLeaf is_applied_bw_used; //type: boolean
        class Ero; //type: MplsPceStdby::Lsps::Lsp::Paths::Ero
        class Lspa; //type: MplsPceStdby::Lsps::Lsp::Paths::Lspa
        class Rro; //type: MplsPceStdby::Lsps::Lsp::Paths::Rro
        class Metric; //type: MplsPceStdby::Lsps::Lsp::Paths::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Ero> ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Lspa> lspa;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Metric> > metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Rro> rro;
        
}; // MplsPceStdby::Lsps::Lsp::Paths


class MplsPceStdby::Lsps::Lsp::Paths::Ero : public ydk::Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject> > subobject;
        
}; // MplsPceStdby::Lsps::Lsp::Paths::Ero


class MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject


class MplsPceStdby::Lsps::Lsp::Paths::Lspa : public ydk::Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf exlude_any; //type: uint32
        ydk::YLeaf include_any; //type: uint32
        ydk::YLeaf include_all; //type: uint32
        ydk::YLeaf setup; //type: uint8
        ydk::YLeaf hold; //type: uint8
        ydk::YLeaf lbit; //type: boolean

}; // MplsPceStdby::Lsps::Lsp::Paths::Lspa


class MplsPceStdby::Lsps::Lsp::Paths::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // MplsPceStdby::Lsps::Lsp::Paths::Metric


class MplsPceStdby::Lsps::Lsp::Paths::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject> > subobject;
        
}; // MplsPceStdby::Lsps::Lsp::Paths::Rro


class MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject


class MplsPceStdby::Lsps::Paths : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf is_bw_used; //type: boolean
        ydk::YLeaf reopt_bw; //type: uint32
        ydk::YLeaf is_reopt_bw_used; //type: boolean
        ydk::YLeaf applied_bw; //type: uint32
        ydk::YLeaf is_applied_bw_used; //type: boolean
        class Ero; //type: MplsPceStdby::Lsps::Paths::Ero
        class Lspa; //type: MplsPceStdby::Lsps::Paths::Lspa
        class Rro; //type: MplsPceStdby::Lsps::Paths::Rro
        class Metric; //type: MplsPceStdby::Lsps::Paths::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Ero> ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Lspa> lspa;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Metric> > metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Rro> rro;
        
}; // MplsPceStdby::Lsps::Paths


class MplsPceStdby::Lsps::Paths::Ero : public ydk::Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPceStdby::Lsps::Paths::Ero::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Ero::Subobject> > subobject;
        
}; // MplsPceStdby::Lsps::Paths::Ero


class MplsPceStdby::Lsps::Paths::Ero::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPceStdby::Lsps::Paths::Ero::Subobject


class MplsPceStdby::Lsps::Paths::Lspa : public ydk::Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf exlude_any; //type: uint32
        ydk::YLeaf include_any; //type: uint32
        ydk::YLeaf include_all; //type: uint32
        ydk::YLeaf setup; //type: uint8
        ydk::YLeaf hold; //type: uint8
        ydk::YLeaf lbit; //type: boolean

}; // MplsPceStdby::Lsps::Paths::Lspa


class MplsPceStdby::Lsps::Paths::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // MplsPceStdby::Lsps::Paths::Metric


class MplsPceStdby::Lsps::Paths::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPceStdby::Lsps::Paths::Rro::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Rro::Subobject> > subobject;
        
}; // MplsPceStdby::Lsps::Paths::Rro


class MplsPceStdby::Lsps::Paths::Rro::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPceStdby::Lsps::Paths::Rro::Subobject


class MplsPceStdby::Peers : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Peer; //type: MplsPceStdby::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer> > peer;
        
}; // MplsPceStdby::Peers


class MplsPceStdby::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf error; //type: string
        ydk::YLeaf pce_state; //type: PceState
        ydk::YLeaf precedence; //type: uint32
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf triggered_sync_capability; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf delta_sync_capability; //type: boolean
        ydk::YLeaf pcep_up_time; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf candidate; //type: boolean
        ydk::YLeaf statically_configured; //type: boolean
        ydk::YLeaf md5_enabled; //type: boolean
        ydk::YLeaf keychain_enabled; //type: boolean
        ydk::YLeaf negotiated_keepalive; //type: uint32
        ydk::YLeaf negotated_dead_time; //type: uint32
        ydk::YLeaf pce_req_rx; //type: uint32
        ydk::YLeaf pce_req_tx; //type: uint32
        ydk::YLeaf pce_rep_rx; //type: uint32
        ydk::YLeaf pce_rep_tx; //type: uint32
        ydk::YLeaf pce_err_rx; //type: uint32
        ydk::YLeaf pce_err_tx; //type: uint32
        ydk::YLeaf pce_open_tx; //type: uint32
        ydk::YLeaf pce_open_rx; //type: uint32
        ydk::YLeaf pce_rpt_rx; //type: uint32
        ydk::YLeaf pce_rpt_tx; //type: uint32
        ydk::YLeaf pce_upd_rx; //type: uint32
        ydk::YLeaf pce_upd_tx; //type: uint32
        ydk::YLeaf pce_init_rx; //type: uint32
        ydk::YLeaf pce_init_tx; //type: uint32
        ydk::YLeaf pce_keepalive_tx; //type: uint64
        ydk::YLeaf pce_keepalive_rx; //type: uint64
        ydk::YLeaf req_reply_min; //type: uint64
        ydk::YLeaf req_reply_max; //type: uint64
        ydk::YLeaf req_reply_avg; //type: uint64
        ydk::YLeaf request_timeouts; //type: uint64
        ydk::YLeaf local_sid; //type: uint8
        ydk::YLeaf remote_sid; //type: uint8
        ydk::YLeaf min_keepalive_interval; //type: uint8
        ydk::YLeaf max_dead_interval; //type: uint8
        class LastTxPceErr; //type: MplsPceStdby::Peers::Peer::LastTxPceErr
        class LastRxPceErr; //type: MplsPceStdby::Peers::Peer::LastRxPceErr
        class IgPs; //type: MplsPceStdby::Peers::Peer::IgPs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::IgPs> > ig_ps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::LastRxPceErr> last_rx_pce_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::LastTxPceErr> last_tx_pce_err;
        
}; // MplsPceStdby::Peers::Peer


class MplsPceStdby::Peers::Peer::IgPs : public ydk::Entity
{
    public:
        IgPs();
        ~IgPs();

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
        ydk::YLeaf igp_instance_id; //type: string

}; // MplsPceStdby::Peers::Peer::IgPs


class MplsPceStdby::Peers::Peer::LastRxPceErr : public ydk::Entity
{
    public:
        LastRxPceErr();
        ~LastRxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_err_type; //type: uint32
        ydk::YLeaf pce_err_value; //type: uint32
        ydk::YLeaf has_open_object; //type: boolean
        ydk::YLeaf openversion; //type: uint32
        ydk::YLeaf open_keepalive; //type: uint32
        ydk::YLeaf open_dead_time; //type: uint32
        ydk::YLeaf has_rp_object; //type: boolean
        ydk::YLeaf rp_request_id; //type: uint32

}; // MplsPceStdby::Peers::Peer::LastRxPceErr


class MplsPceStdby::Peers::Peer::LastTxPceErr : public ydk::Entity
{
    public:
        LastTxPceErr();
        ~LastTxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_err_type; //type: uint32
        ydk::YLeaf pce_err_value; //type: uint32
        ydk::YLeaf has_open_object; //type: boolean
        ydk::YLeaf openversion; //type: uint32
        ydk::YLeaf open_keepalive; //type: uint32
        ydk::YLeaf open_dead_time; //type: uint32
        ydk::YLeaf has_rp_object; //type: boolean
        ydk::YLeaf rp_request_id; //type: uint32

}; // MplsPceStdby::Peers::Peer::LastTxPceErr


class MplsPceStdby::Statistics : public ydk::Entity
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

        ydk::YLeaf neighbors; //type: uint32
        ydk::YLeaf tunnels; //type: uint32
        ydk::YLeaf pce_req_total; //type: uint32
        ydk::YLeaf pce_req_pending; //type: uint32
        ydk::YLeaf pce_req_timed_out; //type: uint32
        ydk::YLeaf max_file_descriptors; //type: uint32
        ydk::YLeaf current_file_descriptors; //type: uint32
        ydk::YLeaf current_pceq_length; //type: uint32
        ydk::YLeaf current_teq_length; //type: uint32
        ydk::YLeaf max_pceq_length; //type: uint32
        ydk::YLeaf max_teq_length; //type: uint32
        ydk::YLeafList maximum_in_queue_depth; //type: list of  uint32
        ydk::YLeafList average_in_queue_depth; //type: list of  uint32
        class IgpStatistics; //type: MplsPceStdby::Statistics::IgpStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Statistics::IgpStatistics> igp_statistics;
        
}; // MplsPceStdby::Statistics


class MplsPceStdby::Statistics::IgpStatistics : public ydk::Entity
{
    public:
        IgpStatistics();
        ~IgpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf abr_lookup_min; //type: uint64
        ydk::YLeaf abr_lookup_max; //type: uint64
        ydk::YLeaf abr_lookup_avg; //type: uint64
        ydk::YLeaf abr_lookup_timeout; //type: uint64
        ydk::YLeaf abr_lookup_complete; //type: uint64

}; // MplsPceStdby::Statistics::IgpStatistics


class MplsPceStdby::Topology : public ydk::Entity
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

        class Global; //type: MplsPceStdby::Topology::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology::Global> global;
        
}; // MplsPceStdby::Topology


class MplsPceStdby::Topology::Global : public ydk::Entity
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

        class Nodes; //type: MplsPceStdby::Topology::Global::Nodes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology::Global::Nodes> > nodes;
        
}; // MplsPceStdby::Topology::Global


class MplsPceStdby::Topology::Global::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
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
        ydk::YLeaf igp_area_id; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf pce_cost; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf is_pce_border_node; //type: boolean

}; // MplsPceStdby::Topology::Global::Nodes


class MplsPceStdby::Tunnels : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf is_curr_path_option_pce; //type: boolean
        ydk::YLeaf curr_path_option_index; //type: uint32
        ydk::YLeaf configured_pce_address; //type: string
        ydk::YLeaf sender_pce_address; //type: string
        ydk::YLeaf path_state; //type: PceTunPathState
        ydk::YLeaf tunnel_state; //type: PceTunnelState
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf hop_count; //type: uint32
        class Tunnel; //type: MplsPceStdby::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Tunnels::Tunnel> > tunnel;
        
}; // MplsPceStdby::Tunnels


class MplsPceStdby::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
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
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf is_curr_path_option_pce; //type: boolean
        ydk::YLeaf curr_path_option_index; //type: uint32
        ydk::YLeaf configured_pce_address; //type: string
        ydk::YLeaf sender_pce_address; //type: string
        ydk::YLeaf path_state; //type: PceTunPathState
        ydk::YLeaf tunnel_state; //type: PceTunnelState
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf hop_count; //type: uint32

}; // MplsPceStdby::Tunnels::Tunnel

class MplsTe : public ydk::Entity
{
    public:
        MplsTe();
        ~MplsTe();

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

        class SegmentRouting; //type: MplsTe::SegmentRouting
        class FibNextHopRoutes; //type: MplsTe::FibNextHopRoutes
        class NextHopRoutes; //type: MplsTe::NextHopRoutes
        class TeMib; //type: MplsTe::TeMib
        class HardwareOutOfResources; //type: MplsTe::HardwareOutOfResources
        class P2PP2MpTunnel; //type: MplsTe::P2PP2MpTunnel
        class TopologyNodes; //type: MplsTe::TopologyNodes
        class AnnounceTunnelsInfo; //type: MplsTe::AnnounceTunnelsInfo
        class CollaboratorTimers; //type: MplsTe::CollaboratorTimers
        class AutoTunnel; //type: MplsTe::AutoTunnel
        class SoftPreemption; //type: MplsTe::SoftPreemption
        class ForwardingAdjacencyDestinations; //type: MplsTe::ForwardingAdjacencyDestinations
        class IgpAreas; //type: MplsTe::IgpAreas
        class WrapProtection; //type: MplsTe::WrapProtection
        class Topology; //type: MplsTe::Topology
        class SignallingCounters; //type: MplsTe::SignallingCounters
        class DiffServTeClasses; //type: MplsTe::DiffServTeClasses
        class Issu; //type: MplsTe::Issu
        class AutoRouteDestinationEntries; //type: MplsTe::AutoRouteDestinationEntries
        class FastReroute; //type: MplsTe::FastReroute
        class AttributeSets; //type: MplsTe::AttributeSets
        class IgpAreaBriefs; //type: MplsTe::IgpAreaBriefs
        class Tunnels; //type: MplsTe::Tunnels
        class MaximumTunnels; //type: MplsTe::MaximumTunnels
        class PathProtection; //type: MplsTe::PathProtection
        class FibNextHopLabelRoutes; //type: MplsTe::FibNextHopLabelRoutes
        class P2Mp; //type: MplsTe::P2Mp
        class OpenConfig; //type: MplsTe::OpenConfig
        class LspOutOfResources; //type: MplsTe::LspOutOfResources
        class Bfd; //type: MplsTe::Bfd
        class Nsr; //type: MplsTe::Nsr
        class AutoTunnelServices; //type: MplsTe::AutoTunnelServices
        class AffinityMap; //type: MplsTe::AffinityMap
        class TopologyBriefs; //type: MplsTe::TopologyBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AffinityMap> affinity_map;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo> announce_tunnels_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets> attribute_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoRouteDestinationEntries> auto_route_destination_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel> auto_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices> auto_tunnel_services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::DiffServTeClasses> diff_serv_te_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes> fib_next_hop_label_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopRoutes> fib_next_hop_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::ForwardingAdjacencyDestinations> forwarding_adjacency_destinations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources> hardware_out_of_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs> igp_area_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas> igp_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources> lsp_out_of_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::MaximumTunnels> maximum_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes> next_hop_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig> open_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp> p2mp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel> p2p_p2mp_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters> signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TeMib> te_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology> topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs> topology_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes> topology_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels> tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::WrapProtection> wrap_protection;
        
}; // MplsTe


class MplsTe::AffinityMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AffinityMapArray; //type: MplsTe::AffinityMap::AffinityMapArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AffinityMap::AffinityMapArray> > affinity_map_array;
        
}; // MplsTe::AffinityMap


class MplsTe::AffinityMap::AffinityMapArray : public ydk::Entity
{
    public:
        AffinityMapArray();
        ~AffinityMapArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf affinity_name; //type: string
        ydk::YLeaf affinity_value; //type: uint32
        ydk::YLeaf affinity_bit_position; //type: uint8
        ydk::YLeaf affinity_table_id; //type: TeAffinityTable
        class AffinityExtendedValue; //type: MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue> > affinity_extended_value;
        
}; // MplsTe::AffinityMap::AffinityMapArray


class MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_1_ */

