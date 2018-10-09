#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_30_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_30_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_26.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_29.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups : public ydk::Entity
{
    public:
        UpdateGenerationSubGroups();
        ~UpdateGenerationSubGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateGenerationSubGroup; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup

        ydk::YList update_generation_sub_group;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup : public ydk::Entity
{
    public:
        UpdateGenerationSubGroup();
        ~UpdateGenerationSubGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_index; //type: uint32
        ydk::YLeaf sub_group_index; //type: uint32
        ydk::YLeaf sub_group_id; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf sub_group_index_xr; //type: uint32
        ydk::YLeaf sub_group_id_xr; //type: uint32
        ydk::YLeaf parent_sub_group_index; //type: uint32
        ydk::YLeaf parent_sub_group_id; //type: uint32
        ydk::YLeaf update_group_index_xr; //type: uint32
        ydk::YLeaf update_main_table_version; //type: uint32
        ydk::YLeaf update_vrf_table_rib_version; //type: uint32
        ydk::YLeaf current_update_limit_sub_group; //type: uint32
        ydk::YLeaf configured_update_limit_sub_group; //type: uint32
        ydk::YLeaf update_out_queue_messages; //type: uint32
        ydk::YLeaf update_out_queue_size; //type: uint32
        ydk::YLeaf update_throttled; //type: boolean
        ydk::YLeaf refresh_sub_group_count; //type: uint32
        ydk::YLeaf filter_group_count; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf nsr_version; //type: uint32
        ydk::YLeaf pending_target_version; //type: uint32
        ydk::YLeaf next_resume_version; //type: uint32
        ydk::YLeaf update_refresh_target_version; //type: uint32
        ydk::YLeaf io_write_event_pending; //type: boolean
        ydk::YLeaf update_default_route_sent; //type: boolean
        ydk::YLeaf merge_count; //type: uint32
        ydk::YLeaf last_merged_sub_group_index; //type: uint32
        ydk::YLeaf eo_r_attempted; //type: boolean
        ydk::YLeaf last_update_walk_end_age; //type: uint32
        ydk::YLeaf last_update_queued_age; //type: uint32
        class CreationTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp
        class LastMergeTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp
        class FirstUpdateWalkStartTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp
        class FirstUpdateWalkEndTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp
        class LastUpdateWalkStartTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp
        class LastUpdateWalkEndTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp
        class LastUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp> creation_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp> last_merge_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp> first_update_walk_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp> first_update_walk_end_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp> last_update_walk_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp> last_update_walk_end_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp> last_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp : public ydk::Entity
{
    public:
        CreationTimestamp();
        ~CreationTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp : public ydk::Entity
{
    public:
        LastMergeTimestamp();
        ~LastMergeTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp : public ydk::Entity
{
    public:
        FirstUpdateWalkStartTimestamp();
        ~FirstUpdateWalkStartTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp : public ydk::Entity
{
    public:
        FirstUpdateWalkEndTimestamp();
        ~FirstUpdateWalkEndTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp : public ydk::Entity
{
    public:
        LastUpdateWalkStartTimestamp();
        ~LastUpdateWalkStartTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp : public ydk::Entity
{
    public:
        LastUpdateWalkEndTimestamp();
        ~LastUpdateWalkEndTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp : public ydk::Entity
{
    public:
        LastUpdateQueuedTimestamp();
        ~LastUpdateQueuedTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics : public ydk::Entity
{
    public:
        UpdateStatistics();
        ~UpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_out_queue_messages_high; //type: uint32
        ydk::YLeaf update_out_queue_messages_cumulative; //type: uint32
        ydk::YLeaf update_out_queue_messages_discarded; //type: uint32
        ydk::YLeaf update_out_queue_messages_cleared; //type: uint32
        ydk::YLeaf update_out_queue_size_high; //type: uint32
        ydk::YLeaf update_out_queue_size_cumulative; //type: uint64
        ydk::YLeaf update_out_queue_size_discarded; //type: uint64
        ydk::YLeaf update_out_queue_size_cleared; //type: uint64
        ydk::YLeaf last_update_discard_age; //type: uint32
        ydk::YLeaf last_update_cleard_age; //type: uint32
        ydk::YLeaf update_throttle_count; //type: uint32
        ydk::YLeaf last_update_throttle_age; //type: uint32
        ydk::YLeaf update_recovery_count; //type: uint32
        ydk::YLeaf last_update_recovery_age; //type: uint32
        ydk::YLeaf update_memory_allocation_fail_count; //type: uint32
        ydk::YLeaf last_update_memory_allocation_fail_age; //type: uint32
        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp : public ydk::Entity
{
    public:
        LastUpdateDiscardTimestamp();
        ~LastUpdateDiscardTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp : public ydk::Entity
{
    public:
        LastUpdateClearedTimestamp();
        ~LastUpdateClearedTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp : public ydk::Entity
{
    public:
        LastUpdateThrottleTimestamp();
        ~LastUpdateThrottleTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp : public ydk::Entity
{
    public:
        LastUpdateRecoveryTimestamp();
        ~LastUpdateRecoveryTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public ydk::Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies : public ydk::Entity
{
    public:
        NextHopAddressFamilies();
        ~NextHopAddressFamilies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHopAddressFamily; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily

        ydk::YList next_hop_address_family;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily : public ydk::Entity
{
    public:
        NextHopAddressFamily();
        ~NextHopAddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_af_name; //type: BgpAddressFamily
        class NextHopAfVrfAf; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf
        class NextHopAfs; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf> next_hop_af_vrf_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs> next_hop_afs;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf : public ydk::Entity
{
    public:
        NextHopAfVrfAf();
        ~NextHopAfVrfAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf gwaf_name; //type: BgpAfi
        ydk::YLeaf total_nexthops; //type: uint32
        ydk::YLeaf critical_trigger_delay; //type: uint32
        ydk::YLeaf non_critical_trigger_delay; //type: uint32
        ydk::YLeaf table_active; //type: boolean
        ydk::YLeaf nh_rib_up; //type: boolean
        ydk::YLeaf nh_rib_version; //type: uint32
        ydk::YLeaf nh_nexthop_version; //type: uint32
        ydk::YLeaf nh_table_id; //type: uint32
        ydk::YLeaf epe_table_version; //type: uint32
        ydk::YLeaf epe_label_version; //type: uint32
        ydk::YLeaf epe_downloaded_version; //type: uint32
        ydk::YLeaf epe_standby_version; //type: uint32
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics> performance_statistics;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics : public ydk::Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical_notf_count; //type: uint32
        ydk::YLeaf noncritical_notf_count; //type: uint32
        ydk::YLeaf last_notf_bestpath_deletes; //type: uint32
        ydk::YLeaf last_notf_bestpath_changes; //type: uint32
        ydk::YLeaf nh_sync_reg_calls; //type: uint32
        ydk::YLeaf nha_sync_reg_calls; //type: uint32
        ydk::YLeaf nha_sync_un_reg_calls; //type: uint32
        ydk::YLeaf nh_pending_registrations; //type: uint32
        ydk::YLeaf nh_peak_registrations; //type: uint32
        ydk::YLeaf nh_batch_finish_calls; //type: uint32
        ydk::YLeaf nh_flush_timer_calls; //type: uint32
        ydk::YLeaf nh_last_sync_reg_ts; //type: uint32
        ydk::YLeaf nh_last_a_sync_reg_ts; //type: uint32
        ydk::YLeaf nh_last_a_sync_un_reg_ts; //type: uint32
        ydk::YLeaf nh_last_batch_finish_ts; //type: uint32
        ydk::YLeaf nh_last_flush_timer_ts; //type: uint32
        ydk::YLeaf nhrib_update_calls; //type: uint32
        ydk::YLeaf nhrib_update_time; //type: uint32
        ydk::YLeaf nexthops_sent_to_rib; //type: uint32
        ydk::YLeaf nexthops_resent_to_rib; //type: uint32
        ydk::YLeaf nexthops_removed_from_rib; //type: uint32
        ydk::YLeaf rib_sync_registers_failed; //type: uint32
        ydk::YLeaf riba_sync_registers_failed; //type: uint32
        ydk::YLeaf ribnh_reg_failed_for_no_tbl_id; //type: uint32
        ydk::YLeaf ribnh_reg_failed_for_no_rib_conn; //type: uint32
        ydk::YLeaf tunnel_walk_nh_not_found; //type: uint32
        ydk::YLeaf tunnel_walk_gw_not_found; //type: uint32
        ydk::YLeaf tunnel_walk_backup_creates; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs : public ydk::Entity
{
    public:
        NextHopAfs();
        ~NextHopAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHopAf; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf

        ydk::YList next_hop_af;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf : public ydk::Entity
{
    public:
        NextHopAf();
        ~NextHopAf();

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
        ydk::YLeaf attribute_set; //type: string
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf rib_nexthop_id; //type: uint32
        ydk::YLeaf nexthop_pending_registration; //type: uint8
        ydk::YLeaf nexthop_reference_count; //type: uint32
        ydk::YLeaf nh_reference_count_total; //type: uint32
        ydk::YLeaf nh_first_hop_if_handle; //type: string
        ydk::YLeaf nexthop_aigp_metric; //type: uint32
        ydk::YLeaf nexthop_gateway_reachable; //type: boolean
        ydk::YLeaf nexthop_gateway_prefix_connected; //type: boolean
        ydk::YLeaf nexthop_gateway_prefix_length; //type: uint32
        class NexthopAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel
        class NexthopInternalInfo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo
        class NexthopGatewayInfo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress> nexthop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel> nh_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo> nexthop_internal_info;
        ydk::YList nexthop_gateway_info;
        ydk::YList neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress : public ydk::Entity
{
    public:
        NexthopAddress();
        ~NexthopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel : public ydk::Entity
{
    public:
        NhTunnel();
        ~NhTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_type; //type: BgpTunnel
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf is_tunnel_info_stale; //type: boolean
        ydk::YLeaf is_tunnel_registered; //type: boolean
        ydk::YLeaf tunnel_v6_required; //type: boolean
        ydk::YLeaf tunnel_v6_enabled; //type: boolean
        ydk::YLeaf tunnel_notif_first_rcvd; //type: boolean
        ydk::YLeaf tunnel_state_skip_reg; //type: boolean
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf tunnel_if_handle; //type: uint32
        ydk::YLeaf last_tunnel_update; //type: uint32
        ydk::YLeaf tunnel_color; //type: uint32
        ydk::YLeaf is_tunnel_color_only; //type: boolean
        ydk::YLeaf tunnel_endpoint_afi; //type: BgpAfi

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo : public ydk::Entity
{
    public:
        NexthopInternalInfo();
        ~NexthopInternalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nexthop_id; //type: uint32
        ydk::YLeaf nexthop_version; //type: uint32
        ydk::YLeaf nexthop_flags; //type: uint32
        ydk::YLeaf nexthop_if_handle; //type: uint32
        ydk::YLeaf nexthop_af_user_bits; //type: uint32
        ydk::YLeaf nexthop_label; //type: uint32
        ydk::YLeaf gateway_flags; //type: uint32
        class NexthopAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress
        class NexthopMetrice; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice
        class NexthopRefcount; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount
        class NexthopGatewayInternalInfo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress> nexthop_address;
        ydk::YList nexthop_metrice;
        ydk::YList nexthop_refcount;
        ydk::YList nexthop_gateway_internal_info;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress : public ydk::Entity
{
    public:
        NexthopAddress();
        ~NexthopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice : public ydk::Entity
{
    public:
        NexthopMetrice();
        ~NexthopMetrice();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount : public ydk::Entity
{
    public:
        NexthopRefcount();
        ~NexthopRefcount();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo : public ydk::Entity
{
    public:
        NexthopGatewayInternalInfo();
        ~NexthopGatewayInternalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gateway_flags; //type: uint32
        ydk::YLeaf registration_type; //type: BgpNhValidate
        ydk::YLeaf registration_since; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo : public ydk::Entity
{
    public:
        NexthopGatewayInfo();
        ~NexthopGatewayInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nexthop_route_prefix_length; //type: uint8
        ydk::YLeaf nexthop_route_protocol; //type: string
        ydk::YLeaf nexthop_route_path_count; //type: uint32
        ydk::YLeaf nexthop_af_invalid_bits; //type: uint16
        ydk::YLeaf nexthop_status; //type: uint8
        ydk::YLeaf nexthop_tableid; //type: uint64
        ydk::YLeaf nexthop_metric; //type: uint32
        ydk::YLeaf last_event_type; //type: BgpNhEvent
        ydk::YLeaf last_update_type; //type: BgpNhUpdate
        ydk::YLeaf critical_events; //type: uint32
        ydk::YLeaf non_critical_events; //type: uint32
        ydk::YLeaf last_event_since; //type: uint32
        ydk::YLeaf last_rib_update; //type: uint32
        ydk::YLeaf nexthop_mpls_enabled; //type: boolean
        ydk::YLeaf nexthop_mpls_interfaces; //type: uint32
        ydk::YLeaf nexthop_mpls_label; //type: uint32
        class NexthopRoute; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute
        class NexthopRoutePath; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute> nexthop_route;
        ydk::YList nexthop_route_path;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute : public ydk::Entity
{
    public:
        NexthopRoute();
        ~NexthopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath : public ydk::Entity
{
    public:
        NexthopRoutePath();
        ~NexthopRoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters : public ydk::Entity
{
    public:
        RtSetCounters();
        ~RtSetCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtSetCounter; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter

        ydk::YList rt_set_counter;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter : public ydk::Entity
{
    public:
        RtSetCounter();
        ~RtSetCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_set_id; //type: uint32
        class RouteTargetSet; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet> route_target_set;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet : public ydk::Entity
{
    public:
        RouteTargetSet();
        ~RouteTargetSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_set_len; //type: uint8
        ydk::YLeaf rt_set_id; //type: uint32
        ydk::YLeaf rt_set_net_count; //type: uint32
        class RtSet; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet

        ydk::YList rt_set;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet : public ydk::Entity
{
    public:
        RtSet();
        ~RtSet();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths : public ydk::Entity
{
    public:
        BmpPaths();
        ~BmpPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BmpPath; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath

        ydk::YList bmp_path;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath : public ydk::Entity
{
    public:
        BmpPath();
        ~BmpPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf bmp_net_flags; //type: uint32
        ydk::YLeaf bmp_net_version; //type: uint32
        ydk::YLeaf num_of_path; //type: uint32
        ydk::YLeaf has_local_label; //type: boolean
        ydk::YLeaf net_local_label; //type: uint32
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionAge
        class BmpPath_; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix> bgp_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp> version_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionAge> version_age;
        ydk::YList bmp_path;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix : public ydk::Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp : public ydk::Entity
{
    public:
        VersionTimestamp();
        ~VersionTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionAge : public ydk::Entity
{
    public:
        VersionAge();
        ~VersionAge();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionAge


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_ : public ydk::Entity
{
    public:
        BmpPath_();
        ~BmpPath_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bmp_path_flags; //type: uint32
        ydk::YLeaf bmp_path_adv_bit_map; //type: uint16
        ydk::YLeaf bmp_path_snd_bit_map; //type: uint16
        ydk::YLeaf bmp_nbr_bit_map; //type: uint32
        ydk::YLeaf local_path; //type: boolean
        ydk::YLeaf bpath_pointer; //type: uint64
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress
        class ReceivedLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::ReceivedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress> neighbor_address;
        ydk::YList received_label;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::ReceivedLabel : public ydk::Entity
{
    public:
        ReceivedLabel();
        ~ReceivedLabel();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::ReceivedLabel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups : public ydk::Entity
{
    public:
        UpdateGenerationUpdateGroups();
        ~UpdateGenerationUpdateGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateGenerationUpdateGroup; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup

        ydk::YList update_generation_update_group;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup : public ydk::Entity
{
    public:
        UpdateGenerationUpdateGroup();
        ~UpdateGenerationUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_index; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf neighbor_session_af_name; //type: uint8
        ydk::YLeaf update_group_index_xr; //type: uint32
        ydk::YLeaf update_group_flags2; //type: uint32
        ydk::YLeaf update_out_queue_messages; //type: uint32
        ydk::YLeaf update_out_queue_size; //type: uint32
        ydk::YLeaf update_sub_group_count; //type: uint32
        ydk::YLeaf sub_group_throttled_count; //type: uint32
        ydk::YLeaf refresh_sub_group_count; //type: uint32
        ydk::YLeaf refresh_sub_group_throttled_count; //type: uint32
        ydk::YLeaf filter_group_count; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32
        ydk::YLeaf neighbor_leaving_count; //type: uint32
        ydk::YLeaf update_generation_recovery_pending; //type: boolean
        ydk::YLeaf last_update_timer_expiry_age; //type: uint32
        ydk::YLeaf is_update_timer_running; //type: boolean
        ydk::YLeaf perm_pelem_encountered; //type: uint32
        ydk::YLeaf perm_pelem_allowed; //type: uint32
        ydk::YLeaf perm_pelem_not_allowed; //type: uint32
        ydk::YLeaf perm_pelem_exp_wdr; //type: uint32
        ydk::YLeaf perm_pelem_spur_wdr; //type: uint32
        ydk::YLeaf is_permanent; //type: boolean
        class LastUpdateTimerStartTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp
        class LastUpdateTimerStopTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp
        class LastUpdateTimerExpiryTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp
        class LastUpdateTimerRemainingValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue
        class LastUpdateTimerDelayValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp> last_update_timer_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp> last_update_timer_stop_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp> last_update_timer_expiry_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue> last_update_timer_remaining_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue> last_update_timer_delay_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp : public ydk::Entity
{
    public:
        LastUpdateTimerStartTimestamp();
        ~LastUpdateTimerStartTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp : public ydk::Entity
{
    public:
        LastUpdateTimerStopTimestamp();
        ~LastUpdateTimerStopTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp : public ydk::Entity
{
    public:
        LastUpdateTimerExpiryTimestamp();
        ~LastUpdateTimerExpiryTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue : public ydk::Entity
{
    public:
        LastUpdateTimerRemainingValue();
        ~LastUpdateTimerRemainingValue();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue : public ydk::Entity
{
    public:
        LastUpdateTimerDelayValue();
        ~LastUpdateTimerDelayValue();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics : public ydk::Entity
{
    public:
        UpdateStatistics();
        ~UpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_out_queue_messages_high; //type: uint32
        ydk::YLeaf update_out_queue_messages_cumulative; //type: uint32
        ydk::YLeaf update_out_queue_messages_discarded; //type: uint32
        ydk::YLeaf update_out_queue_messages_cleared; //type: uint32
        ydk::YLeaf update_out_queue_size_high; //type: uint32
        ydk::YLeaf update_out_queue_size_cumulative; //type: uint64
        ydk::YLeaf update_out_queue_size_discarded; //type: uint64
        ydk::YLeaf update_out_queue_size_cleared; //type: uint64
        ydk::YLeaf last_update_discard_age; //type: uint32
        ydk::YLeaf last_update_cleard_age; //type: uint32
        ydk::YLeaf update_throttle_count; //type: uint32
        ydk::YLeaf last_update_throttle_age; //type: uint32
        ydk::YLeaf update_recovery_count; //type: uint32
        ydk::YLeaf last_update_recovery_age; //type: uint32
        ydk::YLeaf update_memory_allocation_fail_count; //type: uint32
        ydk::YLeaf last_update_memory_allocation_fail_age; //type: uint32
        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp : public ydk::Entity
{
    public:
        LastUpdateDiscardTimestamp();
        ~LastUpdateDiscardTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp : public ydk::Entity
{
    public:
        LastUpdateClearedTimestamp();
        ~LastUpdateClearedTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp : public ydk::Entity
{
    public:
        LastUpdateThrottleTimestamp();
        ~LastUpdateThrottleTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp : public ydk::Entity
{
    public:
        LastUpdateRecoveryTimestamp();
        ~LastUpdateRecoveryTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public ydk::Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups : public ydk::Entity
{
    public:
        UpdateGenerationFilterGroups();
        ~UpdateGenerationFilterGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateGenerationFilterGroup; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup

        ydk::YList update_generation_filter_group;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup : public ydk::Entity
{
    public:
        UpdateGenerationFilterGroup();
        ~UpdateGenerationFilterGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_index; //type: uint32
        ydk::YLeaf sub_group_index; //type: uint32
        ydk::YLeaf sub_group_id; //type: uint32
        ydk::YLeaf filter_group_index; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf update_filter_group_index; //type: uint32
        ydk::YLeaf parent_filter_group_index; //type: uint32
        ydk::YLeaf sub_group_index_xr; //type: uint32
        ydk::YLeaf sub_group_id_xr; //type: uint32
        ydk::YLeaf parent_sub_group_index; //type: uint32
        ydk::YLeaf parent_sub_group_id; //type: uint32
        ydk::YLeaf update_group_index_xr; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks : public ydk::Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Network; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network

        ydk::YList network;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: string
        ydk::YLeaf network; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf has_inconsistent_paths; //type: boolean
        ydk::YLeaf is_net_aggregation_suppressed; //type: boolean
        ydk::YLeaf is_net_ldp_signaled; //type: boolean
        ydk::YLeaf table_version; //type: uint32
        ydk::YLeaf table_brib_version; //type: uint32
        ydk::YLeaf advertisedto_pe; //type: boolean
        ydk::YLeaf has_local_label; //type: boolean
        ydk::YLeaf net_local_label; //type: uint32
        ydk::YLeaf net_local_label_rewrite; //type: boolean
        ydk::YLeaf net_local_label_srgb; //type: boolean
        ydk::YLeaf has_lbl_retained; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf net_flags; //type: uint32
        ydk::YLeaf net_extended_flags; //type: uint32
        ydk::YLeaf net_multipath; //type: boolean
        ydk::YLeaf net_eibgp_multipath; //type: boolean
        ydk::YLeaf net_backup_available; //type: boolean
        ydk::YLeaf net_backup_label_rewrite_available; //type: boolean
        ydk::YLeaf rib_failed; //type: boolean
        ydk::YLeaf gateway_array; //type: uint32
        ydk::YLeaf resilient_nexthop_set; //type: uint32
        ydk::YLeaf is_permanent_network; //type: boolean
        ydk::YLeaf num_of_path; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf bit; //type: uint16
        ydk::YLeaf flags; //type: uint8
        ydk::YLeaf has_s_rv6sid_allocated; //type: boolean
        ydk::YLeaf srv6sid_address; //type: string
        ydk::YLeaf srv6sid_address_len; //type: uint32
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::VersionAge
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield
        class LocalProcessInstancePath; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath
        class ActiveProcessInstancePath; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::ActiveProcessInstancePath
        class LocalPathElement; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPathElement
        class ActivePathElement; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::ActivePathElement

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix> bgp_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::VersionTimestamp> version_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::VersionAge> version_age;
        ydk::YList local_peers_advertised_to;
        ydk::YList pe_peers_advertised_to;
        ydk::YList best_path_orr_bitfield;
        ydk::YList add_path_orr_bitfield;
        ydk::YList local_process_instance_path;
        ydk::YList active_process_instance_path;
        ydk::YList local_path_element;
        ydk::YList active_path_element;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix : public ydk::Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::VersionTimestamp : public ydk::Entity
{
    public:
        VersionTimestamp();
        ~VersionTimestamp();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::VersionTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::VersionAge : public ydk::Entity
{
    public:
        VersionAge();
        ~VersionAge();

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
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::VersionAge


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo : public ydk::Entity
{
    public:
        LocalPeersAdvertisedTo();
        ~LocalPeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_afi; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo : public ydk::Entity
{
    public:
        PePeersAdvertisedTo();
        ~PePeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_afi; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield : public ydk::Entity
{
    public:
        BestPathOrrBitfield();
        ~BestPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_afi; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield : public ydk::Entity
{
    public:
        AddPathOrrBitfield();
        ~AddPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_afi; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath : public ydk::Entity
{
    public:
        LocalProcessInstancePath();
        ~LocalProcessInstancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_path; //type: boolean
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf label_oor_version; //type: uint32
        ydk::YLeaf label_fail; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf source_route_distinguisher; //type: string
        ydk::YLeaf original_source_route_distinguisher; //type: string
        ydk::YLeaf prefix_version; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_vrf_name; //type: string
        ydk::YLeaf srcaf_name; //type: BgpAfi
        class AdvertisedNeighbor; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor
        class PathInformation; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation
        class AttributesAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AttributesAfterPolicyIn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor> advertised_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation> path_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AttributesAfterPolicyIn> attributes_after_policy_in;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor : public ydk::Entity
{
    public:
        AdvertisedNeighbor();
        ~AdvertisedNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AdvertisedNeighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation : public ydk::Entity
{
    public:
        PathInformation();
        ~PathInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_type; //type: BgpRoute1
        ydk::YLeaf is_path_valid; //type: boolean
        ydk::YLeaf is_path_damped; //type: boolean
        ydk::YLeaf is_path_history_held; //type: boolean
        ydk::YLeaf is_internal_path; //type: boolean
        ydk::YLeaf is_best_path; //type: boolean
        ydk::YLeaf is_as_best; //type: boolean
        ydk::YLeaf is_spkr_as_best; //type: boolean
        ydk::YLeaf is_partial_best; //type: boolean
        ydk::YLeaf is_aggregation_suppressed; //type: boolean
        ydk::YLeaf is_import_dampened; //type: boolean
        ydk::YLeaf is_import_suspect; //type: boolean
        ydk::YLeaf is_path_not_advertised; //type: boolean
        ydk::YLeaf is_path_not_advertised_to_ebgp; //type: boolean
        ydk::YLeaf is_path_advertised_local_as_only; //type: boolean
        ydk::YLeaf is_path_from_route_reflector; //type: boolean
        ydk::YLeaf is_path_received_only; //type: boolean
        ydk::YLeaf is_received_path_not_modified; //type: boolean
        ydk::YLeaf is_path_locally_sourced; //type: boolean
        ydk::YLeaf is_path_local_aggregate; //type: boolean
        ydk::YLeaf is_path_from_network_command; //type: boolean
        ydk::YLeaf is_path_from_redistribute_command; //type: boolean
        ydk::YLeaf is_path_imported; //type: boolean
        ydk::YLeaf is_path_reoriginated; //type: boolean
        ydk::YLeaf is_path_reoriginated_stitching; //type: boolean
        ydk::YLeaf is_path_vpn_only; //type: boolean
        ydk::YLeaf is_path_from_confederation_peer; //type: boolean
        ydk::YLeaf is_path_synced_with_igp; //type: boolean
        ydk::YLeaf is_path_multipath; //type: boolean
        ydk::YLeaf is_path_imp_candidate; //type: boolean
        ydk::YLeaf is_path_stale; //type: boolean
        ydk::YLeaf is_path_long_lived_stale; //type: boolean
        ydk::YLeaf is_path_backup; //type: boolean
        ydk::YLeaf is_path_backup_protect_multipath; //type: boolean
        ydk::YLeaf is_path_best_external; //type: boolean
        ydk::YLeaf is_path_additional_path; //type: boolean
        ydk::YLeaf is_path_nexthop_discarded; //type: boolean
        ydk::YLeaf has_local_net_label; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf path_weight; //type: uint16
        ydk::YLeaf neighbor_router_id; //type: string
        ydk::YLeaf has_mdt_group_addr; //type: boolean
        ydk::YLeaf l2vpn_size; //type: uint32
        ydk::YLeaf l2vpn_evpn_esi; //type: string
        ydk::YLeaf has_gw_addr; //type: boolean
        ydk::YLeaf has_nh_addr; //type: boolean
        ydk::YLeaf has_second_label; //type: boolean
        ydk::YLeaf second_label; //type: uint32
        ydk::YLeaf path_flap_count; //type: uint32
        ydk::YLeaf seconds_since_first_flap; //type: uint32
        ydk::YLeaf time_to_unsuppress; //type: uint32
        ydk::YLeaf dampen_penalty; //type: uint32
        ydk::YLeaf halflife_time; //type: uint32
        ydk::YLeaf suppress_penalty; //type: uint32
        ydk::YLeaf reuse_value; //type: uint32
        ydk::YLeaf maximum_suppress_time; //type: uint32
        ydk::YLeaf best_path_comp_stage; //type: BgpBpStage
        ydk::YLeaf best_path_id_comp_winner; //type: uint32
        ydk::YLeaf path_flags; //type: uint64
        ydk::YLeaf path_import_flags; //type: uint32
        ydk::YLeaf best_path_id; //type: uint32
        ydk::YLeaf local_path_id; //type: uint32
        ydk::YLeaf rcvd_path_id; //type: uint32
        ydk::YLeaf path_table_version; //type: uint32
        ydk::YLeaf advertisedto_pe; //type: boolean
        ydk::YLeaf rib_failed; //type: boolean
        ydk::YLeaf sn_rpki_origin_as_validity; //type: uint8
        ydk::YLeaf show_rpki_origin_as_validity; //type: boolean
        ydk::YLeaf ibgp_signaled_validity; //type: boolean
        ydk::YLeaf rpki_origin_as_validation_disabled; //type: boolean
        ydk::YLeaf accept_own_path; //type: boolean
        ydk::YLeaf accept_own_self_originated_path; //type: boolean
        ydk::YLeaf aigp_metric; //type: uint64
        ydk::YLeaf mvpn_sfs_path; //type: boolean
        ydk::YLeaf fspec_invalid_path; //type: boolean
        ydk::YLeaf has_mvpn_nbr_addr; //type: boolean
        ydk::YLeaf has_mvpn_nexthop_addr; //type: boolean
        ydk::YLeaf has_mvpn_pmsi; //type: boolean
        ydk::YLeaf mvpn_pmsi_type; //type: uint16
        ydk::YLeaf mvpn_pmsi_flags; //type: uint8
        ydk::YLeaf mvpn_pmsi_label; //type: uint32
        ydk::YLeaf has_mvpn_extcomm; //type: boolean
        ydk::YLeaf mvpn_path_flags; //type: uint16
        ydk::YLeaf local_nh; //type: boolean
        ydk::YLeaf rt_set_limit_enabled; //type: boolean
        ydk::YLeaf path_rt_set_id; //type: uint32
        ydk::YLeaf path_rt_set_route_count; //type: uint32
        ydk::YLeaf is_path_af_install_eligible; //type: boolean
        ydk::YLeaf is_permanent_path; //type: boolean
        ydk::YLeaf graceful_shutdown; //type: boolean
        ydk::YLeaf labeled_unicast_safi_path; //type: boolean
        ydk::YLeaf has_vpn_nexthop_addr; //type: boolean
        ydk::YLeaf is_orig_src_rd_present; //type: boolean
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf mac_ip_present; //type: boolean
        ydk::YLeaf mac_ip; //type: string
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress
        class NextHop; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NhTunnel
        class MdtGroupAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr
        class GwAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::GwAddr
        class NhAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NhAddr
        class BestPathCompWinner; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner
        class MvpnNbrAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr
        class MvpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr
        class VpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::VpnNexthopAddr
        class RcvdLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::RcvdLabel
        class L2vpnCircuitStatusValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::L2vpnCircuitStatusValue
        class MvpnPmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnPmsiValue
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::ExtendedCommunity
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::AddPathOrrBitfield

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix> bgp_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress> neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NhTunnel> nh_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr> mdt_group_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::GwAddr> gw_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NhAddr> nh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner> best_path_comp_winner;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr> mvpn_nbr_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr> mvpn_nexthop_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::VpnNexthopAddr> vpn_nexthop_addr;
        ydk::YList rcvd_label;
        ydk::YList l2vpn_circuit_status_value;
        ydk::YList mvpn_pmsi_value;
        ydk::YList extended_community;
        ydk::YList local_peers_advertised_to;
        ydk::YList pe_peers_advertised_to;
        ydk::YList best_path_orr_bitfield;
        ydk::YList add_path_orr_bitfield;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix : public ydk::Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_30_ */

