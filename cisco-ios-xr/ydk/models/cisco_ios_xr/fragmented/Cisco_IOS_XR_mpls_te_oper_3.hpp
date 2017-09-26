#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_3_
#define _CISCO_IOS_XR_MPLS_TE_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::HardwareOutOfResources : public ydk::Entity
{
    public:
        HardwareOutOfResources();
        ~HardwareOutOfResources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Summary; //type: MplsTe::HardwareOutOfResources::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources::Summary> summary;
        
}; // MplsTe::HardwareOutOfResources


class MplsTe::HardwareOutOfResources::Summary : public ydk::Entity
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

        class HardwareOutOfResourcesState; //type: MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState> > hardware_out_of_resources_state;
        
}; // MplsTe::HardwareOutOfResources::Summary


class MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState : public ydk::Entity
{
    public:
        HardwareOutOfResourcesState();
        ~HardwareOutOfResourcesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hw_oor_state; //type: HwOorState
        ydk::YLeaf te_metric_penalty; //type: uint32
        ydk::YLeaf available_bw_percentage; //type: uint32
        ydk::YLeaf node_protection_disable; //type: boolean
        ydk::YLeaf transition_duration; //type: uint32
        ydk::YLeaf minimum_lsp_bandwidth; //type: uint32
        ydk::YLeaf accept_reopt; //type: boolean
        class Statistics; //type: MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics> statistics;
        
}; // MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState


class MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics : public ydk::Entity
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

        ydk::YLeaf hw_oor_state; //type: HwOorState
        ydk::YLeaf transitions; //type: uint32
        ydk::YLeaf node_protection_disable_number; //type: uint32
        ydk::YLeaf rejected_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_reopt_ls_ps_number; //type: uint32
        ydk::YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics


class MplsTe::IgpAreaBriefs : public ydk::Entity
{
    public:
        IgpAreaBriefs();
        ~IgpAreaBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IgpAreaBrief; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief> > igp_area_brief;
        
}; // MplsTe::IgpAreaBriefs


class MplsTe::IgpAreaBriefs::IgpAreaBrief : public ydk::Entity
{
    public:
        IgpAreaBrief();
        ~IgpAreaBrief();

        bool has_data() const override;
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
        ydk::YLeaf process_tag; //type: string
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf igp_system_id; //type: string
        ydk::YLeaf configured_te_router_id; //type: string
        ydk::YLeaf global_router_id; //type: string
        ydk::YLeaf globall_router_id_optical; //type: string
        ydk::YLeaf in_use_te_router_id; //type: string
        ydk::YLeaf is_connection_up; //type: boolean
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        class SecondaryRouterId; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId
        class Area; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area> > area;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId> > secondary_router_id;
        
}; // MplsTe::IgpAreaBriefs::IgpAreaBrief


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_index; //type: uint32
        ydk::YLeaf area_number; //type: uint32
        ydk::YLeaf area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf is_config_ready; //type: boolean
        class ActiveData; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData> active_data;
        
}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData : public ydk::Entity
{
    public:
        ActiveData();
        ~ActiveData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interfaces_count; //type: uint32
        ydk::YLeaf link_idt_received; //type: boolean
        ydk::YLeaf topology_idt_received; //type: boolean
        ydk::YLeaf sr_strict; //type: boolean
        ydk::YLeaf p2p_heads_count; //type: uint32
        ydk::YLeaf p2p_autoroute_announced_count; //type: uint32
        ydk::YLeaf p2p_forwarding_adjacency_count; //type: uint32
        ydk::YLeaf p2mp_destination_count; //type: uint32
        ydk::YLeaf tunnel_loose_hops; //type: uint32
        class AreaStatistics; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics> area_statistics;
        
}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics : public ydk::Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_adjacency_request_messages; //type: uint32
        ydk::YLeaf area_adjacency_announce_messages; //type: uint32
        ydk::YLeaf area_flood_messages; //type: uint32
        ydk::YLeaf area_lsa_announce_messages; //type: uint32
        ydk::YLeaf area_lsa_fragment_announce_messages; //type: uint32
        ydk::YLeaf area_lsa_delete_messages; //type: uint32
        ydk::YLeaf area_lsa_fragment_delete_messages; //type: uint32
        ydk::YLeaf area_tunnel_announce_messages; //type: uint32

}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics


class MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId : public ydk::Entity
{
    public:
        SecondaryRouterId();
        ~SecondaryRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId


class MplsTe::IgpAreas : public ydk::Entity
{
    public:
        IgpAreas();
        ~IgpAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IgpArea; //type: MplsTe::IgpAreas::IgpArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea> > igp_area;
        
}; // MplsTe::IgpAreas


class MplsTe::IgpAreas::IgpArea : public ydk::Entity
{
    public:
        IgpArea();
        ~IgpArea();

        bool has_data() const override;
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
        ydk::YLeaf process_tag; //type: string
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf igp_system_id; //type: string
        ydk::YLeaf configured_te_router_id; //type: string
        ydk::YLeaf global_router_id; //type: string
        ydk::YLeaf globall_router_id_optical; //type: string
        ydk::YLeaf in_use_te_router_id; //type: string
        ydk::YLeaf is_connection_up; //type: boolean
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        class SecondaryRouterId; //type: MplsTe::IgpAreas::IgpArea::SecondaryRouterId
        class Area; //type: MplsTe::IgpAreas::IgpArea::Area

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea::Area> > area;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea::SecondaryRouterId> > secondary_router_id;
        
}; // MplsTe::IgpAreas::IgpArea


class MplsTe::IgpAreas::IgpArea::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_index; //type: uint32
        ydk::YLeaf area_number; //type: uint32
        ydk::YLeaf area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf is_config_ready; //type: boolean
        class ActiveData; //type: MplsTe::IgpAreas::IgpArea::Area::ActiveData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea::Area::ActiveData> active_data;
        
}; // MplsTe::IgpAreas::IgpArea::Area


class MplsTe::IgpAreas::IgpArea::Area::ActiveData : public ydk::Entity
{
    public:
        ActiveData();
        ~ActiveData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interfaces_count; //type: uint32
        ydk::YLeaf link_idt_received; //type: boolean
        ydk::YLeaf topology_idt_received; //type: boolean
        ydk::YLeaf sr_strict; //type: boolean
        ydk::YLeaf p2p_heads_count; //type: uint32
        ydk::YLeaf p2p_autoroute_announced_count; //type: uint32
        ydk::YLeaf p2p_forwarding_adjacency_count; //type: uint32
        ydk::YLeaf p2mp_destination_count; //type: uint32
        ydk::YLeaf tunnel_loose_hops; //type: uint32
        class AreaStatistics; //type: MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics> area_statistics;
        
}; // MplsTe::IgpAreas::IgpArea::Area::ActiveData


class MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics : public ydk::Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_adjacency_request_messages; //type: uint32
        ydk::YLeaf area_adjacency_announce_messages; //type: uint32
        ydk::YLeaf area_flood_messages; //type: uint32
        ydk::YLeaf area_lsa_announce_messages; //type: uint32
        ydk::YLeaf area_lsa_fragment_announce_messages; //type: uint32
        ydk::YLeaf area_lsa_delete_messages; //type: uint32
        ydk::YLeaf area_lsa_fragment_delete_messages; //type: uint32
        ydk::YLeaf area_tunnel_announce_messages; //type: uint32

}; // MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics


class MplsTe::IgpAreas::IgpArea::SecondaryRouterId : public ydk::Entity
{
    public:
        SecondaryRouterId();
        ~SecondaryRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsTe::IgpAreas::IgpArea::SecondaryRouterId


class MplsTe::Issu : public ydk::Entity
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

        class Status; //type: MplsTe::Issu::Status
        class Detail; //type: MplsTe::Issu::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status> status;
        
}; // MplsTe::Issu


class MplsTe::Issu::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf role; //type: TeProcRole
        class SyncStatusInformation; //type: MplsTe::Issu::Detail::SyncStatusInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation> sync_status_information;
        
}; // MplsTe::Issu::Detail


class MplsTe::Issu::Detail::SyncStatusInformation : public ydk::Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_show_type; //type: TeSyncStatusShow
        class SlaveSyncInformation; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTe::Issu::Detail::SyncStatusInformation


class MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Idt; //type: MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation


class MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CurrentIdtInfo; //type: MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf insync_tunnels; //type: uint32
        ydk::YLeaf insync_sub_ls_ps; //type: uint32
        ydk::YLeaf pending_tunnels; //type: uint32
        ydk::YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CurrentIdtInfo; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf s2l_role; //type: MplsTeTunnelRole

}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf tunnel_name; //type: string

}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTe::Issu::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf role; //type: TeProcRole
        class SyncStatusInformation; //type: MplsTe::Issu::Status::SyncStatusInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation> sync_status_information;
        
}; // MplsTe::Issu::Status


class MplsTe::Issu::Status::SyncStatusInformation : public ydk::Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_show_type; //type: TeSyncStatusShow
        class SlaveSyncInformation; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTe::Issu::Status::SyncStatusInformation


class MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Idt; //type: MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation


class MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CurrentIdtInfo; //type: MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf insync_tunnels; //type: uint32
        ydk::YLeaf insync_sub_ls_ps; //type: uint32
        ydk::YLeaf pending_tunnels; //type: uint32
        ydk::YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CurrentIdtInfo; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf s2l_role; //type: MplsTeTunnelRole

}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf tunnel_name; //type: string

}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTe::LspOutOfResources : public ydk::Entity
{
    public:
        LspOutOfResources();
        ~LspOutOfResources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Summary; //type: MplsTe::LspOutOfResources::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources::Summary> summary;
        
}; // MplsTe::LspOutOfResources


class MplsTe::LspOutOfResources::Summary : public ydk::Entity
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

        ydk::YLeaf transit_lsp_total_count; //type: uint32
        ydk::YLeaf transit_lsp_unprotected_count; //type: uint32
        ydk::YLeaf lsp_oor_state; //type: LspOorState
        ydk::YLeaf lsp_oor_timestamp; //type: uint32
        ydk::YLeaf lsp_oor_green_recovery_time; //type: uint32
        class LspOorStateXr; //type: MplsTe::LspOutOfResources::Summary::LspOorStateXr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources::Summary::LspOorStateXr> > lsp_oor_state_xr;
        
}; // MplsTe::LspOutOfResources::Summary


class MplsTe::LspOutOfResources::Summary::LspOorStateXr : public ydk::Entity
{
    public:
        LspOorStateXr();
        ~LspOorStateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsp_oor_state; //type: LspOorState
        ydk::YLeaf threshold_transit_all; //type: uint32
        ydk::YLeaf threshold_transit_unprotected; //type: uint32
        ydk::YLeaf te_metric_penalty; //type: uint32
        ydk::YLeaf available_bw_percentage; //type: uint32
        ydk::YLeaf transition_duration; //type: uint32
        ydk::YLeaf minimum_lsp_bandwidth; //type: uint32
        ydk::YLeaf accept_reopt; //type: boolean
        class Statistics; //type: MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics> statistics;
        
}; // MplsTe::LspOutOfResources::Summary::LspOorStateXr


class MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics : public ydk::Entity
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

        ydk::YLeaf transitions; //type: uint32
        ydk::YLeaf rejected_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_reopt_ls_ps_number; //type: uint32
        ydk::YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics


class MplsTe::MaximumTunnels : public ydk::Entity
{
    public:
        MaximumTunnels();
        ~MaximumTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf current_maximum_tunnels; //type: uint32
        ydk::YLeaf current_maximum_destinations; //type: uint32
        ydk::YLeaf current_maximum_p2mp_tunnels; //type: uint32
        ydk::YLeaf current_maximum_p2mp_destnation_per_tunnel; //type: uint32
        ydk::YLeaf absolute_maximum; //type: uint32
        ydk::YLeaf current_maximum_autobackups; //type: uint32
        ydk::YLeaf current_maximum_auto_mesh; //type: uint32
        ydk::YLeaf current_tunnel_count; //type: uint32
        ydk::YLeaf current_destination_count; //type: uint32
        ydk::YLeaf current_p2mp_tunnel_count; //type: uint32
        ydk::YLeaf current_p2mp_destnation_per_tunnel_count; //type: uint32
        ydk::YLeaf is_autobackup_range_configured; //type: boolean
        ydk::YLeaf current_autobackups; //type: uint32
        ydk::YLeaf is_auto_mesh_range_configured; //type: boolean
        ydk::YLeaf current_auto_mesh; //type: uint32
        ydk::YLeaf current_maximum_gmpls_unitunnels; //type: uint32
        ydk::YLeaf current_gmpls_uni; //type: uint32

}; // MplsTe::MaximumTunnels


class MplsTe::NextHopRoutes : public ydk::Entity
{
    public:
        NextHopRoutes();
        ~NextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NextHopRoute; //type: MplsTe::NextHopRoutes::NextHopRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute> > next_hop_route;
        
}; // MplsTe::NextHopRoutes


class MplsTe::NextHopRoutes::NextHopRoute : public ydk::Entity
{
    public:
        NextHopRoute();
        ~NextHopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf prefix_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf next_hop_type; //type: MplsTeNextHop
        ydk::YLeaf prefix_address_xr; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint32
        ydk::YLeaf exact_match; //type: boolean
        ydk::YLeaf create_time; //type: uint32
        ydk::YLeaf last_used_time; //type: uint32
        ydk::YLeaf expire_time; //type: uint32
        ydk::YLeaf installed_tunnel_path_num; //type: uint32
        class ActiveRoute; //type: MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute
        class BackupRoute; //type: MplsTe::NextHopRoutes::NextHopRoute::BackupRoute
        class TunnelPath; //type: MplsTe::NextHopRoutes::NextHopRoute::TunnelPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute> active_route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::BackupRoute> backup_route;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::TunnelPath> > tunnel_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute


class MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute : public ydk::Entity
{
    public:
        ActiveRoute();
        ~ActiveRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_protocol_name; //type: string
        ydk::YLeaf route_distance; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf last_update_time; //type: uint32
        ydk::YLeaf is_registered; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf is_populated; //type: boolean
        ydk::YLeaf route_type; //type: uint16
        class NextHopPath; //type: MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath> > next_hop_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute


class MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath : public ydk::Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf abr_address; //type: string

}; // MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath


class MplsTe::NextHopRoutes::NextHopRoute::BackupRoute : public ydk::Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_protocol_name; //type: string
        ydk::YLeaf route_distance; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf last_update_time; //type: uint32
        ydk::YLeaf is_registered; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf is_populated; //type: boolean
        ydk::YLeaf route_type; //type: uint16
        class NextHopPath; //type: MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath> > next_hop_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute::BackupRoute


class MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath : public ydk::Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf abr_address; //type: string

}; // MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath


class MplsTe::NextHopRoutes::NextHopRoute::TunnelPath : public ydk::Entity
{
    public:
        TunnelPath();
        ~TunnelPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf install_time; //type: uint32
        ydk::YLeaf installed_metric; //type: uint32

}; // MplsTe::NextHopRoutes::NextHopRoute::TunnelPath


class MplsTe::Nsr : public ydk::Entity
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

        class Status; //type: MplsTe::Nsr::Status
        class Detail; //type: MplsTe::Nsr::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status> status;
        
}; // MplsTe::Nsr


class MplsTe::Nsr::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf role; //type: TeProcRole
        class SyncStatusInformation; //type: MplsTe::Nsr::Detail::SyncStatusInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation> sync_status_information;
        
}; // MplsTe::Nsr::Detail


class MplsTe::Nsr::Detail::SyncStatusInformation : public ydk::Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_show_type; //type: TeSyncStatusShow
        class SlaveSyncInformation; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTe::Nsr::Detail::SyncStatusInformation


class MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Idt; //type: MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation


class MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CurrentIdtInfo; //type: MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf insync_tunnels; //type: uint32
        ydk::YLeaf insync_sub_ls_ps; //type: uint32
        ydk::YLeaf pending_tunnels; //type: uint32
        ydk::YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CurrentIdtInfo; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf s2l_role; //type: MplsTeTunnelRole

}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf tunnel_name; //type: string

}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTe::Nsr::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf role; //type: TeProcRole
        class SyncStatusInformation; //type: MplsTe::Nsr::Status::SyncStatusInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation> sync_status_information;
        
}; // MplsTe::Nsr::Status


class MplsTe::Nsr::Status::SyncStatusInformation : public ydk::Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_show_type; //type: TeSyncStatusShow
        class SlaveSyncInformation; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTe::Nsr::Status::SyncStatusInformation


class MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Idt; //type: MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation


class MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CurrentIdtInfo; //type: MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf insync_tunnels; //type: uint32
        ydk::YLeaf insync_sub_ls_ps; //type: uint32
        ydk::YLeaf pending_tunnels; //type: uint32
        ydk::YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CurrentIdtInfo; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf s2l_role; //type: MplsTeTunnelRole

}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf tunnel_name; //type: string

}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTe::OpenConfig : public ydk::Entity
{
    public:
        OpenConfig();
        ~OpenConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LspStates; //type: MplsTe::OpenConfig::LspStates
        class LspCounters; //type: MplsTe::OpenConfig::LspCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig::LspCounters> lsp_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig::LspStates> lsp_states;
        
}; // MplsTe::OpenConfig


class MplsTe::OpenConfig::LspCounters : public ydk::Entity
{
    public:
        LspCounters();
        ~LspCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LspCounter; //type: MplsTe::OpenConfig::LspCounters::LspCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig::LspCounters::LspCounter> > lsp_counter;
        
}; // MplsTe::OpenConfig::LspCounters


class MplsTe::OpenConfig::LspCounters::LspCounter : public ydk::Entity
{
    public:
        LspCounter();
        ~LspCounter();

        bool has_data() const override;
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
        ydk::YLeaf tunnel_type; //type: OcMplsTeTunnel
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: OcMplsTeLsp
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf path_changes; //type: uint64
        ydk::YLeaf state_changes; //type: uint64
        ydk::YLeaf online_time; //type: string
        ydk::YLeaf current_path_time; //type: string
        ydk::YLeaf next_reoptimization_time; //type: string

}; // MplsTe::OpenConfig::LspCounters::LspCounter


class MplsTe::OpenConfig::LspStates : public ydk::Entity
{
    public:
        LspStates();
        ~LspStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LspState; //type: MplsTe::OpenConfig::LspStates::LspState

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig::LspStates::LspState> > lsp_state;
        
}; // MplsTe::OpenConfig::LspStates


class MplsTe::OpenConfig::LspStates::LspState : public ydk::Entity
{
    public:
        LspState();
        ~LspState();

        bool has_data() const override;
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
        ydk::YLeaf tunnel_type; //type: OcMplsTeTunnel
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: OcMplsTeLsp
        ydk::YLeaf signaling_protocol; //type: MplsTeProtocol
        ydk::YLeaf local_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_status; //type: LspAdminStatus
        ydk::YLeaf oper_status; //type: LspOperStatus
        ydk::YLeaf metric; //type: OcMplsTeMetric
        ydk::YLeaf protection_style_requested; //type: MplsProtection
        ydk::YLeaf reoptimize_timer; //type: uint16
        ydk::YLeaf role; //type: MplsTeLspRole
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf soft_preemption; //type: boolean

}; // MplsTe::OpenConfig::LspStates::LspState


class MplsTe::P2Mp : public ydk::Entity
{
    public:
        P2Mp();
        ~P2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRewrites; //type: MplsTe::P2Mp::TunnelRewrites
        class CollaboratorTimers; //type: MplsTe::P2Mp::CollaboratorTimers
        class ForwardingOutputLabelRewrites; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites> forwarding_output_label_rewrites;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites> tunnel_rewrites;
        
}; // MplsTe::P2Mp


class MplsTe::P2Mp::CollaboratorTimers : public ydk::Entity
{
    public:
        CollaboratorTimers();
        ~CollaboratorTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class P2MpTimer; //type: MplsTe::P2Mp::CollaboratorTimers::P2MpTimer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::CollaboratorTimers::P2MpTimer> > p2mp_timer;
        
}; // MplsTe::P2Mp::CollaboratorTimers


class MplsTe::P2Mp::CollaboratorTimers::P2MpTimer : public ydk::Entity
{
    public:
        P2MpTimer();
        ~P2MpTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf timer_type; //type: MplsTeP2MpTimer
        ydk::YLeaf timer_name; //type: string
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf expiry_time; //type: uint32
        ydk::YLeaf stop_time; //type: uint32
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf is_running; //type: boolean

}; // MplsTe::P2Mp::CollaboratorTimers::P2MpTimer


class MplsTe::P2Mp::ForwardingOutputLabelRewrites : public ydk::Entity
{
    public:
        ForwardingOutputLabelRewrites();
        ~ForwardingOutputLabelRewrites();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ForwardingOutputLabelRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite> > forwarding_output_label_rewrite;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite : public ydk::Entity
{
    public:
        ForwardingOutputLabelRewrite();
        ~ForwardingOutputLabelRewrite();

        bool has_data() const override;
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
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        ydk::YLeaf is_segment_routing; //type: boolean
        class S2LOutputRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite
        class S2L; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L
        class S2LsrPath; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L> > s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite> s2l_output_rewrite;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath> > s2lsr_path;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L : public ydk::Entity
{
    public:
        S2L();
        ~S2L();

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
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf sub_group_original_id; //type: string

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite : public ydk::Entity
{
    public:
        S2LOutputRewrite();
        ~S2LOutputRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subfamily; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily
        class SuccessfulRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite> pending_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily> subfamily;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite> successful_rewrite;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite : public ydk::Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

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
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2LOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite : public ydk::Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

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
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2LOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily : public ydk::Entity
{
    public:
        Subfamily();
        ~Subfamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        class LspFec; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec> lsp_fec;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

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
        class FecDestinationInfo; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite : public ydk::Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

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
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2LOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath : public ydk::Entity
{
    public:
        S2LsrPath();
        ~S2LsrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_primary; //type: boolean
        ydk::YLeaf is_backup; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf backup_path_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        class OutgoingLabelsStack; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack> > outgoing_labels_stack;
        
}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack : public ydk::Entity
{
    public:
        OutgoingLabelsStack();
        ~OutgoingLabelsStack();

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

}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack


class MplsTe::P2Mp::TunnelRewrites : public ydk::Entity
{
    public:
        TunnelRewrites();
        ~TunnelRewrites();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite> > tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite : public ydk::Entity
{
    public:
        TunnelRewrite();
        ~TunnelRewrite();

        bool has_data() const override;
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
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf tunnel_signal_name; //type: string
        ydk::YLeaf is_segment_routing; //type: boolean
        class SuccessfulRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite> pending_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite> successful_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite : public ydk::Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

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
        class TunnelRewrite_; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

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
        class P2PTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite : public ydk::Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite : public ydk::Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

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
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2L; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite : public ydk::Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

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
        class TunnelRewrite_; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

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
        class P2PTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite : public ydk::Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite : public ydk::Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

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
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2L; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite : public ydk::Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

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
        class TunnelRewrite_; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

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
        class P2PTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite : public ydk::Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite : public ydk::Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

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
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2L; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack


class MplsTe::P2PP2MpTunnel : public ydk::Entity
{
    public:
        P2PP2MpTunnel();
        ~P2PP2MpTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRemoteBriefs; //type: MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs
        class TunnelRemotes; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes
        class NniTunnels; //type: MplsTe::P2PP2MpTunnel::NniTunnels
        class TunnelHeads; //type: MplsTe::P2PP2MpTunnel::TunnelHeads

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels> nni_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads> tunnel_heads;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs> tunnel_remote_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes> tunnel_remotes;
        
}; // MplsTe::P2PP2MpTunnel


class MplsTe::P2PP2MpTunnel::NniTunnels : public ydk::Entity
{
    public:
        NniTunnels();
        ~NniTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NniTunnel; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel> > nni_tunnel;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel : public ydk::Entity
{
    public:
        NniTunnel();
        ~NniTunnel();

        bool has_data() const override;
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
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf role_standby; //type: boolean
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf admin_state; //type: MteTunnelAdminState
        ydk::YLeaf operational_state; //type: MteTunnelOperState
        ydk::YLeaf operational_state_changes; //type: uint32
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf fail_reason; //type: MplsMteTunnelFailReason
        ydk::YLeaf destination_up_count; //type: uint32
        ydk::YLeaf destination_disabled_count; //type: uint32
        ydk::YLeaf destination_down_count; //type: uint32
        ydk::YLeaf re_opt_hold_down_timer_remaining; //type: uint32
        ydk::YLeaf bandwidth_requested; //type: uint32
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_node_protected; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf tunnel_recovering; //type: boolean
        ydk::YLeaf reroute_pending; //type: boolean
        ydk::YLeaf explicit_path_change; //type: boolean
        ydk::YLeaf path_option_change; //type: boolean
        ydk::YLeaf affinity_failure_reopt_disabled; //type: boolean
        ydk::YLeaf affinity_failure_reopt_time_remained; //type: uint32
        ydk::YLeaf affinity_failure_delayed_tear_time_remained; //type: uint32
        ydk::YLeaf invalidation_time_remained; //type: uint32
        ydk::YLeaf drop_mode; //type: boolean
        ydk::YLeaf auto_route; //type: boolean
        ydk::YLeaf forwarding_adjacency; //type: boolean
        ydk::YLeaf load_share_factor; //type: uint32
        ydk::YLeaf load_share_type; //type: MplsTeLoadshare
        ydk::YLeaf create_time; //type: uint32
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf metric_type; //type: MplsTeMetric
        ydk::YLeaf tie_breaker; //type: TePathSelectionTiebreaker
        ydk::YLeaf tiebreaker_type; //type: uint32
        ydk::YLeaf tiebreaker_qualifier; //type: MplsTeMetricQualifier
        ydk::YLeaf metric_qualifier; //type: MplsTeMetricQualifier
        ydk::YLeaf is_hop_limit_ignore; //type: boolean
        ydk::YLeaf hop_limit_ignored_reason; //type: TeHopLimitIgnore
        ydk::YLeaf outbound_frr_state; //type: MplsTeFrrState
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf pce_fail_reason; //type: MplsTePceFailReasons
        ydk::YLeaf snmp_index; //type: uint32
        ydk::YLeaf is_inter_area_tunnel; //type: boolean
        ydk::YLeaf is_auto_backup; //type: boolean
        ydk::YLeaf is_auto_pcc; //type: boolean
        ydk::YLeaf is_pce_delegated; //type: boolean
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        ydk::YLeaf xro_attribute_set_name; //type: string
        ydk::YLeaf is_passive; //type: boolean
        ydk::YLeaf passive_tunnel_name; //type: string
        ydk::YLeaf binding_label_exists; //type: boolean
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf last_hop_ifindex; //type: uint32
        ydk::YLeaf is_named; //type: boolean
        ydk::YLeaf lsp_wrap_protection_enabled; //type: boolean
        ydk::YLeaf lsp_wrap_label; //type: uint32
        ydk::YLeaf is_interface; //type: boolean
        ydk::YLeaf last_path_change; //type: uint32
        ydk::YLeaf persistent_bytes; //type: uint64
        ydk::YLeaf persistent_packets; //type: uint64
        ydk::YLeaf autoroute_announce_exclude_segment_routing; //type: boolean
        class Config; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Config
        class TunnelCurrentLsp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelCurrentLsp
        class ReoptimizedP2MpLsp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedP2MpLsp
        class TunnelStandbyLsp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp
        class ReoptimizedStandbyP2MpLsp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp
        class TunnelRestorationLsp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp
        class DelayCleanPpLsp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp
        class CleanedLsp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp
        class P2PInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo
        class History; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::History
        class PathProtection; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection
        class AutoBackup; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup
        class AutoMesh; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh
        class AutoPcc; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc
        class PceDelegation; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::PceDelegation
        class SoftPreemption; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption
        class WdmUnitunnel; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::WdmUnitunnel
        class TransportTunnelInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo
        class BfdInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo
        class OtnBidir; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir
        class Bidir; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir
        class XroAttributeSet; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet
        class TeTunnelConvergence; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence
        class FlexInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo
        class Destination; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup> auto_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh> auto_mesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc> auto_pcc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo> bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir> bidir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp> cleaned_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp> delay_clean_pp_lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination> > destination;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir> otn_bidir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo> p2p_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::PceDelegation> pce_delegation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedP2MpLsp> reoptimized_p2mp_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp> reoptimized_standby_p2mp_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence> te_tunnel_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo> transport_tunnel_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelCurrentLsp> tunnel_current_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp> tunnel_restoration_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp> tunnel_standby_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::WdmUnitunnel> wdm_unitunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet> xro_attribute_set;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup : public ydk::Entity
{
    public:
        AutoBackup();
        ~AutoBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_ls_ps; //type: uint32
        ydk::YLeaf protected_s2_ls; //type: uint32
        ydk::YLeaf sharing_families; //type: uint32
        ydk::YLeaf ab_protection_type; //type: AutoBackupProtection
        ydk::YLeaf is_using_srlg; //type: boolean
        ydk::YLeaf srlg_prot_type; //type: AutoBackupSrlgMode
        ydk::YLeaf ab_protected_interface; //type: string
        ydk::YLeaf protected_address; //type: string
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf is_unused_removal_timer_running; //type: boolean
        ydk::YLeaf unused_removal_remaining_time; //type: uint32
        class WeightedSrlgInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo
        class Iep; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep> > iep;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo> weighted_srlg_info;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep : public ydk::Entity
{
    public:
        Iep();
        ~Iep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_id; //type: uint32
        class IepHop; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop> > iep_hop;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop : public ydk::Entity
{
    public:
        IepHop();
        ~IepHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_index; //type: uint32
        ydk::YLeaf iep_hop_type; //type: MplsTeIepHop
        ydk::YLeaf iep_hop_address; //type: string

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo : public ydk::Entity
{
    public:
        WeightedSrlgInfo();
        ~WeightedSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectedInterfaceSrlg; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg
        class WeightedSrlgHop; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg> > protected_interface_srlg;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop> > weighted_srlg_hop;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg : public ydk::Entity
{
    public:
        ProtectedInterfaceSrlg();
        ~ProtectedInterfaceSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg; //type: uint32
        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop : public ydk::Entity
{
    public:
        WeightedSrlgHop();
        ~WeightedSrlgHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string
        ydk::YLeaf aggregate_admin_weight; //type: uint64
        class CommonSrlg; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg> > common_srlg;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg : public ydk::Entity
{
    public:
        CommonSrlg();
        ~CommonSrlg();

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

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh : public ydk::Entity
{
    public:
        AutoMesh();
        ~AutoMesh();

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
        ydk::YLeaf tunnel_destination_list_name; //type: string
        ydk::YLeaf is_tunnel_unused_timer_running; //type: boolean
        ydk::YLeaf remaining_unused_time; //type: uint32
        ydk::YLeaf mesh_group_type; //type: TeMeshgroup

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc : public ydk::Entity
{
    public:
        AutoPcc();
        ~AutoPcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf creator_address; //type: string
        ydk::YLeaf has_creator_id; //type: boolean
        ydk::YLeaf creator_id; //type: string
        ydk::YLeaf plspid; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo : public ydk::Entity
{
    public:
        BfdInfo();
        ~BfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_session_up; //type: boolean
        ydk::YLeaf session_up_time; //type: uint32
        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf minimum_session_up_interval; //type: uint32
        ydk::YLeaf maximum_session_up_interval; //type: uint32
        class EventCounters; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters
        class DampeningInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo> > dampening_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters> event_counters;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo : public ydk::Entity
{
    public:
        DampeningInfo();
        ~DampeningInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf hold_down_time; //type: uint32
        ydk::YLeaf remained_time; //type: uint32
        ydk::YLeaf backoff_count; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_3_ */

