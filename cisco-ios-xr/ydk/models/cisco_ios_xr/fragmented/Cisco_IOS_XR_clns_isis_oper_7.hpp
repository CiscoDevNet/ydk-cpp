#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_7_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_6.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData : public ydk::Entity
{
    public:
        LanData();
        ~LanData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf memory_exhausted_iih_count; //type: uint32
        ydk::YLeaf dis_election_count; //type: uint32
        class IihCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount> iih_count;
        
}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount : public ydk::Entity
{
    public:
        IihCount();
        ~IihCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pdu_receive_count; //type: uint32
        ydk::YLeaf pdu_send_count; //type: uint32

}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount


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

        ydk::YLeaf vrf_context; //type: string
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

        ydk::YList manual_area_address;
        ydk::YList active_area_address;
        ydk::YList per_topo_data;
        
}; // Isis::Instances::Instance::Protocol


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList> redist_protocols_list;
        ydk::YList per_area_data;
        
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

        ydk::YList isis_sh_redist_entry;
        
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

        ydk::YList neighbor_summary;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors> level1_neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors> level2_neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors> level12_neigbors;
        
}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary


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


class Isis::Instances::Instance::CheckpointLsps : public ydk::Entity
{
    public:
        CheckpointLsps();
        ~CheckpointLsps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CheckpointLsp; //type: Isis::Instances::Instance::CheckpointLsps::CheckpointLsp

        ydk::YList checkpoint_lsp;
        
}; // Isis::Instances::Instance::CheckpointLsps


class Isis::Instances::Instance::CheckpointLsps::CheckpointLsp : public ydk::Entity
{
    public:
        CheckpointLsp();
        ~CheckpointLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf checkpoint_lsp_object_id; //type: uint32
        ydk::YLeaf checkpoint_lsp_level; //type: uint8
        ydk::YLeaf checkpoint_lsp_local_flag; //type: boolean
        ydk::YLeaf checkpoint_lsp_id; //type: string

}; // Isis::Instances::Instance::CheckpointLsps::CheckpointLsp


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

        ydk::YList isis_sh_mesh_entry;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self> self;
        ydk::YList peer;
        
}; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData


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


class Isis::Instances::Instance::CheckpointTeTunnels : public ydk::Entity
{
    public:
        CheckpointTeTunnels();
        ~CheckpointTeTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CheckpointTeTunnel; //type: Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel

        ydk::YList checkpoint_te_tunnel;
        
}; // Isis::Instances::Instance::CheckpointTeTunnels


class Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel : public ydk::Entity
{
    public:
        CheckpointTeTunnel();
        ~CheckpointTeTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf checkpoint_te_level; //type: IsisLevel
        ydk::YLeaf checkpoint_te_system_id; //type: string
        ydk::YLeaf checkpoint_te_interface; //type: string
        ydk::YLeaf checkpoint_te_flags; //type: uint32
        ydk::YLeaf checkpoint_te_nexthop; //type: string
        ydk::YLeaf checkpoint_te_metric; //type: int32
        ydk::YLeaf checkpoint_te_metric_mode; //type: IsisMetricMode
        ydk::YLeaf checkpoint_te_bandwidth; //type: uint32
        ydk::YLeaf checkpoint_te_object_id; //type: uint32

}; // Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_7_ */

