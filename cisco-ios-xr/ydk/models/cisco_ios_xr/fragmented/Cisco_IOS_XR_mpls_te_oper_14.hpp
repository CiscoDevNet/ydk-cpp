#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_14_
#define _CISCO_IOS_XR_MPLS_TE_OPER_14_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_12.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_13.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs

        ydk::YList srl_gs;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray : public ydk::Entity
{
    public:
        PathAffinityArray();
        ~PathAffinityArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_affinity; //type: uint32
        class HopExtendedAffinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity

        ydk::YList hop_extended_affinity;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity : public ydk::Entity
{
    public:
        HopExtendedAffinity();
        ~HopExtendedAffinity();

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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn : public ydk::Entity
{
    public:
        ReverseEroIn();
        ~ReverseEroIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath : public ydk::Entity
{
    public:
        S2lSegmentRoutingPath();
        ~S2lSegmentRoutingPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: TeSrSid
        ydk::YLeaf has_ip_addresses; //type: boolean
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf has_mpls_label; //type: boolean
        ydk::YLeaf mpls_label_value; //type: uint32
        ydk::YLeaf has_entropy_label; //type: boolean

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo : public ydk::Entity
{
    public:
        P2pInfo();
        ~P2pInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bidirectional; //type: boolean
        class AutoBandwidthStatus; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus
        class AutoBandwidthConfig; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig
        class AutoBandwidthOper; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus> auto_bandwidth_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig> auto_bandwidth_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper> auto_bandwidth_oper;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus : public ydk::Entity
{
    public:
        AutoBandwidthStatus();
        ~AutoBandwidthStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_enabled; //type: boolean
        ydk::YLeaf reactivation_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig : public ydk::Entity
{
    public:
        AutoBandwidthConfig();
        ~AutoBandwidthConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_collect_only; //type: boolean
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf maximum_bandwidth; //type: uint32
        ydk::YLeaf application_frequency; //type: uint32
        ydk::YLeaf collection_frequency; //type: uint32
        ydk::YLeaf adjustment_threshold_percent; //type: uint32
        ydk::YLeaf adjustment_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_percent; //type: uint32
        ydk::YLeaf overflow_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_limit; //type: uint32
        ydk::YLeaf underflow_threshold_percent; //type: uint32
        ydk::YLeaf underflow_threshold_value; //type: uint32
        ydk::YLeaf underflow_threshold_limit; //type: uint32
        ydk::YLeaf resignal_last_bandwidth_enabled; //type: boolean
        ydk::YLeaf resignal_last_bandwidth_timeout; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper : public ydk::Entity
{
    public:
        AutoBandwidthOper();
        ~AutoBandwidthOper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_bandwidth_applied; //type: uint32
        ydk::YLeaf bandwidth_pool_type; //type: MplsTeBwPool
        ydk::YLeaf bandwidth_applications; //type: uint32
        ydk::YLeaf last_application_trigger; //type: TeAutobwAppTrigger
        ydk::YLeaf application_jitter; //type: uint32
        ydk::YLeaf time_left_application; //type: uint32
        ydk::YLeaf samples_collected; //type: uint32
        ydk::YLeaf time_left_collection; //type: uint32
        ydk::YLeaf highest_bandwidth; //type: uint32
        ydk::YLeaf underflow_highest_bandwidth; //type: uint32
        ydk::YLeaf threshold_overflows; //type: uint32
        ydk::YLeaf overflow_early_bw_applications; //type: uint32
        ydk::YLeaf threshold_underflows; //type: uint32
        ydk::YLeaf underflow_early_bw_applications; //type: uint32
        ydk::YLeaf collect_only_requested_bandwidth; //type: uint32
        ydk::YLeaf application_reject_reason; //type: TeAutobwAppRej
        ydk::YLeaf resignal_last_bandwidth_expire_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity : public ydk::Entity
{
    public:
        AutoCapacity();
        ~AutoCapacity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoCapacityConfiguration; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration
        class AutoCapacityStats; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats
        class Clone; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration> auto_capacity_configuration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats> auto_capacity_stats;
        ydk::YList clone;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration : public ydk::Entity
{
    public:
        AutoCapacityConfiguration();
        ~AutoCapacityConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_clones; //type: uint32
        ydk::YLeaf maximum_clones; //type: uint32
        ydk::YLeaf merge_bandwidth; //type: uint32
        ydk::YLeaf split_bandwidth; //type: uint32
        ydk::YLeaf nominal_bandwidth; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats : public ydk::Entity
{
    public:
        AutoCapacityStats();
        ~AutoCapacityStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf splits; //type: uint32
        ydk::YLeaf merges; //type: uint32
        ydk::YLeaf total_clones_created; //type: uint32
        ydk::YLeaf total_clones_deleted; //type: uint32
        ydk::YLeaf high_watermark_clones; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone : public ydk::Entity
{
    public:
        Clone();
        ~Clone();

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
        ydk::YLeaf creation_timestamp; //type: uint32
        ydk::YLeaf state; //type: MteTunnelOperState
        ydk::YLeaf signaled_bandwidth; //type: uint32
        ydk::YLeaf current_bandwidth_demand; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CurrentSetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup
        class ReoptSetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup
        class GmplsPathProtectSetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup
        class PreviousSetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup
        class PreviousGmplsPathProtectSetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup
        class GmplsOtherSetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup
        class GmplsOtherProtectSetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup
        class StandbySetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup
        class StandbyReoptSetup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup
        class LastReOptFail; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail
        class LastStdbyReOptFail; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup> current_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup> reopt_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup> gmpls_path_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup> previous_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup> previous_gmpls_path_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup> gmpls_other_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup> gmpls_other_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup> standby_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup> standby_reopt_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail> last_re_opt_fail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail> last_stdby_re_opt_fail;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup : public ydk::Entity
{
    public:
        CurrentSetup();
        ~CurrentSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_setup_timer; //type: uint32
        ydk::YLeaf selection_reason; //type: string
        ydk::YLeaf current_setup_last_error; //type: string
        ydk::YLeaf protection_role; //type: TeLspPathProtectionRole
        class ConnectedUptimes; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes> connected_uptimes;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes : public ydk::Entity
{
    public:
        ConnectedUptimes();
        ~ConnectedUptimes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_lsp_uptime; //type: uint32
        ydk::YLeaf current_uptime; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup : public ydk::Entity
{
    public:
        ReoptSetup();
        ~ReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reoptimized_setup_uptime; //type: uint32
        ydk::YLeaf reoptimized_setup_timer; //type: uint32
        ydk::YLeaf reoptimized_setup_last_error; //type: string
        ydk::YLeaf protection_role; //type: TeLspPathProtectionRole

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup : public ydk::Entity
{
    public:
        GmplsPathProtectSetup();
        ~GmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protecting_setup_uptime; //type: uint32
        ydk::YLeaf protecting_setup_timer; //type: uint32
        ydk::YLeaf protecting_setup_last_error; //type: string

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup : public ydk::Entity
{
    public:
        PreviousSetup();
        ~PreviousSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_path_option; //type: string
        ydk::YLeaf previous_tunnel_instance; //type: uint32
        ydk::YLeaf previous_fail_reason; //type: string
        ydk::YLeaf previous_setup_last_error; //type: string

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup : public ydk::Entity
{
    public:
        PreviousGmplsPathProtectSetup();
        ~PreviousGmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_protect_path_option; //type: string
        ydk::YLeaf previous_protect_tunnel_instance; //type: uint32
        ydk::YLeaf previous_protect_fail_reason; //type: string
        ydk::YLeaf previous_protect_setup_last_error; //type: string

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup : public ydk::Entity
{
    public:
        GmplsOtherSetup();
        ~GmplsOtherSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_index; //type: uint32
        ydk::YLeaf other_setup_error; //type: string

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup : public ydk::Entity
{
    public:
        GmplsOtherProtectSetup();
        ~GmplsOtherProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_index; //type: uint32
        ydk::YLeaf other_setup_error; //type: string

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup : public ydk::Entity
{
    public:
        StandbySetup();
        ~StandbySetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf standby_lsp_uptime; //type: uint32
        ydk::YLeaf standby_setup_timer; //type: uint32
        ydk::YLeaf protection_role; //type: TeLspPathProtectionRole

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup : public ydk::Entity
{
    public:
        StandbyReoptSetup();
        ~StandbyReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reoptimized_setup_uptime; //type: uint32
        ydk::YLeaf reoptimized_setup_timer; //type: uint32
        ydk::YLeaf reoptimized_setup_last_error; //type: string
        ydk::YLeaf protection_role; //type: TeLspPathProtectionRole

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail : public ydk::Entity
{
    public:
        LastReOptFail();
        ~LastReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf re_opt_failed_destination; //type: string
        ydk::YLeaf re_opt_failed_timestamp; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail : public ydk::Entity
{
    public:
        LastStdbyReOptFail();
        ~LastStdbyReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf re_opt_failed_destination; //type: string
        ydk::YLeaf re_opt_failed_timestamp; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection : public ydk::Entity
{
    public:
        PathProtection();
        ~PathProtection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_of_switchover_sec; //type: uint32
        ydk::YLeaf switchover_total; //type: uint16
        ydk::YLeaf switchover_ready; //type: uint16
        ydk::YLeaf standby_reoptimized_number; //type: uint16
        ydk::YLeaf switchover_reason; //type: uint16
        ydk::YLeaf diversity_type; //type: TePpDiversity
        ydk::YLeaf is_path_protect_configured; //type: boolean
        ydk::YLeaf path_protection_protected_by_id; //type: uint32
        ydk::YLeaf valid_path_protection_path_option_exists; //type: boolean
        ydk::YLeaf is_path_protect_switch_over_underway; //type: boolean
        ydk::YLeaf reoptimization_time_remaining; //type: uint32
        class Switchover; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover> switchover;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover : public ydk::Entity
{
    public:
        Switchover();
        ~Switchover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2mpS2lDeletionSubcause

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup : public ydk::Entity
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
        class WeightedSrlgInfo; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo
        class Iep; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo> weighted_srlg_info;
        ydk::YList iep;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo : public ydk::Entity
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

        class ProtectedInterfaceSrlg; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg
        class WeightedSrlgHop; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop

        ydk::YList protected_interface_srlg;
        ydk::YList weighted_srlg_hop;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop : public ydk::Entity
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
        class CommonSrlg; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg

        ydk::YList common_srlg;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep : public ydk::Entity
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
        class IepHop; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop

        ydk::YList iep_hop;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation : public ydk::Entity
{
    public:
        PceDelegation();
        ~PceDelegation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption : public ydk::Entity
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

        ydk::YLeaf status; //type: MplsTeSoftPreemptionState
        ydk::YLeaf time_in_preemption_pending; //type: uint16
        ydk::YLeaf preemption_pending_resolution; //type: MplsTeSoftPreemptionResolution
        class SoftPreemptionCounters; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters
        class SoftPreemptionPathError; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters> soft_preemption_counters;
        ydk::YList soft_preemption_path_error;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters : public ydk::Entity
{
    public:
        SoftPreemptionCounters();
        ~SoftPreemptionCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf soft_preemption_events; //type: uint32
        ydk::YLeaf reopt_completed_ls_ps; //type: uint32
        ydk::YLeaf torn_down_ls_ps; //type: uint32
        ydk::YLeaf path_protection_switchover_ls_ps; //type: uint32
        ydk::YLeaf frr_triggered_ls_ps; //type: uint32
        ydk::YLeaf time_in_preemption_pending_min; //type: uint16
        ydk::YLeaf time_in_preemption_pending_max; //type: uint16
        ydk::YLeaf time_in_preemption_pending_avg; //type: uint16

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError : public ydk::Entity
{
    public:
        SoftPreemptionPathError();
        ~SoftPreemptionPathError();

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
        ydk::YLeaf preempting_link_address; //type: string

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel : public ydk::Entity
{
    public:
        WdmUnitunnel();
        ~WdmUnitunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_state; //type: MplsTeTunnelState
        ydk::YLeaf tunnel_role; //type: MplsTeTunnelRole
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf local_optical_router_id; //type: string
        ydk::YLeaf remote_optical_router_id; //type: string
        ydk::YLeaf controlled_interface; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf label_origin; //type: MplsTeMgmtGmplsLabelOrigin
        ydk::YLeaf srlg_discovery; //type: boolean

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo : public ydk::Entity
{
    public:
        TransportTunnelInfo();
        ~TransportTunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status_homepath_working; //type: boolean
        class Otn; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn
        class StaticUni; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni
        class EgressStaticUni; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni
        class HomepathEro; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro
        class DiversityInfo; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni> static_uni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni> egress_static_uni;
        ydk::YList homepath_ero;
        ydk::YList diversity_info;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config_bit_rate; //type: uint32
        class BandwidthCfg; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg> bandwidth_cfg;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg : public ydk::Entity
{
    public:
        BandwidthCfg();
        ~BandwidthCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni : public ydk::Entity
{
    public:
        StaticUni();
        ~StaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_port; //type: string
        ydk::YLeaf client_if_handle; //type: string
        ydk::YLeaf client_odu_name; //type: string
        ydk::YLeaf client_odu_if_handle; //type: string
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf local_termination; //type: MplsTeTermination
        ydk::YLeaf static_uni_type; //type: MplsTeUni
        ydk::YLeaf term_client_port; //type: string
        ydk::YLeaf term_client_if_handle; //type: string
        class TermInterfaceSrlg; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg> term_interface_srlg;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg : public ydk::Entity
{
    public:
        TermInterfaceSrlg();
        ~TermInterfaceSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiscoveredSrlg; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg

        ydk::YList discovered_srlg;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg : public ydk::Entity
{
    public:
        DiscoveredSrlg();
        ~DiscoveredSrlg();

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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni : public ydk::Entity
{
    public:
        EgressStaticUni();
        ~EgressStaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_termination; //type: MplsTeTermination
        ydk::YLeaf remote_uni_type; //type: MplsTeUni
        class EgressPort; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort
        class TermEgressPort; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort> egress_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort> term_egress_port;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort : public ydk::Entity
{
    public:
        EgressPort();
        ~EgressPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr> te_addr;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr : public ydk::Entity
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
        class Ipv4UnnumberedAddress; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort : public ydk::Entity
{
    public:
        TermEgressPort();
        ~TermEgressPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr> te_addr;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr : public ydk::Entity
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
        class Ipv4UnnumberedAddress; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro : public ydk::Entity
{
    public:
        HomepathEro();
        ~HomepathEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo : public ydk::Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo : public ydk::Entity
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
        class EventCounters; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters
        class DampeningInfo; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters> event_counters;
        ydk::YList dampening_info;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters : public ydk::Entity
{
    public:
        EventCounters();
        ~EventCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_create_events; //type: uint32
        ydk::YLeaf session_up_events; //type: uint32
        ydk::YLeaf session_creation_failed_events; //type: uint32
        ydk::YLeaf session_down_events; //type: uint32
        ydk::YLeaf session_admin_down_events; //type: uint32
        ydk::YLeaf session_gracefully_delete_events; //type: uint32
        ydk::YLeaf session_non_gracefully_delete_events; //type: uint32
        ydk::YLeaf session_create_timeout_events; //type: uint32
        ydk::YLeaf session_replay_events; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir : public ydk::Entity
{
    public:
        OtnBidir();
        ~OtnBidir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aps; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps
        class Restoration; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps> aps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration> restoration;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp; //type: MplsTeLspMode
        ydk::YLeaf diversity_type; //type: TePpDiversity
        class ProtectionProfile; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile> protection_profile;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile : public ydk::Entity
{
    public:
        ProtectionProfile();
        ~ProtectionProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule> revert_schedule;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration : public ydk::Entity
{
    public:
        Restoration();
        ~Restoration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf revert_option; //type: TePnrRevertOptions
        ydk::YLeaf diverse_lsp; //type: MplsTeLspMode
        ydk::YLeaf diversity_type; //type: TePpDiversity

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir : public ydk::Entity
{
    public:
        Bidir();
        ~Bidir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_bandwidth; //type: uint32
        ydk::YLeaf reverse_bandwidth_standby; //type: uint32
        class ReverseEroErrorCurrent; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent
        class ReverseEroErrorReopt; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt
        class ReverseEroErrorStandby; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby
        class ReverseEroErrorStandbyReopt; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent> reverse_ero_error_current;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt> reverse_ero_error_reopt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby> reverse_ero_error_standby;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt> reverse_ero_error_standby_reopt;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent : public ydk::Entity
{
    public:
        ReverseEroErrorCurrent();
        ~ReverseEroErrorCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError

        ydk::YList path_calculation_error;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt : public ydk::Entity
{
    public:
        ReverseEroErrorReopt();
        ~ReverseEroErrorReopt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError

        ydk::YList path_calculation_error;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby : public ydk::Entity
{
    public:
        ReverseEroErrorStandby();
        ~ReverseEroErrorStandby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError

        ydk::YList path_calculation_error;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt : public ydk::Entity
{
    public:
        ReverseEroErrorStandbyReopt();
        ~ReverseEroErrorStandbyReopt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError

        ydk::YList path_calculation_error;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet : public ydk::Entity
{
    public:
        XroAttributeSet();
        ~XroAttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion : public ydk::Entity
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
        class AttributeSetPathOption; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2mpte; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte
        class AttributeSetApsPp; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2pTe; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe> attribute_set_p2p_te;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
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
        ydk::YLeaf is_delay_limit_configured; //type: boolean
        ydk::YLeaf delay_limit; //type: uint32
        class Affinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        ydk::YList tunnel_id;
        ydk::YList version_info;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
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
        class SignalledName; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList tunnel_id;
        ydk::YList protected_interface;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
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
        ydk::YLeaf is_forward_class_configured; //type: boolean
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
        class Affinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList mesh_group_id;
        ydk::YList tunnel_id;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
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

        class Xro; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
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
        class XroSubobject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
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
        class Ipv4Subobject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
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
        class Fec; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
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
        class FecDestinationInfo; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte : public ydk::Entity
{
    public:
        AttributeSetP2mpte();
        ~AttributeSetP2mpte();

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
        class Affinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity> affinity;
        ydk::YList tunnel_id;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe : public ydk::Entity
{
    public:
        AttributeSetP2pTe();
        ~AttributeSetP2pTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2lSrPathSelection
        ydk::YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_selection_invalidation_action; //type: TePathInvalAction
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf path_selection_metric; //type: MplsTeMetric
        ydk::YLeaf is_path_selection_metric_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_margin; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        ydk::YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        ydk::YLeaf is_path_select_configured; //type: boolean
        ydk::YLeaf is_prepend_list_configured; //type: boolean
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
        class Affinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity
        class Logging; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging
        class PrependList; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList> prepend_list;
        ydk::YList tunnel_id;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList : public ydk::Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrependEntry; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry

        ydk::YList prepend_entry;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry : public ydk::Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAttributeSetSrPrepend
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf next_label; //type: uint32

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId : public ydk::Entity
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

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence : public ydk::Entity
{
    public:
        TeTunnelConvergence();
        ~TeTunnelConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_convergence_in_progress; //type: boolean
        ydk::YLeaf frr_trigger_time; //type: uint64
        ydk::YLeaf pcalc_complete_time; //type: uint64
        ydk::YLeaf convergence_complete_time; //type: uint64
        ydk::YLeaf binding_label_rewrite_time; //type: uint64
        ydk::YLeaf vif_creation_time; //type: uint64
        class ConvergenceLsp; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp> convergence_lsp;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp : public ydk::Entity
{
    public:
        ConvergenceLsp();
        ~ConvergenceLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_in; //type: uint64
        ydk::YLeaf path_out; //type: uint64
        ydk::YLeaf resv_in; //type: uint64
        ydk::YLeaf resv_out; //type: uint64
        ydk::YLeaf label_rewrite; //type: uint64
        ydk::YLeaf tunnel_rewrite; //type: uint64
        ydk::YLeaf creation_time; //type: uint64

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        ydk::YLeaf fault_in_label; //type: uint32
        ydk::YLeaf is_lockout; //type: boolean
        ydk::YLeaf lockout_timestamp; //type: uint32
        ydk::YLeaf lockout_lsp_id; //type: uint16
        ydk::YLeaf origination; //type: FlexLspLockoutOrigination

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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
        ydk::YLeaf destination_state; //type: TeDestinationState
        ydk::YLeaf active_path_option_index; //type: uint32
        ydk::YLeaf path_option_exhausted; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf path_change_time; //type: uint32
        ydk::YLeaf total_uptime; //type: uint32
        ydk::YLeaf s2l_exist; //type: boolean
        ydk::YLeaf destination_deletion_cause; //type: TeP2mpS2lDeletionCause
        ydk::YLeaf destination_deletion_sub_cause; //type: TeP2mpS2lDeletionSubcause
        ydk::YLeaf destination_deletion_timestamp; //type: uint32
        ydk::YLeaf is_inter_area; //type: boolean
        class InterAreaReoptimization; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization
        class PathOptionEntry; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry
        class PathOption; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization> inter_area_reoptimization;
        ydk::YList path_option_entry;
        ydk::YList path_option;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization : public ydk::Entity
{
    public:
        InterAreaReoptimization();
        ~InterAreaReoptimization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_path_queries; //type: uint16
        ydk::YLeaf time_since_last_query_sent; //type: uint32
        ydk::YLeaf received_preferred_path_errors; //type: uint16
        ydk::YLeaf time_since_last_preferred_path_error; //type: uint32
        ydk::YLeaf received_preferred_tree_errors; //type: uint16
        ydk::YLeaf time_since_last_preferred_tree_error; //type: uint32
        ydk::YLeaf preferred_path_error_node; //type: string
        ydk::YLeaf preferred_tree_error_node; //type: string

}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry : public ydk::Entity
{
    public:
        PathOptionEntry();
        ~PathOptionEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index_is_valid; //type: boolean
        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf path_option_name; //type: string
        ydk::YLeaf path_option_type; //type: MplsTePathoption
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf explicit_path_id; //type: uint16
        ydk::YLeaf holddown_duration; //type: uint16
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf path_option_area_id; //type: string
        ydk::YLeaf is_strict_explicit_path; //type: boolean
        ydk::YLeaf is_helddown; //type: boolean
        ydk::YLeaf is_lockdown; //type: boolean
        ydk::YLeaf is_verbatim; //type: boolean
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf has_attribute_set; //type: boolean
        ydk::YLeaf attribute_set_found; //type: boolean
        ydk::YLeaf has_xro_attribute_set; //type: boolean
        ydk::YLeaf xro_attribute_set_found; //type: boolean
        ydk::YLeaf is_segment_routing; //type: boolean
        ydk::YLeaf protected_by_path_option_index; //type: uint32
        ydk::YLeaf restored_from_path_option_index; //type: uint32
        class AttributeSet; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet
        class XroAttributeSet; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet
        class PathCalculationError; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::PathCalculationError
        class RemergeError; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::RemergeError
        class SignallingError; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::SignallingError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet> attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet> xro_attribute_set;
        ydk::YList path_calculation_error;
        ydk::YList remerge_error;
        ydk::YList signalling_error;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet : public ydk::Entity
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

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion : public ydk::Entity
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
        class AttributeSetPathOption; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2mpte; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2mpte
        class AttributeSetApsPp; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2pTe; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2pTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2pTe> attribute_set_p2p_te;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
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
        ydk::YLeaf is_delay_limit_configured; //type: boolean
        ydk::YLeaf delay_limit; //type: uint32
        class Affinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        ydk::YList tunnel_id;
        ydk::YList version_info;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_14_ */

