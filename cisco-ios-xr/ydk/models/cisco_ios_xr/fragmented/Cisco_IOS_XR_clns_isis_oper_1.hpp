#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_1_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount : public ydk::Entity
{
    public:
        PseudoNodeLspCount();
        ~PseudoNodeLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount : public ydk::Entity
{
    public:
        RouteLspCount();
        ~RouteLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats : public ydk::Entity
{
    public:
        Fragment0LspStats();
        ~Fragment0LspStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeCounters; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters
        class PerTopologyCounter; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters> node_counters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter> > per_topology_counter;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters : public ydk::Entity
{
    public:
        NodeCounters();
        ~NodeCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount
        class PseudoNodeLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount> pseudo_node_lsp_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount> route_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount : public ydk::Entity
{
    public:
        PseudoNodeLspCount();
        ~PseudoNodeLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount : public ydk::Entity
{
    public:
        RouteLspCount();
        ~RouteLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter : public ydk::Entity
{
    public:
        PerTopologyCounter();
        ~PerTopologyCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id
        class OverloadedLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount
        class AttachedLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount> attached_lsp_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id> id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount> overloaded_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount : public ydk::Entity
{
    public:
        AttachedLspCount();
        ~AttachedLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount : public ydk::Entity
{
    public:
        OverloadedLspCount();
        ~OverloadedLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount


class Isis::Instances::Instance::Levels::Level::Lsps : public ydk::Entity
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

        class Lsp; //type: Isis::Instances::Instance::Levels::Level::Lsps::Lsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps::Lsp> > lsp;
        
}; // Isis::Instances::Instance::Levels::Level::Lsps


class Isis::Instances::Instance::Levels::Level::Lsps::Lsp : public ydk::Entity
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

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf lsp_body; //type: string
        class LspHeaderData; //type: Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData> lsp_header_data;
        
}; // Isis::Instances::Instance::Levels::Level::Lsps::Lsp


class Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData : public ydk::Entity
{
    public:
        LspHeaderData();
        ~LspHeaderData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf local_lsp_flag; //type: boolean
        ydk::YLeaf lsp_active_flag; //type: boolean
        ydk::YLeaf lsp_holdtime; //type: uint16
        ydk::YLeaf lsp_sequence_number; //type: uint32
        ydk::YLeaf lsp_checksum; //type: uint16
        ydk::YLeaf lsp_partition_repair_supported_flag; //type: boolean
        ydk::YLeaf lsp_attached_flag; //type: boolean
        ydk::YLeaf lsp_overloaded_flag; //type: boolean
        ydk::YLeaf lsp_nonv1a_flag; //type: uint16
        ydk::YLeaf lsp_level; //type: IsisLevels
        ydk::YLeaf lsp_length; //type: uint16
        ydk::YLeaf max_area_addresses; //type: uint8
        ydk::YLeaf id_length; //type: uint8
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf version2; //type: uint8

}; // Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData


class Isis::Instances::Instance::MeshGroups : public ydk::Entity
{
    public:
        MeshGroups();
        ~MeshGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MeshGroupConfiguredInterfaceList; //type: Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList> mesh_group_configured_interface_list;
        
}; // Isis::Instances::Instance::MeshGroups


class Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList : public ydk::Entity
{
    public:
        MeshGroupConfiguredInterfaceList();
        ~MeshGroupConfiguredInterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisShMeshEntry; //type: Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry> > isis_sh_mesh_entry;
        
}; // Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList


class Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry : public ydk::Entity
{
    public:
        IsisShMeshEntry();
        ~IsisShMeshEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mesh_group_interface; //type: string
        ydk::YLeaf mesh_group_number; //type: uint32

}; // Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry


class Isis::Instances::Instance::NeighborSummaries : public ydk::Entity
{
    public:
        NeighborSummaries();
        ~NeighborSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborSummary; //type: Isis::Instances::Instance::NeighborSummaries::NeighborSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary> > neighbor_summary;
        
}; // Isis::Instances::Instance::NeighborSummaries


class Isis::Instances::Instance::NeighborSummaries::NeighborSummary : public ydk::Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

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
        class Level1Neighbors; //type: Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors
        class Level2Neighbors; //type: Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors
        class Level12Neigbors; //type: Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors> level12_neigbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors> level1_neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors> level2_neighbors;
        
}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary


class Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors : public ydk::Entity
{
    public:
        Level12Neigbors();
        ~Level12Neigbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_up_count; //type: uint32
        ydk::YLeaf neighbor_init_count; //type: uint32
        ydk::YLeaf neighbor_down_count; //type: uint32

}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors


class Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors : public ydk::Entity
{
    public:
        Level1Neighbors();
        ~Level1Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_up_count; //type: uint32
        ydk::YLeaf neighbor_init_count; //type: uint32
        ydk::YLeaf neighbor_down_count; //type: uint32

}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors


class Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors : public ydk::Entity
{
    public:
        Level2Neighbors();
        ~Level2Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_up_count; //type: uint32
        ydk::YLeaf neighbor_init_count; //type: uint32
        ydk::YLeaf neighbor_down_count; //type: uint32

}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors


class Isis::Instances::Instance::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Isis::Instances::Instance::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor> > neighbor;
        
}; // Isis::Instances::Instance::Neighbors


class Isis::Instances::Instance::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf local_interface; //type: string
        ydk::YLeaf neighbor_state; //type: IsisAdjState
        ydk::YLeaf neighbor_circuit_type; //type: IsisLevels
        ydk::YLeaf neighbor_ietf_nsf_capable_flag; //type: uint32
        ydk::YLeaf neighbor_media_type; //type: IsisMediaClass
        ydk::YLeaf neighbor_holdtime; //type: uint32
        ydk::YLeaf neighbor_uptime_valid_flag; //type: boolean
        ydk::YLeaf neighbor_uptime; //type: uint32
        ydk::YLeaf nsr_standby; //type: boolean
        class NeighborActiveAreaAddress; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress
        class TopologiesSupported; //type: Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported
        class NeighborPerAddressFamilyData; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress> > neighbor_active_area_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData> > neighbor_per_address_family_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported> > topologies_supported;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress : public ydk::Entity
{
    public:
        NeighborActiveAreaAddress();
        ~NeighborActiveAreaAddress();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData : public ydk::Entity
{
    public:
        NeighborPerAddressFamilyData();
        ~NeighborPerAddressFamilyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        class Ipv4; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4
        class Ipv6; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6> ipv6;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4 : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        class AdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid
        class InterfaceAddress; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress
        class UnderlyingAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid
        class UnderlyingInterface; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid> adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress> > interface_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid> non_frr_adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid> > underlying_adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface> > underlying_interface;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid : public ydk::Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid : public ydk::Entity
{
    public:
        UnderlyingAdjacencySid();
        ~UnderlyingAdjacencySid();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface : public ydk::Entity
{
    public:
        UnderlyingInterface();
        ~UnderlyingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6 : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        class AdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid
        class InterfaceAddress; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress
        class UnderlyingAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid
        class UnderlyingInterface; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid> adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress> > interface_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid> non_frr_adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid> > underlying_adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface> > underlying_interface;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid : public ydk::Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid : public ydk::Entity
{
    public:
        UnderlyingAdjacencySid();
        ~UnderlyingAdjacencySid();

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

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface : public ydk::Entity
{
    public:
        UnderlyingInterface();
        ~UnderlyingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface


class Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported : public ydk::Entity
{
    public:
        TopologiesSupported();
        ~TopologiesSupported();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported


class Isis::Instances::Instance::NsrStatistics : public ydk::Entity
{
    public:
        NsrStatistics();
        ~NsrStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_vm_state; //type: uint16
        class IsisNsrStatsData; //type: Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData> isis_nsr_stats_data;
        
}; // Isis::Instances::Instance::NsrStatistics


class Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData : public ydk::Entity
{
    public:
        IsisNsrStatsData();
        ~IsisNsrStatsData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Self; //type: Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self
        class Peer; //type: Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer> > peer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self> self;
        
}; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData


class Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer : public ydk::Entity
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

        ydk::YLeaf no_of_l1_lsp; //type: uint32
        ydk::YLeaf no_of_l2_lsp; //type: uint32
        ydk::YLeaf no_of_l1_adj; //type: uint16
        ydk::YLeaf no_of_l2_adj; //type: uint16
        ydk::YLeaf no_of_live_interface; //type: uint16
        ydk::YLeaf no_of_ptp_interface; //type: uint16
        ydk::YLeaf no_of_lan_interface; //type: uint16
        ydk::YLeaf no_of_loopback_interface; //type: uint16
        ydk::YLeaf no_of_te_tunnels; //type: uint16
        ydk::YLeaf no_of_te_links; //type: uint16
        ydk::YLeaf no_of_ipv4_routes; //type: uint32
        ydk::YLeaf no_of_ipv6_routes; //type: uint32
        ydk::YLeaf seqnum; //type: uint32

}; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer


class Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self : public ydk::Entity
{
    public:
        Self();
        ~Self();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_of_l1_lsp; //type: uint32
        ydk::YLeaf no_of_l2_lsp; //type: uint32
        ydk::YLeaf no_of_l1_adj; //type: uint16
        ydk::YLeaf no_of_l2_adj; //type: uint16
        ydk::YLeaf no_of_live_interface; //type: uint16
        ydk::YLeaf no_of_ptp_interface; //type: uint16
        ydk::YLeaf no_of_lan_interface; //type: uint16
        ydk::YLeaf no_of_loopback_interface; //type: uint16
        ydk::YLeaf no_of_te_tunnels; //type: uint16
        ydk::YLeaf no_of_te_links; //type: uint16
        ydk::YLeaf no_of_ipv4_routes; //type: uint32
        ydk::YLeaf no_of_ipv6_routes; //type: uint32
        ydk::YLeaf seqnum; //type: uint32

}; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self


class Isis::Instances::Instance::NsrStatus : public ydk::Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_vm_state; //type: uint16
        class IsisNsrPeer; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer
        class IsisNsrInfra; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra> isis_nsr_infra;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer> isis_nsr_peer;
        
}; // Isis::Instances::Instance::NsrStatus


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra : public ydk::Entity
{
    public:
        IsisNsrInfra();
        ~IsisNsrInfra();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gen; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen
        class Pm; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm
        class Ds; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds
        class Te; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te
        class Ncd; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd
        class NiiIdb; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds> ds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen> gen;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd> > ncd;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb> > nii_idb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm> pm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te> te;
        
}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds : public ydk::Entity
{
    public:
        Ds();
        ~Ds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conn; //type: uint8
        ydk::YLeaf conn_cb; //type: uint8
        ydk::YLeaf pub; //type: uint8
        ydk::YLeaf pub_cb; //type: uint8
        ydk::YLeaf reg; //type: uint8
        ydk::YLeaf reg_cb; //type: uint8
        ydk::YLeaf unreg; //type: uint8
        ydk::YLeaf unreg_cb; //type: uint8
        ydk::YLeaf disconn_cb; //type: uint8
        ydk::YLeaf notify_cb; //type: uint8
        ydk::YLeaf notify_peer_xr; //type: string
        ydk::YLeaf del_cb; //type: uint8
        ydk::YLeaf remove_srv; //type: uint8
        ydk::YLeaf conn_status; //type: boolean
        class ConnTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs
        class ConnCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs
        class PubTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs
        class PubCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs
        class RegTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs
        class RegCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs
        class UnregTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs
        class UnregCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs
        class DisconnCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs
        class NotifyCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs
        class DelCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs
        class RemoveSrvTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs
        class ConnStatusTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs
        class NotifyPeer; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs> conn_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs> conn_status_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs> conn_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs> del_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs> disconn_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs> notify_cb_ts;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer> > notify_peer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs> pub_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs> pub_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs> reg_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs> reg_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs> remove_srv_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs> unreg_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs> unreg_ts;
        
}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs : public ydk::Entity
{
    public:
        ConnCbTs();
        ~ConnCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs : public ydk::Entity
{
    public:
        ConnStatusTs();
        ~ConnStatusTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs : public ydk::Entity
{
    public:
        ConnTs();
        ~ConnTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs : public ydk::Entity
{
    public:
        DelCbTs();
        ~DelCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs : public ydk::Entity
{
    public:
        DisconnCbTs();
        ~DisconnCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs : public ydk::Entity
{
    public:
        NotifyCbTs();
        ~NotifyCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer : public ydk::Entity
{
    public:
        NotifyPeer();
        ~NotifyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs : public ydk::Entity
{
    public:
        PubCbTs();
        ~PubCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs : public ydk::Entity
{
    public:
        PubTs();
        ~PubTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs : public ydk::Entity
{
    public:
        RegCbTs();
        ~RegCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs : public ydk::Entity
{
    public:
        RegTs();
        ~RegTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs : public ydk::Entity
{
    public:
        RemoveSrvTs();
        ~RemoveSrvTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs : public ydk::Entity
{
    public:
        UnregCbTs();
        ~UnregCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs : public ydk::Entity
{
    public:
        UnregTs();
        ~UnregTs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen : public ydk::Entity
{
    public:
        Gen();
        ~Gen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf my_nodeid; //type: uint32
        ydk::YLeaf my_process_id; //type: uint32
        ydk::YLeaf pm_issu_role; //type: uint8
        ydk::YLeaf pm_ha_role; //type: uint8
        ydk::YLeaf sysmgr_ha_role; //type: uint8
        ydk::YLeaf nsr_send_ready; //type: uint8
        ydk::YLeaf nsr_send_unready; //type: uint8
        ydk::YLeaf nsr_send_err; //type: uint32
        ydk::YLeaf nsr_recv_err; //type: uint32
        ydk::YLeaf retry_flag; //type: uint32
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_configured; //type: boolean
        ydk::YLeaf nsf_configured; //type: boolean
        ydk::YLeaf failover; //type: boolean
        ydk::YLeaf lanid_req_needed; //type: boolean

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd : public ydk::Entity
{
    public:
        Ncd();
        ~Ncd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vm_idx; //type: uint8
        ydk::YLeaf conn_up; //type: boolean
        ydk::YLeaf endp_hdl; //type: uint8
        ydk::YLeaf chksum; //type: uint16
        ydk::YLeaf send_seqnum; //type: uint32
        ydk::YLeaf recv_cnt; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb : public ydk::Entity
{
    public:
        NiiIdb();
        ~NiiIdb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exist; //type: boolean
        ydk::YLeaf brought_up; //type: boolean
        ydk::YLeaf retry_timer; //type: boolean
        ydk::YLeaf running; //type: boolean
        ydk::YLeaf has_adj; //type: boolean

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm : public ydk::Entity
{
    public:
        Pm();
        ~Pm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reg; //type: uint8
        ydk::YLeaf conn_cb; //type: uint8
        ydk::YLeaf disconn_cb; //type: uint8
        ydk::YLeaf conn_status; //type: boolean

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te : public ydk::Entity
{
    public:
        Te();
        ~Te();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: uint8
        ydk::YLeaf conn_up; //type: uint8
        ydk::YLeaf te_link_cb; //type: uint8
        ydk::YLeaf te_tunnel_cb; //type: uint8
        ydk::YLeaf adv_sync_data; //type: uint8
        ydk::YLeaf link_purge_time_on; //type: uint8
        ydk::YLeaf tunnel_purge_time_on; //type: uint8
        ydk::YLeaf has_info_from_te; //type: uint8

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer : public ydk::Entity
{
    public:
        IsisNsrPeer();
        ~IsisNsrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FullSyncAchieved; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved
        class ManSyncCount; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount
        class NsrChgCount; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount
        class Uptime; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime
        class UptimeValid; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved> > full_sync_achieved;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount> > man_sync_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount> > nsr_chg_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime> > uptime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid> > uptime_valid;
        
}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved : public ydk::Entity
{
    public:
        FullSyncAchieved();
        ~FullSyncAchieved();

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

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount : public ydk::Entity
{
    public:
        ManSyncCount();
        ~ManSyncCount();

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

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount : public ydk::Entity
{
    public:
        NsrChgCount();
        ~NsrChgCount();

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

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime : public ydk::Entity
{
    public:
        Uptime();
        ~Uptime();

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

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid : public ydk::Entity
{
    public:
        UptimeValid();
        ~UptimeValid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid


class Isis::Instances::Instance::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsap_system_id; //type: string
        ydk::YLeaf valid_nsap_system_id; //type: boolean
        ydk::YLeaf instance_id; //type: uint16
        ydk::YLeaf running_levels; //type: IsisLevels
        ydk::YLeaf configured_nsf_flavor; //type: IsisNsfFlavor
        ydk::YLeaf last_restart_nsf_flavor; //type: IsisNsfFlavor
        ydk::YLeaf last_restart_status; //type: IsisStartupStatus
        ydk::YLeaf te_connection; //type: IsisUp
        ydk::YLeaf remaining_time_for_next_nsf_restart; //type: uint32
        ydk::YLeaf adj_form_count; //type: uint32
        ydk::YLeaf adj_full_count; //type: uint32
        ydk::YLeaf adj_stagger_enabled; //type: boolean
        ydk::YLeaf adj_stagger_init; //type: uint32
        ydk::YLeaf adj_stagger_max; //type: uint32
        ydk::YLeaf srgb_allocated; //type: boolean
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_end; //type: uint32
        ydk::YLeaf srlb_allocated; //type: boolean
        ydk::YLeaf srlb_start; //type: uint32
        ydk::YLeaf srlb_end; //type: uint32
        class ManualAreaAddress; //type: Isis::Instances::Instance::Protocol::ManualAreaAddress
        class ActiveAreaAddress; //type: Isis::Instances::Instance::Protocol::ActiveAreaAddress
        class PerTopoData; //type: Isis::Instances::Instance::Protocol::PerTopoData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::ActiveAreaAddress> > active_area_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::ManualAreaAddress> > manual_area_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData> > per_topo_data;
        
}; // Isis::Instances::Instance::Protocol


class Isis::Instances::Instance::Protocol::ActiveAreaAddress : public ydk::Entity
{
    public:
        ActiveAreaAddress();
        ~ActiveAreaAddress();

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

}; // Isis::Instances::Instance::Protocol::ActiveAreaAddress


class Isis::Instances::Instance::Protocol::ManualAreaAddress : public ydk::Entity
{
    public:
        ManualAreaAddress();
        ~ManualAreaAddress();

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

}; // Isis::Instances::Instance::Protocol::ManualAreaAddress


class Isis::Instances::Instance::Protocol::PerTopoData : public ydk::Entity
{
    public:
        PerTopoData();
        ~PerTopoData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_admin_distance; //type: uint32
        ydk::YLeaf advertise_passive_only; //type: boolean
        ydk::YLeaf wait_redist_complete; //type: boolean
        class Id; //type: Isis::Instances::Instance::Protocol::PerTopoData::Id
        class RedistProtocolsList; //type: Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList
        class PerAreaData; //type: Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::Id> id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData> > per_area_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList> redist_protocols_list;
        
}; // Isis::Instances::Instance::Protocol::PerTopoData


class Isis::Instances::Instance::Protocol::PerTopoData::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Protocol::PerTopoData::Id


class Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData : public ydk::Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        ydk::YLeaf uses_default_link_topo_flag; //type: boolean
        ydk::YLeaf generated_metric_style; //type: IsisMetricStyle
        ydk::YLeaf accepted_metric_style; //type: IsisMetricStyle
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ispf_state; //type: IsisEnabled
        ydk::YLeaf te_enabled; //type: boolean
        ydk::YLeaf uloop_avoidance_type; //type: IsisUloopAvoidance
        ydk::YLeaf rib_update_delay; //type: uint32
        ydk::YLeaf sr_uloop_is_active; //type: boolean
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf sr_uloop_event; //type: IsisUloopEvent
        ydk::YLeaf sr_uloop_near_node_id; //type: string
        ydk::YLeaf sr_uloop_far_node_id; //type: string

}; // Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData


class Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList : public ydk::Entity
{
    public:
        RedistProtocolsList();
        ~RedistProtocolsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisShRedistEntry; //type: Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry> > isis_sh_redist_entry;
        
}; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList


class Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry : public ydk::Entity
{
    public:
        IsisShRedistEntry();
        ~IsisShRedistEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolDetails; //type: Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails> protocol_details;
        
}; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry


class Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails : public ydk::Entity
{
    public:
        ProtocolDetails();
        ~ProtocolDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: IsisRedistProto
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf ospfv3_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf application_name; //type: string

}; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails


class Isis::Instances::Instance::Srms : public ydk::Entity
{
    public:
        Srms();
        ~Srms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Isis::Instances::Instance::Srms::Policy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy> policy;
        
}; // Isis::Instances::Instance::Srms


class Isis::Instances::Instance::Srms::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyIpv4; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4
        class PolicyIpv6; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4> policy_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6> policy_ipv6;
        
}; // Isis::Instances::Instance::Srms::Policy


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4 : public ydk::Entity
{
    public:
        PolicyIpv4();
        ~PolicyIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyIpv4Active; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active
        class PolicyIpv4Backup; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active> policy_ipv4_active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup> policy_ipv4_backup;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active : public ydk::Entity
{
    public:
        PolicyIpv4Active();
        ~PolicyIpv4Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMi; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi> > policy_mi;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr> addr;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup : public ydk::Entity
{
    public:
        PolicyIpv4Backup();
        ~PolicyIpv4Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMi; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi> > policy_mi;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr> addr;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6 : public ydk::Entity
{
    public:
        PolicyIpv6();
        ~PolicyIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyIpv6Backup; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup
        class PolicyIpv6Active; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active> policy_ipv6_active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup> policy_ipv6_backup;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active : public ydk::Entity
{
    public:
        PolicyIpv6Active();
        ~PolicyIpv6Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMi; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi> > policy_mi;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr> addr;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup : public ydk::Entity
{
    public:
        PolicyIpv6Backup();
        ~PolicyIpv6Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMi; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi> > policy_mi;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr> addr;
        
}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr


class Isis::Instances::Instance::StatisticsGlobal : public ydk::Entity
{
    public:
        StatisticsGlobal();
        ~StatisticsGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics
        class PerAreaData; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData> > per_area_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics> statistics;
        
}; // Isis::Instances::Instance::StatisticsGlobal


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData : public ydk::Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics
        class PerTopologyData; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData> > per_topology_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics> statistics;
        
}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData : public ydk::Entity
{
    public:
        PerTopologyData();
        ~PerTopologyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id
        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id> id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics> statistics;
        
}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics : public ydk::Entity
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

        ydk::YLeaf spf_run_count; //type: uint32
        ydk::YLeaf ispf_run_count; //type: uint32
        ydk::YLeaf nhc_run_count; //type: uint32
        ydk::YLeaf prc_run_count; //type: uint32
        ydk::YLeaf periodic_run_count; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics : public ydk::Entity
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

        ydk::YLeaf system_lsp_build_count; //type: uint32
        ydk::YLeaf system_lsp_refresh_count; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics


class Isis::Instances::Instance::StatisticsGlobal::Statistics : public ydk::Entity
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

        ydk::YLeaf fast_psnp_lookup_count; //type: uint32
        ydk::YLeaf fast_psnp_lookup_hit_count; //type: uint32
        ydk::YLeaf fast_csnp_lookup_count; //type: uint32
        ydk::YLeaf fast_csnp_lookup_hit_count; //type: uint32
        ydk::YLeaf fast_csnp_cache_update_count; //type: uint32
        ydk::YLeaf zero_holdtime_lsp_count; //type: uint32
        ydk::YLeaf invalid_checksum_lsp_count; //type: uint32
        ydk::YLeaf iih_dropped_count; //type: uint32
        ydk::YLeaf lsp_dropped_count; //type: uint32
        ydk::YLeaf snp_dropped_count; //type: uint32
        ydk::YLeaf maximum_iih_queue_length; //type: uint32
        ydk::YLeaf maximum_pdu_queue_length; //type: uint32
        ydk::YLeaf pdu_queue_length; //type: uint32
        ydk::YLeaf avg_hello_recv_rate; //type: uint32
        ydk::YLeaf avg_csnp_recv_rate; //type: uint32
        ydk::YLeaf avg_psnp_recv_rate; //type: uint32
        ydk::YLeaf avg_lsp_recv_rate; //type: uint32
        ydk::YLeaf avg_hello_send_rate; //type: uint32
        ydk::YLeaf avg_csnp_send_rate; //type: uint32
        ydk::YLeaf avg_psnp_send_rate; //type: uint32
        ydk::YLeaf avg_lsp_send_rate; //type: uint32
        class AvgHelloProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime
        class AvgCsnpProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime
        class AvgPsnpProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime
        class AvgLspProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime
        class AvgHelloTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime
        class AvgCsnpTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime
        class AvgPsnpTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime
        class AvgLspTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime> avg_csnp_process_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime> avg_csnp_transmit_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime> avg_hello_process_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime> avg_hello_transmit_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime> avg_lsp_process_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime> avg_lsp_transmit_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime> avg_psnp_process_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime> avg_psnp_transmit_time;
        
}; // Isis::Instances::Instance::StatisticsGlobal::Statistics


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime : public ydk::Entity
{
    public:
        AvgCsnpProcessTime();
        ~AvgCsnpProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime : public ydk::Entity
{
    public:
        AvgCsnpTransmitTime();
        ~AvgCsnpTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime : public ydk::Entity
{
    public:
        AvgHelloProcessTime();
        ~AvgHelloProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime : public ydk::Entity
{
    public:
        AvgHelloTransmitTime();
        ~AvgHelloTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime : public ydk::Entity
{
    public:
        AvgLspProcessTime();
        ~AvgLspProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime : public ydk::Entity
{
    public:
        AvgLspTransmitTime();
        ~AvgLspTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime : public ydk::Entity
{
    public:
        AvgPsnpProcessTime();
        ~AvgPsnpProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime : public ydk::Entity
{
    public:
        AvgPsnpTransmitTime();
        ~AvgPsnpTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime


class Isis::Instances::Instance::Topologies : public ydk::Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topology; //type: Isis::Instances::Instance::Topologies::Topology

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology> > topology;
        
}; // Isis::Instances::Instance::Topologies


class Isis::Instances::Instance::Topologies::Topology : public ydk::Entity
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

        ydk::YLeaf af_name; //type: IsisAddressFamily
        ydk::YLeaf saf_name; //type: IsisSubAddressFamily
        ydk::YLeaf topology_name; //type: string
        class FrrSummary; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary
        class TopologyLevels; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels
        class Ipv6Routes; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes
        class Ipv6FrrBackups; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups
        class Ipv4FrrBackups; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups
        class Ipv4Routes; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary> frr_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes> ipv4_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups> ipv4frr_backups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes> ipv6_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups> ipv6frr_backups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels> topology_levels;
        
}; // Isis::Instances::Instance::Topologies::Topology


class Isis::Instances::Instance::Topologies::Topology::FrrSummary : public ydk::Entity
{
    public:
        FrrSummary();
        ~FrrSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level1Prefixes; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes
        class Level2Prefixes; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes
        class UnreachablePrefixes; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes> level1_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes> level2_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes> unreachable_prefixes;
        
}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes : public ydk::Entity
{
    public:
        Level1Prefixes();
        ~Level1Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllPathsProtected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected
        class SomePathsProtected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected
        class Unprotected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected> all_paths_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected> some_paths_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected> unprotected;
        
}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected : public ydk::Entity
{
    public:
        AllPathsProtected();
        ~AllPathsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected : public ydk::Entity
{
    public:
        SomePathsProtected();
        ~SomePathsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected : public ydk::Entity
{
    public:
        Unprotected();
        ~Unprotected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes : public ydk::Entity
{
    public:
        Level2Prefixes();
        ~Level2Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllPathsProtected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected
        class SomePathsProtected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected
        class Unprotected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected> all_paths_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected> some_paths_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected> unprotected;
        
}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected : public ydk::Entity
{
    public:
        AllPathsProtected();
        ~AllPathsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected : public ydk::Entity
{
    public:
        SomePathsProtected();
        ~SomePathsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected : public ydk::Entity
{
    public:
        Unprotected();
        ~Unprotected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes : public ydk::Entity
{
    public:
        UnreachablePrefixes();
        ~UnreachablePrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups : public ydk::Entity
{
    public:
        Ipv4FrrBackups();
        ~Ipv4FrrBackups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup> > ipv4frr_backup;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup : public ydk::Entity
{
    public:
        Ipv4FrrBackup();
        ~Ipv4FrrBackup();

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
        ydk::YLeaf prefix_length; //type: uint32
        class ConnectedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus
        class RedistributedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus
        class NativeStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus
        class PerLevelAdvertisingDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus> connected_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus> native_status;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail> > per_level_advertising_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus> redistributed_status;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus : public ydk::Entity
{
    public:
        ConnectedStatus();
        ~ConnectedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class ConnectedDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails> connected_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails : public ydk::Entity
{
    public:
        ConnectedDetails();
        ~ConnectedDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface> > interface;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface : public ydk::Entity
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

        ydk::YLeaf entry; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus : public ydk::Entity
{
    public:
        NativeStatus();
        ~NativeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class NativeDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails> native_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails : public ydk::Entity
{
    public:
        NativeDetails();
        ~NativeDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: IsisPrefixPriority
        class Primary; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary
        class Backup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup> > backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary> primary;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: IsisPrefixOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf multicast_metric; //type: uint32
        ydk::YLeaf is_external_metric; //type: boolean
        ydk::YLeaf administrative_distance; //type: uint16
        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths> > paths;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source> > source;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath : public ydk::Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit> > uloop_explicit;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry> > segment_routing_sid_value_entry;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_1_ */

