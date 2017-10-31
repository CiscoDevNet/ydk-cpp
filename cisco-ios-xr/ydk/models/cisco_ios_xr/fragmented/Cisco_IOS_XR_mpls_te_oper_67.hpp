#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_67_
#define _CISCO_IOS_XR_MPLS_TE_OPER_67_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::IgpAreas : public ydk::Entity
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

        class IgpArea; //type: MplsTeStandby::IgpAreas::IgpArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea> > igp_area;
        
}; // MplsTeStandby::IgpAreas


class MplsTeStandby::IgpAreas::IgpArea : public ydk::Entity
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
        class SecondaryRouterId; //type: MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId
        class Area; //type: MplsTeStandby::IgpAreas::IgpArea::Area

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId> > secondary_router_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea::Area> > area;
        
}; // MplsTeStandby::IgpAreas::IgpArea


class MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId : public ydk::Entity
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

}; // MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId


class MplsTeStandby::IgpAreas::IgpArea::Area : public ydk::Entity
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
        class ActiveData; //type: MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData> active_data;
        
}; // MplsTeStandby::IgpAreas::IgpArea::Area


class MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData : public ydk::Entity
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
        class AreaStatistics; //type: MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics> area_statistics;
        
}; // MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData


class MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics : public ydk::Entity
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

}; // MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics


class MplsTeStandby::WrapProtection : public ydk::Entity
{
    public:
        WrapProtection();
        ~WrapProtection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProtectedLsps; //type: MplsTeStandby::WrapProtection::ProtectedLsps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::WrapProtection::ProtectedLsps> protected_lsps;
        
}; // MplsTeStandby::WrapProtection


class MplsTeStandby::WrapProtection::ProtectedLsps : public ydk::Entity
{
    public:
        ProtectedLsps();
        ~ProtectedLsps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProtectedLsp; //type: MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp> > protected_lsp;
        
}; // MplsTeStandby::WrapProtection::ProtectedLsps


class MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp : public ydk::Entity
{
    public:
        ProtectedLsp();
        ~ProtectedLsp();

        bool has_data() const override;
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
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf session_type; //type: Ctype
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf tunnel_id_xr; //type: uint16
        ydk::YLeaf extended_tunnel_id_xr; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_instance; //type: uint32
        ydk::YLeaf lsp_wrap_protection_enable; //type: boolean
        ydk::YLeaf lsp_wrap_protection_label; //type: uint32
        ydk::YLeaf reverse_egress_interface; //type: string
        ydk::YLeaf reverse_lsp_label; //type: uint32
        ydk::YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapState
        ydk::YLeaf sub_group_original_id; //type: string
        ydk::YLeaf sub_group_id_xr; //type: uint16
        ydk::YLeaf p2mp_id_xr; //type: uint32

}; // MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths> destination_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::ConfiguredSrlgs> configured_srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs> srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels> path_tunnels;
        
}; // MplsTeStandby::Topology


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters> head_signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters> remote_signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings> signallings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::SignallingSummary> signalling_summary;
        
}; // MplsTeStandby::SignallingCounters


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic> > destination_statistic;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic> > s2l_statistic;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic> > s2l_statistic;
        
}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif> te_signalling_filter_vif;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp> te_signalling_filter_lsp;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic> > destination_statistic;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic> > s2l_statistic;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic> > s2l_statistic;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp


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


class MplsTeStandby::DiffServTeClasses : public ydk::Entity
{
    public:
        DiffServTeClasses();
        ~DiffServTeClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TeClass; //type: MplsTeStandby::DiffServTeClasses::TeClass

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::DiffServTeClasses::TeClass> > te_class;
        
}; // MplsTeStandby::DiffServTeClasses


class MplsTeStandby::DiffServTeClasses::TeClass : public ydk::Entity
{
    public:
        TeClass();
        ~TeClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf class_number; //type: uint8
        ydk::YLeaf class_type; //type: uint8
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf class_status; //type: MplsTeDsteClassStatus

}; // MplsTeStandby::DiffServTeClasses::TeClass


class MplsTeStandby::Issu : public ydk::Entity
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

        class Status; //type: MplsTeStandby::Issu::Status
        class Detail; //type: MplsTeStandby::Issu::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status> status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail> detail;
        
}; // MplsTeStandby::Issu


class MplsTeStandby::Issu::Status : public ydk::Entity
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
        class SyncStatusInformation; //type: MplsTeStandby::Issu::Status::SyncStatusInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation> sync_status_information;
        
}; // MplsTeStandby::Issu::Status


class MplsTeStandby::Issu::Status::SyncStatusInformation : public ydk::Entity
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
        class SlaveSyncInformation; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
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
        class Idt; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
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

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
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

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
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

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
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

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
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

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
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

        class Idt; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
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

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
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

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
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

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Issu::Detail : public ydk::Entity
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
        class SyncStatusInformation; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation> sync_status_information;
        
}; // MplsTeStandby::Issu::Detail


class MplsTeStandby::Issu::Detail::SyncStatusInformation : public ydk::Entity
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
        class SlaveSyncInformation; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        
}; // MplsTeStandby::Issu::Detail::SyncStatusInformation


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
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
        class Idt; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        
}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
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

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
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

}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
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

}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
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

}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
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

}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
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

        class Idt; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
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

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
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

}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
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

}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::AutoRouteDestinationEntries : public ydk::Entity
{
    public:
        AutoRouteDestinationEntries();
        ~AutoRouteDestinationEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AutoRouteDestinationEntry; //type: MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry> > auto_route_destination_entry;
        
}; // MplsTeStandby::AutoRouteDestinationEntries


class MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry : public ydk::Entity
{
    public:
        AutoRouteDestinationEntry();
        ~AutoRouteDestinationEntry();

        bool has_data() const override;
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
        ydk::YLeaf tunnel_id_xr; //type: uint16
        class TunnelAutorouteDest; //type: MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest> > tunnel_autoroute_dest;
        
}; // MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry


class MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest : public ydk::Entity
{
    public:
        TunnelAutorouteDest();
        ~TunnelAutorouteDest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf install_time; //type: uint32
        ydk::YLeaf interface_handle; //type: string

}; // MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest


class MplsTeStandby::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BackupTunnels; //type: MplsTeStandby::FastReroute::BackupTunnels
        class ProtectedInterfaces; //type: MplsTeStandby::FastReroute::ProtectedInterfaces
        class Protections; //type: MplsTeStandby::FastReroute::Protections
        class Promotion; //type: MplsTeStandby::FastReroute::Promotion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::BackupTunnels> backup_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::ProtectedInterfaces> protected_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::Protections> protections;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::Promotion> promotion;
        
}; // MplsTeStandby::FastReroute


class MplsTeStandby::FastReroute::BackupTunnels : public ydk::Entity
{
    public:
        BackupTunnels();
        ~BackupTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BackupTunnel; //type: MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel> > backup_tunnel;
        
}; // MplsTeStandby::FastReroute::BackupTunnels


class MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel : public ydk::Entity
{
    public:
        BackupTunnel();
        ~BackupTunnel();

        bool has_data() const override;
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
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf backup_tunnel_id; //type: uint32
        ydk::YLeaf backup_tunnel_name_xr; //type: string
        ydk::YLeaf backup_status; //type: MplsTeBackupStatus
        ydk::YLeaf backup_type; //type: MplsTeBackup
        ydk::YLeaf backup_usage; //type: MplsTeBackupUsage
        ydk::YLeaf prot_interface_autobackup_config; //type: AutoBackupProtection
        ydk::YLeaf prot_interface_srlg_config; //type: AutoBackupSrlgMode
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf has_attribute_set; //type: boolean
        ydk::YLeaf is_attribute_set_in_db; //type: boolean
        ydk::YLeaf recreate_timer_is_running; //type: boolean
        ydk::YLeaf recreate_remaining_time; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf general_status; //type: MplsTeTunnelState
        ydk::YLeaf connection_status; //type: MplsTeTunnelState
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf bandwidth_pool_type; //type: MplsTeBwPool
        ydk::YLeaf bandwidth_limit_type; //type: MplsTeBwLimit
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf tunnel_instance; //type: uint32
        ydk::YLeaf in_use_bandwidth; //type: uint32
        ydk::YLeaf soft_preempted_in_use_bandwidth; //type: uint32
        ydk::YLeaf ls_ps; //type: uint32
        ydk::YLeaf s2l_families; //type: uint32
        ydk::YLeaf s2_ls; //type: uint32
        ydk::YLeaf frr_active_ls_ps; //type: uint32
        ydk::YLeaf frr_active_soft_preempted_ls_ps; //type: uint32

}; // MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel


class MplsTeStandby::FastReroute::ProtectedInterfaces : public ydk::Entity
{
    public:
        ProtectedInterfaces();
        ~ProtectedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProtectedInterface; //type: MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface> > protected_interface;
        
}; // MplsTeStandby::FastReroute::ProtectedInterfaces


class MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface : public ydk::Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
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
        ydk::YLeaf backup_tunnel_name; //type: string
        ydk::YLeaf backup_tunnel_id; //type: uint32
        ydk::YLeaf backup_tunnel_name_xr; //type: string
        ydk::YLeaf backup_status; //type: MplsTeBackupStatus
        ydk::YLeaf backup_type; //type: MplsTeBackup
        ydk::YLeaf backup_usage; //type: MplsTeBackupUsage
        ydk::YLeaf prot_interface_autobackup_config; //type: AutoBackupProtection
        ydk::YLeaf prot_interface_srlg_config; //type: AutoBackupSrlgMode
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf has_attribute_set; //type: boolean
        ydk::YLeaf is_attribute_set_in_db; //type: boolean
        ydk::YLeaf recreate_timer_is_running; //type: boolean
        ydk::YLeaf recreate_remaining_time; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf general_status; //type: MplsTeTunnelState
        ydk::YLeaf connection_status; //type: MplsTeTunnelState
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf bandwidth_pool_type; //type: MplsTeBwPool
        ydk::YLeaf bandwidth_limit_type; //type: MplsTeBwLimit
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf tunnel_instance; //type: uint32
        ydk::YLeaf in_use_bandwidth; //type: uint32
        ydk::YLeaf soft_preempted_in_use_bandwidth; //type: uint32
        ydk::YLeaf ls_ps; //type: uint32
        ydk::YLeaf s2l_families; //type: uint32
        ydk::YLeaf s2_ls; //type: uint32
        ydk::YLeaf frr_active_ls_ps; //type: uint32
        ydk::YLeaf frr_active_soft_preempted_ls_ps; //type: uint32

}; // MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface


class MplsTeStandby::FastReroute::Protections : public ydk::Entity
{
    public:
        Protections();
        ~Protections();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Protection; //type: MplsTeStandby::FastReroute::Protections::Protection

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::Protections::Protection> > protection;
        
}; // MplsTeStandby::FastReroute::Protections


class MplsTeStandby::FastReroute::Protections::Protection : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf session_type; //type: int32
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf extended_tunnel_id_xr; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_instance; //type: uint32
        ydk::YLeaf role; //type: MplsTeTunnelRole
        ydk::YLeaf admin_status; //type: MplsTeTunnelState
        ydk::YLeaf operation_status; //type: MplsTeTunnelState
        ydk::YLeaf is_signalled; //type: boolean
        ydk::YLeaf is_frr_requested; //type: boolean
        ydk::YLeaf outbound_frr_state; //type: MplsTeFrrState
        ydk::YLeaf inbound_frr_state; //type: MplsTeFrrState
        ydk::YLeaf output_interface_lsp; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf frr_output_tunnel_interface; //type: string
        ydk::YLeaf frr_output_label; //type: uint32
        ydk::YLeaf backup_status; //type: MplsTeBackupStatus
        ydk::YLeaf bandwidth_pool_type; //type: MplsTeBwPool
        ydk::YLeaf bandwidth_limit_type; //type: MplsTeBwLimit
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf backup_bandwidth; //type: uint32
        ydk::YLeaf frr_output_interface; //type: string
        ydk::YLeaf backup_next_hop_address; //type: string
        ydk::YLeaf lsp_bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf sharing_type; //type: MplsTeFrrSharing
        ydk::YLeaf is_p2mp_tunnel; //type: boolean
        ydk::YLeaf sub_group_original_id; //type: string
        ydk::YLeaf sub_group_id_xr; //type: uint16
        ydk::YLeaf p2mp_id_xr; //type: uint32

}; // MplsTeStandby::FastReroute::Protections::Protection


class MplsTeStandby::FastReroute::Promotion : public ydk::Entity
{
    public:
        Promotion();
        ~Promotion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf promotion_period; //type: uint32
        ydk::YLeaf remaining_time; //type: uint32
        ydk::YLeaf is_configured; //type: boolean

}; // MplsTeStandby::FastReroute::Promotion


class MplsTeStandby::AttributeSets : public ydk::Entity
{
    public:
        AttributeSets();
        ~AttributeSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AttributeSet; //type: MplsTeStandby::AttributeSets::AttributeSet

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet> > attribute_set;
        
}; // MplsTeStandby::AttributeSets


class MplsTeStandby::AttributeSets::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf attribute_set_type; //type: MplsTeAttrSet
        ydk::YLeaf attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::AttributeSets::AttributeSet


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
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

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
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

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_signalled_name_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        class SignalledName; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
{
    public:
        SignalledName();
        ~SignalledName();

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
        ydk::YLeaf source_type; //type: TeSigNameAppend
        ydk::YLeaf protected_interface_type; //type: TeSigNameAppend
        ydk::YLeaf is_mp_addresses; //type: boolean

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
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

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
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

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_interface; //type: string

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_node_protection; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf auto_bandwidth_collect; //type: boolean
        ydk::YLeaf auto_route_announce; //type: boolean
        ydk::YLeaf soft_preemption_configured; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf is_interface_bw_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId> > mesh_group_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
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

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
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

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
{
    public:
        MeshGroupId();
        ~MeshGroupId();

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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xro; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

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
        class FecDestinationInfo; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public ydk::Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity
        class TunnelId; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public ydk::Entity
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

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_67_ */

